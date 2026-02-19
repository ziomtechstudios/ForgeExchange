using System;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public static class DragAndDropSlot
    {
        private static void TransferStack(SlotController initSlot, SlotController destSlot, Sprite noItemSprite)
        {
            //Moving item from initial slot to destination slot
            destSlot.ItemCont = initSlot.ItemCont;
            destSlot.ItemImage.sprite = initSlot.ItemCont.ItemIcon;
            destSlot.SlotWithItem = true;
            destSlot.SlotPrefab = initSlot.SlotPrefab;
            destSlot.CurStackQuantity =  initSlot.CurStackQuantity;
            destSlot.CounterTMPro.text = (destSlot.CurStackQuantity > 1)?destSlot.CurStackQuantity.ToString():"";
            //emptying initial slot
            initSlot.CurStackQuantity = 0;
            initSlot.CounterTMPro.text = "";
            initSlot.ItemCont = null;
            initSlot.ItemImage.sprite  =  noItemSprite;
            initSlot.SlotWithItem = false;
            initSlot.SlotPrefab = null;
        } 
        private static int ReturnStack(SlotController initSlot, SlotController destSlot, Sprite noItemSprite)
        {
            //Moving item from initial slot to destination slot
            destSlot.ItemCont = initSlot.ItemCont;
            destSlot.ItemImage.sprite = initSlot.ItemCont.ItemIcon;
            destSlot.SlotWithItem = true;
            destSlot.SlotPrefab = initSlot.SlotPrefab;
            destSlot.CurStackQuantity =  initSlot.CurStackQuantity;
            UpdateSlotCounterText(destSlot);
            //emptying initial slot
            initSlot.CurStackQuantity = 0;
            initSlot.ItemCont = null;
            initSlot.ItemImage.sprite  =  noItemSprite;
            initSlot.SlotWithItem = false;
            initSlot.SlotPrefab = null;
            UpdateSlotCounterText(initSlot);
            return 0;
        }
        private static void SwapStacks(SlotController initSlot, SlotController destSlot, SlotController movingSlot, Sprite noItemSprite)
        {
            //Stack at destination slot is moved to initial slot
            initSlot.ItemCont = destSlot.ItemCont;
            initSlot.ItemImage.sprite = destSlot.ItemCont.ItemIcon;
            initSlot.SlotWithItem = true;
            initSlot.SlotPrefab = destSlot.SlotPrefab;
            initSlot.CurStackQuantity = destSlot.CurStackQuantity;
            UpdateSlotCounterText(initSlot);
            //Stack in moving slot moved into destination slot
            destSlot.ItemCont = movingSlot.ItemCont;
            destSlot.ItemImage.sprite = movingSlot.ItemCont.ItemIcon;
            destSlot.SlotWithItem = true;
            destSlot.SlotPrefab = movingSlot.SlotPrefab;
            destSlot.CurStackQuantity =  movingSlot.CurStackQuantity;
            UpdateSlotCounterText(destSlot);
            //Emptying moving slot
            EmptyMovingSlot(movingSlot, noItemSprite);
        }
        //For situations like Item stacking where we just need to empty the moving slot
        private static void EmptyMovingSlot(SlotController movingSlot, Sprite noItemSprite)
        {
            movingSlot.ItemImage.sprite = noItemSprite;
            movingSlot.SlotWithItem = false;
            movingSlot.ItemCont = null;
            movingSlot.SlotPrefab = null;
            movingSlot.CurStackQuantity = 0;
            movingSlot.CounterTMPro.text = "";
            movingSlot.gameObject.SetActive(false);
        }
        public static void SelectItem(PointerEventData eventData, SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, SlotsController container)
        {
            SlotController selectedSlotCont = (eventData.pointerCurrentRaycast.gameObject == null) ? null : eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
            if (selectedSlotCont != null && selectedSlotCont.SlotWithItem)
            {
                //Store reference to original slot in case invalid item drop is later made.
                container.OgSlotIndex = Int32.Parse(selectedSlotCont.gameObject.name.Remove(0, 4));
                container.OgSlotType = eventData.pointerPressRaycast.gameObject.transform.parent.parent.name;
                if (selectedSlotCont.CurStackQuantity == 1)
                    //Transferring Item from Initial slot and transferring to moving slot.
                    TransferStack(slots[container.OgSlotIndex], movingSlotCont, noItemSprite);
                else if (selectedSlotCont.CurStackQuantity > 1)
                    //Transferring whole stack from initial to moving slot
                    TransferStack(slots[container.OgSlotIndex], movingSlotCont, noItemSprite);
                //Making moving slot visible.
                movingSlotCont.gameObject.SetActive(true);
            }
        }
        public static void MoveItem(PointerEventData eventData, RectTransform canvasRectTransform, RectTransform movingSlotRectTransform)
        {
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.pointerCurrentRaycast.screenPosition, eventData.pressEventCamera, out Vector2 anchoredPosition);
            movingSlotRectTransform.anchoredPosition = anchoredPosition;
        }
        public static void SwapDropItem(SlotController movingSlotCont, SlotController[] destSlots, Sprite noItemSprite, int destSlotIndex, SlotController[] initSlots, int initSlotIndex, PointerEventData eventData)
        {
            //We are moving an item and the dest slot has an item
            if (movingSlotCont.SlotWithItem && destSlots[destSlotIndex].SlotWithItem)
            {
                // We are moving an item/stack to a slot that is occupied with the same type of item./stack
                if (CheckMatchingItem(movingSlotCont.ItemCont, destSlots[destSlotIndex].ItemCont))
                {
                    //If stacking an item or stack onto an existing stack let us make sure we are exceeding the maximum amount of items.
                    //If we do lets return to moving item/stack back to its original position.
                    bool isOverFilled = ((destSlots[destSlotIndex].CurStackQuantity + movingSlotCont.CurStackQuantity) > destSlots[destSlotIndex].ItemCont.MaxStackQuantity);
                    destSlots[destSlotIndex].CurStackQuantity += (isOverFilled ? ReturnStack(movingSlotCont, initSlots[initSlotIndex], noItemSprite) : movingSlotCont.CurStackQuantity);
                    destSlots[destSlotIndex].CounterTMPro.text = (destSlots[destSlotIndex].CurStackQuantity > 1) ? destSlots[destSlotIndex].CurStackQuantity.ToString() : "";
                }
                else
                    SwapStacks(initSlots[initSlotIndex], destSlots[destSlotIndex], movingSlotCont, noItemSprite);
            }
            //We are moving an item and there is no item at the destination slot
            else if (movingSlotCont.SlotWithItem && !destSlots[destSlotIndex].SlotWithItem)
                TransferStack(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
            EmptyMovingSlot(movingSlotCont, noItemSprite);
        }
        public static void DropItem(SlotController movingSlotCont, SlotController[] destSlots, Sprite noItemSprite, int destSlotIndex)
        {
            //If we are actually moving an item drop the item where we have stopped dragging
            if (movingSlotCont.SlotPrefab != null)
                    TransferStack(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
        }
        public static int GetSlotNum(PointerEventData eventData)
        {
            return Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
        }
        public static bool CheckMatchingItem(ItemController initItemCont, ItemController destItemCont)
        {
            return (initItemCont.PrefabItemStruct.itemSubTag + initItemCont.PrefabItemStruct.itemTag) == (destItemCont.PrefabItemStruct.itemSubTag + destItemCont.PrefabItemStruct.itemTag);
        }

        public static void UpdateSlotCounterText(SlotController slotCont)
        {
            slotCont.CounterTMPro.text = (slotCont.CurStackQuantity > 1) ? slotCont.CurStackQuantity.ToString() : "";
        }
    }
}
