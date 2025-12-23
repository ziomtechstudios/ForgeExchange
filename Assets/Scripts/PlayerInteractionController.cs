using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class PlayerInteractionController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private PlayerController playerCont;
        [SerializeField] private WorkstationController workstationCont;
        [SerializeField] private DynamicSpriteLayering dynamicSpriteLayering;
        [SerializeField] private PlayerFishingController playerFishingCont;
        #endregion
        #region "Private Members"
        private StockpileController stockpileCont;
        #endregion
        #region Getters/Setters"
        public PlayerController PlayerCont => playerCont;
        public PlayerFishingController PlayerFishingCont => playerFishingCont;
        
        #endregion
        #region "Private Fields"
        private bool GoFishing(){
            playerCont.IsFishing = true;
            playerCont.M_Animator.SetBool(playerFishingCont.IsCastingHash, playerCont.IsFishing);
            playerCont.M_Animator.SetBool(playerCont.IsFishingHash, true);
            playerFishingCont.CastingRod();
            playerCont.PlayerInput.SwitchCurrentActionMap("FishingControls");
            return true;
        }
        public void UnEquipItem(){
            DestroyImmediate(gameObject.transform.Find("HoldingItem").GetChild(0).gameObject, true);
            playerCont.HoldingPrefab = null;
            playerCont.PlayerInventoryCont.SelectSlot(-1);
            playerCont.PlayerAtkCont.HasWeapon = false;
        }
        //TODO
        /*private bool GoSwimming() {
            playerCont.M_Animator.SetBool(playerCont.InWaterHash, dynamicSpriteLayering.IsObjInWater());
            return false;
        }*/
        private bool DropObj()
        {
            //Make sure we have reference to component in players LOS.
            if (stockpileCont == null)
                stockpileCont = playerCont.PlayerLOS.transform.GetComponent<StockpileController>();
            //If what the player is holding is an appropriate item for a stockpile and the stockpile is not full we add the item.
            //If the stockpile cant take in the item we set the playerHolding to true.
            if (stockpileCont.Deposit(1, playerCont.HoldingPrefab, playerCont.HoldingCont))
                playerCont.PlayerInventoryCont.DroppingItem();
            if (!playerCont.HoldingItem)
                playerCont.PlayerInput.SwitchCurrentActionMap("ShopControls");
            return playerCont.HoldingItem;
        }

        private bool PickUpObj()
        {
            //Make sure we have reference to component in players LOS.
            if (stockpileCont == null)
                stockpileCont = playerCont.PlayerLOS.transform.GetComponent<StockpileController>();
            //Make sure that the stockpile is not empty.
            if (!stockpileCont.IsEmpty)
            {
                //Occupy the objects in the players hands and have them slot it into first available slot.
                playerCont.HoldingItem = true;
                playerCont.HoldingPrefab = stockpileCont.ItemPrefab;
                playerCont.HoldingCont = stockpileCont.ItemPrefab.GetComponent<ItemController>();
                playerCont.PlayerInventoryCont.SlotItem();
                stockpileCont.Withdraw(1);
            }
            return playerCont.HoldingItem;
        }
        private bool ForgeInteraction(){
            switch (playerCont.HoldingCont.PrefabItemStruct.itemTag)
            {
                case "Fuel":
                    //First we check if this fuel deposit will be more than what the forge can handle
                    workstationCont.Overflow(playerCont.HoldingCont.PrefabItemStruct.fuelAmnt);
                    //If the item can be used as fuel, and we are not using workstation that doesn't use fuel and if refueling the workstation won't overflow
                    //Workstation that dont require fuel such as forge-pump will simply have their Fuel Full boolean set to true thereby !true.
                    if ((playerCont.HoldingCont.PrefabItemStruct.fuelAmnt != 0.0f) && (!workstationCont.BarFull))
                    {
                        workstationCont.Refuel(playerCont.HoldingCont.PrefabItemStruct.fuelAmnt);
                        playerCont.PlayerInventoryCont.DroppingItem();
                        return false;
                    }
                    else
                        return true;
                case "Ore":
                    //Make sure that the forge is on and that its not already smelting ore(s)
                    if (workstationCont.InUse && !workstationCont.DoingWork)
                    {
                        workstationCont.Work(playerCont.HoldingCont);
                        playerCont.PlayerInventoryCont.DroppingItem();
                        workstationCont.DoingWork = true;
                        return false;
                    }
                    else
                        return true;
                default:
                    return playerCont.HoldingItem;
            }
        }
        private void EnvironmentInteraction(){
            //wall, door, blockage, cliff, shore, etc...
            switch(playerCont.PlayerLOS.transform.tag){
                case "Door":
                    playerCont.PlayerLOS.transform.gameObject.GetComponent<DoorController>().InteractDoor(5.0f);
                    break;
                case "water":
                    ///<summary>
                    ///If we are holding an item and that item is a fishing rod we assume player wants to fish, if the player is empty handed we assume they want to swim
                    ///If we choose to implement ^ make sure we unequip the players hand(s) when they go swimming
                    ///</summary>
                    //Debug.Log($"I am interacting with the water , In-Water = {dynamicSpriteLayering.IsObjInWater()}, also isFishing: {playerCont.IsFishing}.");
                    if(!dynamicSpriteLayering.IsObjInWater() && !playerCont.IsFishing)
                        playerCont.HoldingItem = playerCont.HoldingItem?(playerCont.HoldingCont.PrefabItemStruct.itemTag.Contains("FishingRod")?GoFishing():true):false;
                    break;
                
                default:
                    break;
            }
        }
        #endregion
        #region "Public Functions"
        public bool UseWorkstation()
        {
            //Make sure we have reference to component in players LOS
            stockpileCont = playerCont.PlayerLOS.transform.GetComponent<StockpileController>();
            workstationCont = playerCont.PlayerLOS.transform.GetComponent<WorkstationController>();
            //If the workstation like a forge does not have any item to give to the interacting player, toggle use of workstation.
            if (stockpileCont.CurQuantity == 0)
            {
                workstationCont.ToggleUse(playerCont);
                return false;
            }
            //If the stockpile has an item to give and the player has at least one free quick slot
            else if (stockpileCont.CurQuantity != 0 && !playerCont.PlayerInventoryCont.SlotsAreFull)
                return PickUpObj();
            else
                return playerCont.HoldingItem;
        }
        public bool InteractWorkstation()
        {
            ///<summary>
            ///The player is interacting with a workstation while equiping the item for a special use case like refueling forge or by accident.
            ///If it is a special use case we simply add it to the switch case and create a function that if successfull sets player holding item bool to false.
            ///If this was an accident we want the player to keep holding  the item and simply reassign playerHoldingItem to its current value, presummably true.
            ///</summary>
            workstationCont = playerCont.PlayerLOS.transform.GetComponent<WorkstationController>();
            switch (playerCont.PlayerLOS.transform.tag)
            {
                case "Forge":
                    return ForgeInteraction();
                default:
                    return playerCont.HoldingItem;
            }
        }
        public void OnInteraction(InputAction.CallbackContext context)
        {
                //Is the player looking at an object? && Are they pressing the interact button && Is there a backpack closed?
            if (playerCont.PlayerLOS.transform != null && context.started && !playerCont.PlayerBackPackCont.gameObject.activeInHierarchy)
            {
                //Diff scenarios based on what the player is interacting with
                switch (LayerMask.LayerToName(playerCont.PlayerLOS.transform.gameObject.layer))
                {
                    //wall, door, blockage
                    case "bounds":
                        EnvironmentInteraction();
                        break;
                    //Forge, Quencher, Sandstone, etc...
                    case "workstation":
                        ///<summary>
                        ///If the player is holding an object let them interact with the workstation.
                        ///If the player does not have an item them they are going to want to use the workstation.
                        ///</summary>
                        playerCont.HoldingItem = playerCont.HoldingItem ? InteractWorkstation() : UseWorkstation();
                        break;
                    //Coal pile, wood pile, etc...
                    case "stockpile":
                        ///<summary>
                        ///If the player is not holding an item check that the quickslots are not full.
                        ///and that the player does not have the backpack open in order to allow them to pick up the desired object.
                        ///If the player is holding an object allow them to drop the object
                        ///
                        playerCont.HoldingItem = !playerCont.HoldingItem ? (playerCont.PlayerInventoryCont.SlotsAreFull ? false : PickUpObj()) : DropObj();
                        break;
                    case "chest":
                        if(playerCont.HoldingItem){
                            playerCont.HoldingItem = false;
                            UnEquipItem();
                        }
                        playerCont.PlayerLOS.transform.Find("Canvas/ChestMenu").gameObject.GetComponent<ChestController>().SyncChestSlots(playerCont);
                        break;
                    default: 
                        break;
                }
                return;
            }
            
            else if (dynamicSpriteLayering.IsObjOutside() && playerCont.HoldingItem && !playerCont.PlayerBackPackCont.gameObject.activeInHierarchy)
            {
                //When player is outside and trying to interact with the environment while holding an item
                switch (playerCont.HoldingCont.PrefabItemStruct.itemSubTag +
                        playerCont.HoldingCont.PrefabItemStruct.craftingTag)
                {
                    case"WoodenLog":
                        
                        break;
                    default:
                        break;
                }
            }
            else
                stockpileCont = null;
        }
        #endregion
        // Start is called before the first frame update
        void Awake()
        {
            playerCont = GetComponent<PlayerController>();
            dynamicSpriteLayering = GetComponent<DynamicSpriteLayering>();
            playerFishingCont = GetComponent<PlayerFishingController>();
        }
    }
}