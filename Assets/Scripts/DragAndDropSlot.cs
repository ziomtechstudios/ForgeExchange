using System;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public static class DragAndDropSlot
    {
        public static void SelectItem(PointerEventData eventData, SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, out int ogSlotIndex, out string ogSlotType)
        {
            //Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.name);
            SlotController selectedSlotCont = (eventData.pointerCurrentRaycast.gameObject == null) ? null : eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
            ogSlotIndex = 0;
            ogSlotType = "";
            if (selectedSlotCont != null && selectedSlotCont.SlotWithItem)
            {
                //Store reference to original slot in case invalid item drop is later made
                ogSlotIndex = Int32.Parse(selectedSlotCont.gameObject.name.Remove(0, 4));
                ogSlotType = eventData.pointerPressRaycast.gameObject.transform.parent.parent.name;
                //Moving item from Selected Slot to Moving Slot
                movingSlotCont.ItemCont = slots[ogSlotIndex].ItemCont;
                movingSlotCont.ItemImage.sprite = movingSlotCont.ItemCont.ItemIcon;
                movingSlotCont.SlotWithItem = true;
                movingSlotCont.SlotPrefab = slots[ogSlotIndex].SlotPrefab;
                //Emptying Selected Slot 
                slots[ogSlotIndex].ItemImage.sprite = noItemSprite;
                slots[ogSlotIndex].SlotWithItem = false;
                slots[ogSlotIndex].ItemCont = null;
                slots[ogSlotIndex].SlotPrefab = null;
                //Making moving slot visible
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
            if (movingSlotCont.SlotPrefab != null)
            {
                //Occupying targeted slot
                slots[slotIndex].ItemImage.sprite = movingSlotCont.ItemImage.sprite;
                slots[slotIndex].SlotWithItem = true;
                slots[slotIndex].ItemCont = movingSlotCont.ItemCont;
                slots[slotIndex].SlotPrefab = movingSlotCont.SlotPrefab;
                //Emptying Moving Slot
                movingSlotCont.ItemImage.sprite = noItemSprite;
                movingSlotCont.SlotWithItem = false;
                movingSlotCont.ItemCont = null;
                movingSlotCont.SlotPrefab = null;
                movingSlotCont.gameObject.SetActive(false);
            }
        }
    }
}
