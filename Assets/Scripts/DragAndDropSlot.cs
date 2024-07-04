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
        public static void SelectItem(PointerEventData eventData, SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, int ogSlotIndex, string ogSlotType)
        {
            //Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.name);
            SlotController selectedSlotCont = (eventData.pointerCurrentRaycast.gameObject == null) ? null : eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
            if (selectedSlotCont != null && selectedSlotCont.SlotWithItem)
            {
                //Store reference to original slot in case invalid item drop is later made.
                ogSlotIndex = Int32.Parse(selectedSlotCont.gameObject.name.Remove(0, 4));
                ogSlotType = eventData.pointerPressRaycast.gameObject.transform.parent.parent.name;
                Debug.Log($"The item selected has an initial index of {ogSlotIndex} and was in the {ogSlotType} group of slots.");
                //Transfering Item from Initial slot and transfering to moving slot.
                TransferItem(slots[ogSlotIndex], movingSlotCont, noItemSprite);
                //Making moving slot visible.
                movingSlotCont.gameObject.SetActive(true);
            }
        }
        public static void MoveItem(PointerEventData eventData, RectTransform canvasRectTransform, RectTransform movingSlotRectTransform)
        {
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, eventData.pointerCurrentRaycast.screenPosition, eventData.pressEventCamera, out Vector2 anchoredPosition);
            movingSlotRectTransform.anchoredPosition = anchoredPosition;
        }
        public static void DropItem(SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, int slotIndex)
        {
            //If we are actually moving an item drop the item where we have stopped dragging
            if (movingSlotCont.SlotPrefab != null)
                TransferItem(movingSlotCont, slots[slotIndex], noItemSprite);
        }
    }
}
