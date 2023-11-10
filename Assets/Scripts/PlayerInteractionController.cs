using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class PlayerInteractionController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private PlayerController playerCont;
        [SerializeField] private WorkstationController workstationCont;
        #endregion
        #region "Private Members"
        private StockpileController stockpileCont;
        #endregion
        #region "Private Fields"
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
            //Make sure that the stickpile is not empty.
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
        #endregion
        #region "Public Functions"
        public bool UseWorkstation()
        {
            //Make sure we have reference to component in players LOS
            stockpileCont = playerCont.PlayerLOS.transform.GetComponent<StockpileController>();
            workstationCont = playerCont.PlayerLOS.transform.GetComponent<WorkstationController>();
            if (stockpileCont.Quantity == 0)
            {
                playerCont.PlayerBackPackCont.gameObject.SetActive(true);
                workstationCont.ToggleUse(playerCont);
                //If the player is sing the caft table then disable to in-game quickslots so that the only ones available are the copy in the crafting menu.
                //playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(!playerCont.PlayerLOS.transform.tag.Contains("Craft Table"));
                return false;
            }
            else if (stockpileCont.Quantity != 0 && !playerCont.PlayerInventoryCont.SlotsAreFull)
                return PickUpObj();
            else
                return playerCont.HoldingItem;
        }
        public void OnInteraction(InputAction.CallbackContext context)
        {
            //If so is the player prompting to interact with said item?
            if (playerCont.PlayerLOS.transform != null && (context.started))
            {
                //Diff scenarios based on what the player is interacting with
                switch (playerCont.PlayerLOS.transform.gameObject.layer)
                {
                    //Forge, Quelcher, Sandstone, etc...
                    case 8:
                        //If the player is holding an object let them interact with the workstation
                        //If the player does not have an item them they are going to want to use the workstation
                        playerCont.HoldingItem = (playerCont.HoldingItem) ? InteractWorkstation() : UseWorkstation();
                        break;
                    //Coal pile, wood pile, etc...
                    case 10:
                        //If the player is not holding an item check that the quickslots are not full
                        //and that the player does not have the backpack open in order to allow them to pick up the desired object
                        //If the player is holding an object allow them to drop the object
                        playerCont.HoldingItem = (!playerCont.HoldingItem) ? ((playerCont.PlayerInventoryCont.SlotsAreFull) ? (false) : (playerCont.PlayerBackPackCont.gameObject.activeInHierarchy) ? (false) : (PickUpObj())) : (DropObj());
                        break;
                    default:
                        break;
                }
                return;
            }
            else
                stockpileCont = null;
        }
        public bool InteractWorkstation()
        {
            workstationCont = playerCont.PlayerLOS.transform.GetComponent<WorkstationController>();
            switch (playerCont.PlayerLOS.transform.tag)
            {
                case "Forge":
                    switch (playerCont.HoldingCont.PrefabItemStruct.itemTag)
                    {
                        case "Fuel":
                            //First we check if this fuel deposit will be more than what the forge can handle
                            workstationCont.Overflow(playerCont.HoldingCont.PrefabItemStruct.fuelAmnt);
                            //If the item can be used as fuel and we are not using workstation that doesnt use fuel and if refueling the workstation wont overflow
                            //Workstation that dont require fuel such as forgepump will simply have their Fuel Full boolean set to true thereby !true.
                            if (!(playerCont.HoldingCont.PrefabItemStruct.fuelAmnt == 0.0f) && (!workstationCont.BarFull))
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
                default:
                    return playerCont.HoldingItem;
            }
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            playerCont = GetComponent<PlayerController>();
        }
    }
}