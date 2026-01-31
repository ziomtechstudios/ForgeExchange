using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftingMenuController : SlotsController
    {
        #region "Private Serialized Fields"
        [SerializeField] private CraftTableController craftTableCont;
        [Header("Slots in crafting menu.")]
        [SerializeField] private SlotController[] craftingSlots;
        [SerializeField] private SlotController[] craftedSlot;
        [SerializeField] private int craftedSlotNum;
        [Header("Members for crafting")]
        [SerializeField] private string currentRecipe;
        [Header("Current User component(s).")]
        [SerializeField] private PlayerController currentUserController;
        [SerializeField] private GameObject potentialItem;
        #endregion
        #region "Private Funcs/Members
        private RectTransform craftMenuRectTrans;
        private void AttemptCrafting(){
            //This var is nullified here so that when debugging the current Recipe can still be seen via editor.
            currentRecipe = null;
            //Reevaluating current ingredients the user has deposited into the crafting table
            foreach (SlotController ingredient in craftingSlots)
                currentRecipe += ingredient.SlotWithItem ? ingredient.ItemCont.PrefabItemStruct.itemSubTag + ingredient.ItemCont.PrefabItemStruct.craftingTag : "_";
            //Check to make sure that we have a recipe and that the recipe corresponds to an actual recipe we hold in our dictoinary
            if (currentRecipe != null && craftTableCont.CraftedItemDict.TryGetValue(currentRecipe, out potentialItem))
            { 
                craftedSlot[0].ItemCont = potentialItem.GetComponent<ItemController>();
                craftedSlot[0].ItemImage.sprite = (potentialItem != null) ? craftedSlot[0].ItemCont.ItemIcon : NoItemSprite;
                craftedSlot[0].SlotPrefab = potentialItem;
                craftedSlot[0].SlotWithItem = true;
                craftTableCont.Work(craftedSlot[0].ItemCont);
            }
            else{
                craftedSlot[0].ItemImage.sprite = NoItemSprite;
                craftedSlot[0].SlotPrefab = null;
                craftedSlot[0].SlotWithItem = false;
                craftedSlot[0].ItemCont = null;
                potentialItem = null;
                craftTableCont.StockpileCont.Withdraw(1);
            }
        }
        #endregion
        #region Getters/Setters
        public string CurrentRecipe { get { return currentRecipe; } }
        #endregion
        #region "Public Functions/Members"
        public override void ReturnItem(PointerEventData eventData)
        {
            //Debug.Log($"Returning the item back to {OgSlotType} slots at index {OgSlotIndex}.");
            switch (OgSlotType)
            {
                case ("BackpackSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, backPackSlots, NoItemSprite, OgSlotIndex);
                    break;
                case ("QuickSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, quickSlots, NoItemSprite, OgSlotIndex);
                    break;
                case ("CraftingSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, craftingSlots, NoItemSprite, OgSlotIndex);
                    break;
                //CraftedItemSlot
                case ("CraftingMenu"):
                    DragAndDropSlot.DropItem(MovingSlot, craftedSlot, NoItemSprite, OgSlotIndex);
                    break;
                default:
                    break;
            }
        }

        public void CloseMenu()
        {
            craftTableCont.ToggleUse(currentUserController);
        }
        public void SyncCraftingMenuSlots(PlayerController playerCont)
        {
            SynchronizeSlots.SyncSlots(backPackSlots,playerCont.PlayerBackPackCont.backPackSlots);
            SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
            currentUserController = playerCont;
        }
        public override void OnBeginDrag(PointerEventData eventData)
        {
            //  Making sure the press point is not on blank space.  Are we sure that what we are dragging from is a slot?  + THe slot that we are draggin from, does it have an item?
            if (eventData.pointerPressRaycast.gameObject != null && !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas") && eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem)
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                //Based on the type of slot it is pass relevant parameters
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("BackpackSlots"):
                        initSlots = backPackSlots;
                            DragAndDropSlot.SelectItem(eventData, MovingSlot, backPackSlots, NoItemSprite, this);
                            break;
                    case ("QuickSlots"):
                        initSlots = quickSlots;
                            DragAndDropSlot.SelectItem(eventData, MovingSlot, quickSlots, NoItemSprite, this);
                            break;
                    case ("CraftingSlots"):
                            initSlots = craftingSlots;
                            DragAndDropSlot.SelectItem(eventData, MovingSlot, craftingSlots, NoItemSprite, this);
                            AttemptCrafting();
                            break;
                    case ("CraftingMenu"):
                        //If we are dragging an item from the crafted slot, the player has chosen to craft the item
                        //Therefore we will empty the contents of the crafting table
                        if (craftedSlot[0].SlotWithItem)
                        {
                            foreach (SlotController ingredient in craftingSlots)
                            {
                                ingredient.ItemImage.sprite = NoItemSprite;
                                ingredient.SlotPrefab = null;
                                ingredient.SlotWithItem = false;
                                ingredient.ItemCont = null;
                            }
                        }
                        DragAndDropSlot.SelectItem(eventData, MovingSlot, craftedSlot, NoItemSprite, this);
                        craftTableCont.StockpileCont.Withdraw(1);
                        break;
                    default:
                        break;
                    
                }
            }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, craftMenuRectTrans, MovingSlotRectTrans);
        }
        public override void  OnEndDrag(PointerEventData eventData)
        {
            
            //  The players finger has stopped dragging onto a slot   Making sure the destination slot is an appripriate destination
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Craft Table") && MovingSlot.SlotWithItem && MovingSlot.SlotPrefab != null )
            {
                // Position of the targeted slot
                int slotNum = Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("BackpackSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, backPackSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, quickSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    case ("CraftingSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, craftingSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        AttemptCrafting();
                        break;
                    default:
                        ReturnItem(eventData);
                        break;
                }
            }
            else 
                ReturnItem(eventData);
        }
        #endregion
        void Awake()
        {
            craftMenuRectTrans = gameObject.GetComponent<RectTransform>();
            MovingSlotRectTrans = transform.Find("Slot13").gameObject.GetComponent<RectTransform>();
            craftingSlots = new SlotController[craftedSlotNum];
            for (int i = 0; i < craftingSlots.Length; i++)
                craftingSlots[i] = transform.Find($"CraftingSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            craftedSlot = new SlotController[1];
            craftedSlot[0] = transform.Find("Slot0").gameObject.GetComponent<SlotController>();
            MovingSlot = transform.Find("Slot13").gameObject.GetComponent<SlotController>();
        }
    }
}