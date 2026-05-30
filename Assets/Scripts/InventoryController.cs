 using System;
 using Unity.VisualScripting;
 using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class InventoryController : MonoBehaviour
    {
        #region Serialized Fields
        [Tooltip("Amount of inventory slots.")][SerializeField] private int inventoryAmnt;  
        [SerializeField] private QuickSlotController[] slotConts;
        [SerializeField] private PlayerController playerCont;
        [Tooltip("Are all of the items equipped with an item?")][SerializeField] private bool slotsAreFull;
        [Tooltip("Sprite used by slot to indicate there is no item.")][SerializeField] private Sprite noItemSprite;
        #endregion
        #region Private Funcs
        private bool ToggleHolding(int index)
        {
            
            //If the slot selected has an item that the player wants to hold
            playerCont.HoldingItem = slotConts[index].SlotWithItem && !slotConts[index].SlotInUse;
            //Update sprite of what player is holding to that of what was in the selected slot
            playerCont.MainHandTuple = playerCont.HoldingItem ? slotConts[index].SlotItemTuple : (null,null);
            //WHen we are un-equipped an item within our quick slots
            if(playerCont.MainHandTuple.Item1 && (playerCont.gameObject.transform.Find("HoldingItem").childCount != 0)){
                playerCont.PlayerInteractionCont.UnEquipItem(); 
                if(playerCont.HoldingItem)
                    playerCont.MainHandTuple = slotConts[index].SlotItemTuple;
                else
                    playerCont.PlayerAtkCont.HasWeapon = false;
            }
            //equipping item
            else 
                playerCont.MainHandTuple = slotConts[index].SlotItemTuple; 
            return playerCont.HoldingItem;
        }
        //Player selects which slot in their inventory the  !slotConts[index].SlotInUse want to select, makes that obj the one the player is holding
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
        public QuickSlotController[] SlotConts { get { return slotConts; } }
        public int InventoryAmnt { get { return inventoryAmnt; } }
        public Sprite NoItemSprite { get { return noItemSprite; } }
        public PlayerController PlayerCont { get { return playerCont; } }
        #endregion
        #region Public funcs
        public void AreAllSlotsFull()
        {
            slotsAreFull = Array.TrueForAll(slotConts, slotCont => (slotCont.SlotWithItem == true && slotCont.CurStackQuantity >= slotCont.SlotItemTuple.Item2.MaxStackQuantity));
        }
        public void DroppingItem()
        {
            //If the player is holding item we look for corresponding slot holding said item
            for (int i = 0; i < inventoryAmnt; i++)
            {
                if ((slotConts[i].SlotItemTuple == playerCont.MainHandTuple) && slotConts[i].SlotInUse)
                {
                    //We are dropping one item from a stack on item in a slot.
                    //Decrement the counter of the stack by one and update the stack counter.
                    slotConts[i].CurStackQuantity--;
                    DragAndDropSlot.UpdateSlotCounterText(slotConts[i]);
                    if (slotConts[i].CurStackQuantity == 0)
                    {
                        //The player is dropping a single item from a slot, and they only have a stack of 1 at that quick-slot.
                        //We empty the slot and de-equip the slot. ;
                        playerCont.MainHandTuple = (null, null);
                        playerCont.HoldingItem = false;
                        slotConts[i].ItemImage.sprite = noItemSprite;
                        slotConts[i].SlotWithItem = false;
                        slotConts[i].SlotItemTuple = (null, null);
                        SelectSlot(-1);
                    }
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
                        slotConts[i].SlotItemTuple = playerCont.MainHandTuple;
                        slotConts[i].ItemImage.sprite = playerCont.MainHandTuple.Item2.ItemIcon;
                        slotConts[i].CurStackQuantity++;
                        //Empty players hands only if the player isn't selecting the slot the item was just slotted into
                        if (slotConts[i].SlotWithItem != slotConts[i].SlotInUse)
                        {
                            playerCont.HoldingItem = false;
                            playerCont.MainHandTuple = (null, null);
                        }
                        break;
                    }
                }
            }
            AreAllSlotsFull();
        }
        public void SlotItem((GameObject, ItemController) itemTuple)
        {
            AreAllSlotsFull();
            //If the player is holding an object and all their slots are not occupied
            if (!slotsAreFull)
            {
                //iterating through slots we find the first eligible slot
                for (int i = 0; i < inventoryAmnt; i++)
                {
                    if(!slotConts[i].SlotWithItem)
                    {
                        //Fill slot with item
                        slotConts[i].SlotWithItem = true;
                        slotConts[i].SlotItemTuple = itemTuple;
                        slotConts[i].ItemImage.sprite = slotConts[i].SlotItemTuple.Item2.ItemIcon;
                        slotConts[i].CurStackQuantity++;
                        //Empty players hands only if the player isn't selecting the slot the item was just slotted into
                        if (slotConts[i].SlotWithItem != slotConts[i].SlotInUse)
                        {
                            playerCont.HoldingItem = false;
                            playerCont.MainHandTuple = (null, null);
                        }
                        break;
                    } 
                    if(slotConts[i].SlotWithItem && DragAndDropSlot.CheckMatchingItem(itemTuple.Item2, slotConts[i].SlotItemTuple.Item2)  && ((slotConts[i].CurStackQuantity+1) <= slotConts[i].SlotItemTuple.Item2.MaxStackQuantity))
                    {
                        slotConts[i].CurStackQuantity++;
                        DragAndDropSlot.UpdateSlotCounterText(slotConts[i]);
                        //Empty players hands only if the player isn't selecting the slot the item was just slotted into
                        if (slotConts[i].SlotWithItem != slotConts[i].SlotInUse)
                        {
                            playerCont.HoldingItem = false;
                            playerCont.MainHandTuple = (null, null);
                        }
                        break;
                    }
                }
            }
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
            }
            //Helps avoid non-needed work  
            AreAllSlotsFull();
        }
        private void SwappingPlayerControlMap(){
            //Based on what type of item we are holding will change the players control scheme.
            if(playerCont.HoldingItem){
                switch(playerCont.MainHandTuple.Item2.PrefabItemStruct.craftingTag){
                    case "Weapon":
                        playerCont.PlayerInput.SwitchCurrentActionMap("CombatControls");
                        playerCont.PlayerAtkCont.EquipWeapon();
                        break;
                    case "FishingRod":
                        playerCont.PlayerInput.SwitchCurrentActionMap(playerCont.IsFishing?"FishingControls":"ShopControls");
                        playerCont.PlayerInteractionCont.PlayerFishingCont.SpawnRod();
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
            slotConts = new QuickSlotController[inventoryAmnt];
            slotsAreFull = false;
            //Setting inventory to empty, should change in future when saves are implemented
            for (int i = 0; i < inventoryAmnt; i++)
            {
                slotConts[i] = transform.Find($"Slot{i}").gameObject.GetComponent<QuickSlotController>();
                slotConts[i].SlotInUse = false;
                slotConts[i].SlotWithItem = false;
                slotConts[i].SlotItemTuple = (null, null);
                slotConts[i].SlotImage.fillCenter = !slotConts[i].SlotInUse;
            }
        }
    }
}