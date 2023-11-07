using System;
using Com.ZiomtechStudios.ForgeExchange;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftingMenuController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        #region "Private Serialized Fields"
        [SerializeField] private CraftTableController craftTableCont;
        [SerializeField] private SlotController[] craftingSlots;
        [SerializeField] private SlotController[] backPackSlots;
        [SerializeField] private SlotController[] quickSlots;
        [SerializeField] private SlotController[] craftedSlot;
        [SerializeField] private SlotController movingSlot;
        [SerializeField] private string currentRecipe;
        [SerializeField] private Sprite noItemSprite;
        [SerializeField] private int craftedSlotNum, backPackSlotNum, quickSlotsSlotNum;
        [SerializeField] private PlayerController curPlayerCont;
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
        private void EmptyCraftingSlot()
        {
            craftedSlot[0].ItemImage.sprite = noItemSprite;
            craftedSlot[0].SlotPrefab = null;
            craftedSlot[0].SlotWithItem = false;
            craftedSlot[0].ItemCont = null;
            potentialItem = null;
            craftTableCont.StockpileCont.Withdraw(1);
        }
        #endregion
        #region Getters/Setters
        public string CurrentRecipe { get { return currentRecipe; } }
        #endregion
        #region "Public Functions/Members"
        public void SyncCraftingMenuSlots(PlayerController playerCont)
        {
            SynchronizeSlots.SyncSlots(backPackSlots, playerCont.PlayerBackPackCont.BackPackSlots);
            SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
            curPlayerCont = playerCont;
            //curPlayerCont.PlayerInventoryCont.gameObject.SetActive(false);
        }
        public void ExitCraftingMenu()
        {

            gameObject.SetActive(false);
        }
        public void OnBeginDrag(PointerEventData eventData)
        {
            //  Making sure the press point is not on blank space.  Are we sure that what we are dragging from is a slot?  
            if (eventData.pointerPressRaycast.gameObject != null && !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas"))
            {
                //  THe slot that we are draggin from, does it have an item?
                if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem)
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
        }
        public void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, craftMenuRectTrans, movingSlotRectTrans);
        }
        public void OnEndDrag(PointerEventData eventData)
        {
            //  The players finger has stopped dragging onto a slot   Making sure the destination slot is not the slot for the crated item            Making sure the destination of the drag is not a blank portion of menu                   
            if (eventData.pointerCurrentRaycast.gameObject != null && !eventData.pointerCurrentRaycast.gameObject.transform.name.Contains("Slot0") && !eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Contains("Canvas") && movingSlot.SlotWithItem)
            {
                Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name);
                //  The slot at the destination of the drag has does not have an item                                           Checking to see that the destination slot holds no profab 
                if (!eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotWithItem && eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotPrefab == null)
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
                            currentRecipe = null;
                            foreach (SlotController ingredient in craftingSlots)
                                currentRecipe += (ingredient.SlotWithItem) ? (ingredient.ItemCont.PrefabItemStruct.itemSubTag + ingredient.ItemCont.PrefabItemStruct.craftingTag) : ("_");

                            if (currentRecipe != null)
                            {
                                if (craftTableCont.CraftedItemDict.TryGetValue(currentRecipe, out potentialItem))
                                {
                                    craftedSlot[0].ItemCont = potentialItem.GetComponent<ItemController>();
                                    craftedSlot[0].ItemImage.sprite = (potentialItem != null) ? (craftedSlot[0].ItemCont.ItemIcon) : (noItemSprite);
                                    craftedSlot[0].SlotPrefab = potentialItem;
                                    craftedSlot[0].SlotWithItem = true;
                                    craftTableCont.Work(craftedSlot[0].ItemCont);
                                }
                                else
                                    EmptyCraftingSlot();
                            }
                            else
                                EmptyCraftingSlot();
                            break;
                        default:
                            ReturnItem(eventData);
                            break;
                    }
                }
                else
                    ReturnItem(eventData);
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
        void OnDisable()
        {
            SynchronizeSlots.SyncSlots(curPlayerCont.PlayerBackPackCont.BackPackSlots, backPackSlots);
            SynchronizeSlots.SyncSlots(curPlayerCont.PlayerInventoryCont.SlotConts, quickSlots);
            curPlayerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
            curPlayerCont = null;
        }
    }
}