using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public static class DragAndDropSlot
    {
        private static void TransferItem(SlotController initSlot, SlotController destSlot, Sprite noItemSprite){
                //Moving item from initial slot to destination slot
                destSlot.ItemCont = initSlot.ItemCont;
                destSlot.ItemImage.sprite = initSlot.ItemCont.ItemIcon;
                destSlot.SlotWithItem = true;
                destSlot.SlotPrefab = initSlot.SlotPrefab;
                //Emptying Selected Slot 
                initSlot.ItemImage.sprite = noItemSprite;
                initSlot.SlotWithItem = false;
                initSlot.ItemCont = null;
                initSlot.SlotPrefab = null;
        }
        public static void SelectItem(PointerEventData eventData, SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, SlotsController container)
        {
            //Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.name);
            SlotController selectedSlotCont = (eventData.pointerCurrentRaycast.gameObject == null) ? null : eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
            if (selectedSlotCont != null && selectedSlotCont.SlotWithItem)
            {
                //Store reference to original slot in case invalid item drop is later made.
                container.OgSlotIndex = Int32.Parse(selectedSlotCont.gameObject.name.Remove(0, 4));
                container.OgSlotType = eventData.pointerPressRaycast.gameObject.transform.parent.parent.name;
                //Transfering Item from Initial slot and transfering to moving slot.
                TransferItem(slots[container.OgSlotIndex], movingSlotCont, noItemSprite);
                //Making moving slot visible.
                movingSlotCont.gameObject.SetActive(true);
            }
        }
        public static void MoveItem(PointerEventData eventData, RectTransform canvasRectTransform, RectTransform movingSlotRectTransform)
        {
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.pointerCurrentRaycast.screenPosition, eventData.pressEventCamera, out Vector2 anchoredPosition);
            movingSlotRectTransform.anchoredPosition = anchoredPosition;
        }
        public static void SwapDropItem(SlotController movingSlotCont, SlotController[] destSlots, Sprite noItemSprite, int destSlotIndex, SlotController[] initSlots, int initSlotIndex)
        {
            //Debug.Log($"Dest Slot With Item: {destSlots[destSlotIndex].SlotWithItem}, Moving Slot has Item:{movingSlotCont.SlotWithItem}.");
            //If we are actually moving an item drop the item where we have stopped dragging
            if (movingSlotCont.SlotWithItem)
            {
                if (destSlots[destSlotIndex].SlotWithItem)
                {
                    //SlotController tempSlotCont = destSlots[destSlotIndex];
                    TransferItem(destSlots[destSlotIndex], initSlots[initSlotIndex], noItemSprite);
                    TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
                }
                else
                    TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
            }
        }
        public static void DropItem(SlotController movingSlotCont, SlotController[] destSlots, Sprite noItemSprite, int destSlotIndex)
        {
            //If we are actually moving an item drop the item where we have stopped dragging
            if (movingSlotCont.SlotPrefab != null)
                    TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
        }

        public static int GetSlotNum(PointerEventData eventData)
        {
            Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.name);
            return Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
        }
    }
}
