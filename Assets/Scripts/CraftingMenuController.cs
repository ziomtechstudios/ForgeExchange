using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftingMenuController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        #region "Private Serialized Fields"
        [SerializeField] private CraftTableController craftTableCont;
        [Header("Slots in crafting menu.")]
        [SerializeField] private SlotController[] craftingSlots;
        [SerializeField] private SlotController[] backPackSlots;
        [SerializeField] private SlotController[] quickSlots;
        [SerializeField] private SlotController[] craftedSlot;
        [SerializeField] private SlotController movingSlot;
        [SerializeField] private int craftedSlotNum, backPackSlotNum, quickSlotsSlotNum;
        [Header("Members for crafting")]
        [SerializeField] private string currentRecipe;
        [SerializeField] private Sprite noItemSprite;
        [Header("Current User component(s).")]
        [SerializeField] private PlayerController currentUserController;
        #endregion
        #region "Private Funcs/Members
        private RectTransform craftMenuRectTrans;
        private RectTransform movingSlotRectTrans;
        private string ogSlotType;
        private int ogSlotIndex;
        private GameObject potentialItem;
        private void ReturnItem(PointerEventData eventData)
        {
            switch (ogSlotType)
            {
                case ("BackpackSlots"):
                    DragAndDropSlot.DropItem(movingSlot, backPackSlots, noItemSprite, ogSlotIndex);
                    break;
                case ("QuickSlots"):
                    DragAndDropSlot.DropItem(movingSlot, quickSlots, noItemSprite, ogSlotIndex);
                    break;
                case ("CraftingSlots"):
                    DragAndDropSlot.DropItem(movingSlot, craftingSlots, noItemSprite, ogSlotIndex);
                    break;
                //CraftedItemSlot
                case ("CraftingMenu"):
                    DragAndDropSlot.DropItem(movingSlot, craftedSlot, noItemSprite, ogSlotIndex);
                    break;
                default:
                    break;
            }
        }
        private void AttemptCrafting(){
            //This var is nullified here so that when debugging the current Recipe can still be seen via editor.
            currentRecipe = null;
            //Reevaluating current ingredients the user has deposited into the crafting table
            foreach (SlotController ingredient in craftingSlots)
                currentRecipe += ((ingredient.SlotWithItem) ? (ingredient.ItemCont.PrefabItemStruct.itemSubTag + ingredient.ItemCont.PrefabItemStruct.craftingTag) : ("_"));
            //Check to make sure that we have a recipe and that the recipe corresponds to an actual recipe we hold in our dictoinary
            if (currentRecipe != null && craftTableCont.CraftedItemDict.TryGetValue(currentRecipe, out potentialItem))
            { 
                craftedSlot[0].ItemCont = potentialItem.GetComponent<ItemController>();
                craftedSlot[0].ItemImage.sprite = (potentialItem != null) ? craftedSlot[0].ItemCont.ItemIcon : noItemSprite;
                craftedSlot[0].SlotPrefab = potentialItem;
                craftedSlot[0].SlotWithItem = true;
                craftTableCont.Work(craftedSlot[0].ItemCont);
            }
            else{
                craftedSlot[0].ItemImage.sprite = noItemSprite;
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
        public SlotController[] BackPackSlots { get { return backPackSlots; } }
        public SlotController[] QuickSlots { get { return quickSlots; } }
        #endregion
        #region "Public Functions/Members"
        public void CloseMenu()
        {
            craftTableCont.ToggleUse(currentUserController);
        }
        public void SyncCraftingMenuSlots(PlayerController playerCont)
        {
            SynchronizeSlots.SyncSlots(backPackSlots, playerCont.PlayerBackPackCont.BackPackSlots);
            SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
            currentUserController = playerCont;
        }
        public void OnBeginDrag(PointerEventData eventData)
        {
            //  Making sure the press point is not on blank space.  Are we sure that what we are dragging from is a slot?  + THe slot that we are draggin from, does it have an item?
            if (eventData.pointerPressRaycast.gameObject != null && !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas") && eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem)
            {
                //Based on the type of slot it is pass relevant parameters
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("BackpackSlots"):
                            DragAndDropSlot.SelectItem(eventData, movingSlot, backPackSlots, noItemSprite, out ogSlotIndex, out ogSlotType);
                            break;
                    case ("QuickSlots"):
                            DragAndDropSlot.SelectItem(eventData, movingSlot, quickSlots, noItemSprite, out ogSlotIndex, out ogSlotType);
                            break;
                    case ("CraftingSlots"):
                            DragAndDropSlot.SelectItem(eventData, movingSlot, craftingSlots, noItemSprite, out ogSlotIndex, out ogSlotType);
                            AttemptCrafting();
                            break;
                    case ("CraftingMenu"):
                        //If we are dragging an item from the crafted slot, the player has chosen to craft the item
                        //Therefore we will empty the contents of the crafting table
                        if (craftedSlot[0].SlotWithItem)
                        {
                            foreach (SlotController ingredient in craftingSlots)
                            {
                                ingredient.ItemImage.sprite = noItemSprite;
                                ingredient.SlotPrefab = null;
                                ingredient.SlotWithItem = false;
                                ingredient.ItemCont = null;
                            }
                        }
                        DragAndDropSlot.SelectItem(eventData, movingSlot, craftedSlot, noItemSprite, out ogSlotIndex, out ogSlotType);
                        craftTableCont.StockpileCont.Withdraw(1);
                        break;
                    default:
                        break;
                    
                }
            }
        }
        public void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, craftMenuRectTrans, movingSlotRectTrans);
        }
        public void OnEndDrag(PointerEventData eventData)
        {
            
            //  The players finger has stopped dragging onto a slot   Making sure the destination slot is an appripriate destination          //Making sure moving slot has an item                          //making sure destination slot has no item                                                                   //Checking to see that the destination slot holds no prefab 
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Craft Table") && movingSlot.SlotWithItem && movingSlot.SlotPrefab != null && !eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotWithItem && eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotPrefab == null)
            {

                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("BackpackSlots"):
                        DragAndDropSlot.DropItem(movingSlot, backPackSlots, noItemSprite, Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4)));
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.DropItem(movingSlot, quickSlots, noItemSprite, Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4)));
                        break;
                    case ("CraftingSlots"):
                        DragAndDropSlot.DropItem(movingSlot, craftingSlots, noItemSprite, Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4)));
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
            movingSlotRectTrans = transform.Find("Slot13").gameObject.GetComponent<RectTransform>();
            craftingSlots = new SlotController[craftedSlotNum];
            for (int i = 0; i < craftingSlots.Length; i++)
                craftingSlots[i] = transform.Find($"CraftingSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            backPackSlots = new SlotController[backPackSlotNum];
            for (int i = 0; i < backPackSlots.Length; i++)
                backPackSlots[i] = transform.Find($"BackpackSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            quickSlots = new SlotController[quickSlotsSlotNum];
            for (int i = 0; i < quickSlots.Length; i++)
                quickSlots[i] = transform.Find($"QuickSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            craftedSlot = new SlotController[1];
            craftedSlot[0] = transform.Find("Slot0").gameObject.GetComponent<SlotController>();
            movingSlot = transform.Find("Slot13").gameObject.GetComponent<SlotController>();
        }
    }
}