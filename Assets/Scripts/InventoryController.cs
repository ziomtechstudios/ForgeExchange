using System;
using System.Linq;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.InputSystem;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class InventoryController : MonoBehaviour
    {
        #region Serialized Fields
        [Tooltip("Amount of inventory slots.")][SerializeField] private int inventoryAmnt;  
        [SerializeField] private QuickSlotController[] slotConts;
        [SerializeField] private QuickSlotController offHandSlotCont;
        [SerializeField] private QuickSlotController tempSlotCont;
        [SerializeField] private PlayerController playerCont;
        [Tooltip("Are all of the slots equipped with an item?")][SerializeField] private bool slotsFullyOccupied;
        [Tooltip("Are there any slots with stacks that are not yet full?")] [SerializeField] private bool hasStackableStack;
        [Tooltip("Sprite used by slot to indicate there is no item.")][SerializeField] private Sprite noItemSprite;
        #endregion
        public QuickSlotController OfHandSlotCont => offHandSlotCont;
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
        private void AddToStack(QuickSlotController slotCont)
        {
            slotCont.CurStackQuantity++;
            DragAndDropSlot.UpdateSlotCounterText(slotCont);
            //Empty players hands only if the player isn't selecting the slot the item was just slotted into
            if (slotCont.SlotWithItem != slotCont.SlotInUse)
            {
                playerCont.HoldingItem = false;
                playerCont.MainHandTuple = (null, null);
            }
        }
        //Player selects which slot in their inventory the !slotConts[index].SlotInUse want to select, makes that obj the one the player is holding.
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
                playerCont.HoldingItem = false;
                playerCont.MainHandTuple = (null, null);
                
            }
        }
        #endregion
        #region Getters/Setters
        public bool SlotsFullyOccupied { get { return slotsFullyOccupied; } }
        public QuickSlotController[] SlotConts { get { return slotConts; } }
        public int InventoryAmnt { get { return inventoryAmnt; } }
        public Sprite NoItemSprite { get { return noItemSprite; } }
        public PlayerController PlayerCont { get { return playerCont; } }
        #endregion
        #region Public funcs
        public void CheckForOpenStack((GameObject, ItemController) slottingItemTuple, QuickSlotController targetSlotCont)
        {
            hasStackableStack = ((targetSlotCont.CurStackQuantity+1) <= targetSlotCont.SlotItemTuple.Item2?.MaxStackQuantity) && DragAndDropSlot.CheckMatchingItem(targetSlotCont.SlotItemTuple.Item2, slottingItemTuple.Item2);
        }

        public void UpdateQuickSlotStatus()
        {
            slotsFullyOccupied = Array.TrueForAll(slotConts, slotCont => (slotCont.SlotWithItem));
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
            UpdateQuickSlotStatus();
        }
        public void SlotItem((GameObject, ItemController) itemTuple)
        {
            ///<summary>
            /// We have two boolean variables that we need to track in order to account for the casses in which it is appropriate to:
            /// 1. Stack an item.
            /// 2. Place it within an empty slot within the array of quickslots.
            /// 3. A. Either cancel the slotting if the item. B. Dropping the item onto the ground. C Finding a empty slot in backpack. D. Stack item onto a approriate stack in a backpackslot.
            /// </sumary>
            
            //Find out if we have any full or partially filed slots
            UpdateQuickSlotStatus();
            if (slotsFullyOccupied)
            {
                foreach (QuickSlotController slotCont in slotConts)
                {
                    CheckForOpenStack(playerCont.MainHandTuple, slotCont);
                    if (hasStackableStack)
                    {
                        AddToStack(slotCont);
                        return;
                    }
                }
                //TODO This is the block of code that is used to store object in backpack or drop it onto the ground
                playerCont.PlayerInteractionCont.m_CurStockpileCont.Deposit(1, playerCont.MainHandTuple);
                playerCont.HoldingItem = false;
                playerCont.MainHandTuple = (null, null);
            }
            else
            {
                foreach (QuickSlotController slotCont in slotConts)
                {
                    CheckForOpenStack(playerCont.MainHandTuple, slotCont);
                    if (hasStackableStack)
                    {
                        AddToStack(slotCont);
                        return;
                    }
                    if (!slotCont.SlotWithItem)
                    {
                        //Fill slot with it
                        slotCont.SlotWithItem = true;
                        slotCont.SlotItemTuple = itemTuple;
                        slotCont.ItemImage.sprite = slotCont.SlotItemTuple.Item2.ItemIcon;
                        slotCont.CurStackQuantity++;
                        //Empty players hands only if the player isn't selecting the slot the item was just slotted into
                        if (slotCont.SlotWithItem != slotCont.SlotInUse)
                        { 
                            playerCont.HoldingItem = false;
                            playerCont.MainHandTuple = (null, null);
                        }
                        return;
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
            UpdateQuickSlotStatus();
        }
        private void SwappingPlayerControlMap(){
            //Based on what type of item we are holding will change the players control scheme.
            if(playerCont.HoldingItem){
                switch(playerCont.MainHandTuple.Item2.PrefabItemStruct.interactionTag){
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
        public void SwapHands()
        {
            UpdateQuickSlotStatus();
            //Swapping items held in offhand and in main hand
            if (playerCont.HoldingItem)
            {
                foreach (QuickSlotController slotCont in slotConts)
                {
                    if (slotCont.SlotInUse)
                    {
                        DragAndDropSlot.SwapStacks(slotCont, offHandSlotCont, tempSlotCont, noItemSprite);
                        playerCont.HoldingItem = slotCont.SlotInUse;
                        playerCont.MainHandTuple = slotCont.SlotItemTuple;
                        playerCont.OffHandTuple = offHandSlotCont.SlotItemTuple;
                        SwappingPlayerControlMap();
                        return;
                    }
                }
            }
            //Item and or stack only held in offhand so we are emptying offhand and placing item/stack in an open quick slot or backpack slot.
            else if(!playerCont.HoldingItem && playerCont.OffHandTuple != (null,null))
            {
                //We know there is a quick slot free and/or it or other quick slots have room left in it's existing stack.
                if(!slotsFullyOccupied)
                    DragAndDropSlot.FreeingOffHand(offHandSlotCont, slotConts, noItemSprite, playerCont);
                //Let's start looking for room in the backpack.
                else if (slotsFullyOccupied)
                {
                    Debug.Log("We are attempting to place item in off hand slot into the backpack!");
                    DragAndDropSlot.FreeingOffHand(offHandSlotCont, playerCont.PlayerBackPackCont.backPackSlots,
                        noItemSprite, playerCont);
                }
            }
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            playerCont = transform.parent.parent.parent.GetComponent<PlayerController>();
            slotConts = new QuickSlotController[inventoryAmnt];
            offHandSlotCont = transform.Find("Slot6").gameObject.GetComponent<QuickSlotController>();
            tempSlotCont = transform.Find("Slot7").gameObject.GetComponent<QuickSlotController>();
            slotsFullyOccupied = false;
            //Setting inventory to empty, should change in future when saves are implemented
            for (int i = 0; i < inventoryAmnt; i++)
            {
                slotConts[i] = transform.Find($"Slot{i}").gameObject.GetComponent<QuickSlotController>();
                slotConts[i].SlotInUse = false;
                slotConts[i].SlotWithItem = false;
                slotConts[i].SlotItemTuple = (null, null);
                //All of a sudden this line causing Null reference error in simulator and final build(s).
                //Everything works fine for now with it left out so fuck it leave it for now
                //slotConts[i].SlotImage.fillCenter = !slotConts[i].SlotInUse;
            }
        }
    }
}