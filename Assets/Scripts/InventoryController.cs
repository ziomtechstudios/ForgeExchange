using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class InventoryController : MonoBehaviour
    {
        #region Serialized Fields
        [Tooltip("Amount of inventory slots.")][SerializeField] private int inventoryAmnt;
        [SerializeField] private SlotController[] slotConts;
        [SerializeField] private PlayerController playerCont;
        [Tooltip("Are all of the items equiped with an item?")][SerializeField] private bool slotsAreFull;
        [Tooltip("Sprite used by slot to indicate there is no item.")][SerializeField] private Sprite noItemSprite;
        #endregion
        #region Private Funcs
        private bool ToggleHolding(int index)
        {
            //If the slot selected has an item the player holds the item
            //Debug.Log($"slotConts[index].SlotWithItem : {slotConts[index].SlotWithItem}, !slotConts[index].SlotInUse: {!slotConts[index].SlotInUse}.");
            playerCont.HoldingItem = slotConts[index].SlotWithItem && !slotConts[index].SlotInUse;
            //Update sprite of what player is holding to that of what was in the selected slot
            //playerCont.HoldingPrefab = playerCont.HoldingItem ? slotConts[index].SlotPrefab : null;
            playerCont.HoldingCont = playerCont.HoldingItem ? slotConts[index].ItemCont : null;
            if(!playerCont.HoldingItem){
                DestroyImmediate(playerCont.gameObject.transform.Find("HoldingItem").GetChild(0).gameObject, true);
                playerCont.HoldingPrefab = null;
            }
            else
                playerCont.HoldingPrefab = slotConts[index].SlotPrefab;
            return playerCont.HoldingItem;
        }
        //Player selects which slot in their inventory the!slotConts[index].SlotInUsey want to select, makes that obj the one the player is holding
        public void SelectSlot(int slotIndex)
        {
            //selected slot is highlighted
            if (slotIndex != (-1))
            {
                for (int i = 0; i < inventoryAmnt; i++)
                {
                    slotConts[i].SlotInUse = (i == slotIndex ? ToggleHolding(i) : false);
                    slotConts[i].SlotImage.fillCenter = !slotConts[i].SlotInUse;
                }
            }
            //Makes it so that no slot is selected
            else
            {
                for (int i = 0; i < inventoryAmnt; i++)
                {
                    slotConts[i].SlotInUse = false;
                    slotConts[i].SlotImage.fillCenter = !slotConts[i].SlotInUse;
                }
            }
        }
        #endregion
        #region Getters/Setters
        public bool SlotsAreFull { get { return slotsAreFull; } }
        public SlotController[] SlotConts { get { return slotConts; } }
        public int InventoryAmnt { get { return inventoryAmnt; } }
        public Sprite NoItemSprite { get { return noItemSprite; } }
        #endregion
        #region Public funcs
        public void AreAllSlotsFull()
        {
            slotsAreFull = Array.TrueForAll(slotConts, slotCont => slotCont.SlotWithItem == true);
        }
        public void DroppingItem()
        {
            //If the player is holding item we look for coresponding slot holding said item
            for (int i = 0; i < inventoryAmnt; i++)
            {
                if ((slotConts[i].SlotPrefab == playerCont.HoldingPrefab) && slotConts[i].SlotInUse)
                {
                     //desired slot found
                    //Empty players hands
                    //Empty slot
                    playerCont.HoldingPrefab = null;
                    playerCont.HoldingCont = null;
                    playerCont.HoldingItem = false;
                    slotConts[i].ItemImage.sprite = noItemSprite;
                    slotConts[i].SlotWithItem = false;
                    slotConts[i].ItemCont = null;
                    slotConts[i].SlotPrefab = null;
                    SelectSlot(-1);
                    break;
                }
            }
            AreAllSlotsFull();
        }
        public void SlotItem()
        {
            AreAllSlotsFull();
            //If the player is holding an object and all their slots are not occupied
            if (!slotsAreFull)
            {
                //iterating through slots we find the first empty slot
                for (int i = 0; i < inventoryAmnt; i++)
                {
                    if (!slotConts[i].SlotWithItem)
                    {
                        //Fill slot with item
                        slotConts[i].SlotWithItem = true;
                        slotConts[i].SlotPrefab = playerCont.HoldingPrefab;
                        slotConts[i].ItemCont = playerCont.HoldingCont;
                        slotConts[i].ItemImage.sprite = playerCont.HoldingPrefab.GetComponent<ItemController>().ItemIcon;
                        //Empty players hands only if the player isnt selecting the slot the item was just slotted into
                        if (slotConts[i].SlotWithItem != slotConts[i].SlotInUse)
                        {
                            playerCont.HoldingItem = false;
                            playerCont.HoldingPrefab = null;
                            playerCont.HoldingCont = null;
                        }
                        break;
                    }
                }
            }
            AreAllSlotsFull();
        }
        public void OnSelect(InputAction.CallbackContext context)
        {
            if (context.started)
            {
                int slot = int.Parse(context.action.name) - 1;
                //Debug.Log($"We are selecting slot number: {slot}.");
                SelectSlot(slot);
                //Update players control scheme to match the current conditions of if they are holding an item and what it is.
                SwappingPlayerControlMap();
                //Debug.Log($"{playerCont.PlayerInput.currentActionMap.name} is the current control scheme.");
            }
            //Helps avoid non-needed work  
            AreAllSlotsFull();
        }
        private void SwappingPlayerControlMap(){
            if(playerCont.HoldingItem){
                switch(playerCont.HoldingPrefab.tag){
                    case "Weapon":
                        playerCont.PlayerInput.SwitchCurrentActionMap("CombatControls");
                        playerCont.PlayerAtkCont.EquipWeapon();
                        break;
                    case "Item":
                        playerCont.PlayerInput.SwitchCurrentActionMap(playerCont.IsFishing?"FishingControls":"ShopControls");
                        break;
                    default:
                        playerCont.PlayerInput.SwitchCurrentActionMap("ShopControls");
                        break;
                }
            }
            else
                playerCont.PlayerInput.SwitchCurrentActionMap("ShopControls");
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            playerCont = transform.parent.parent.parent.GetComponent<PlayerController>();
            slotConts = new SlotController[inventoryAmnt];
            slotsAreFull = false;
            //Setting inventory to empty, should change in future when saves are implemented
            for (int i = 0; i < inventoryAmnt; i++)
            {
                slotConts[i] = transform.Find($"Slot{i}").gameObject.GetComponent<SlotController>();
                slotConts[i].SlotInUse = false;
                slotConts[i].SlotWithItem = false;
                slotConts[i].SlotPrefab = null;
                slotConts[i].SlotImage.fillCenter = !slotConts[i].SlotInUse;
            }
        }
    }
}