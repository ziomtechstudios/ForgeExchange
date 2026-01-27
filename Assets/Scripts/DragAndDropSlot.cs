using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.ProBuilder.MeshOperations;

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
                //Emptying Selected Slot if there is no stack
                initSlot.ItemImage.sprite = (initSlot.CurStackQuantity < 1)? noItemSprite : initSlot.ItemImage.sprite;
                initSlot.SlotWithItem = (initSlot.CurStackQuantity >= 1);
                initSlot.ItemCont = (initSlot.CurStackQuantity < 1) ?  null : initSlot.ItemCont;
                initSlot.SlotPrefab = (initSlot.CurStackQuantity < 1) ? null : initSlot.SlotPrefab;
                initSlot.CurStackQuantity = initSlot.CurStackQuantity--;
                initSlot.CounterTMPro.text = initSlot.CurStackQuantity.ToString();
                initSlot.CounterTMPro.gameObject.SetActive(initSlot.CurStackQuantity >= 1);
        }
        //For situations like Item stacking where we just need to empty the moving slot
        private static void EmptyMovingSlot(SlotController movingSlot, Sprite noItemSprite)
        {
            movingSlot.ItemImage.sprite = noItemSprite;
            movingSlot.SlotWithItem = false;
            movingSlot.ItemCont = null;
            movingSlot.SlotPrefab = null;
        }
        public static void SelectItem(PointerEventData eventData, SlotController movingSlotCont, SlotController[] slots, Sprite noItemSprite, SlotsController container)
        {
            SlotController selectedSlotCont = (eventData.pointerCurrentRaycast.gameObject == null) ? null : eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
            if (selectedSlotCont != null && selectedSlotCont.SlotWithItem)
            {
                //Store reference to original slot in case invalid item drop is later made.
                container.OgSlotIndex = Int32.Parse(selectedSlotCont.gameObject.name.Remove(0, 4));
                container.OgSlotType = eventData.pointerPressRaycast.gameObject.transform.parent.parent.name;
                //Transfering Item from Initial slot and transferring to moving slot.
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
            //We are moving an item and the dest slot has an item
            if (movingSlotCont.SlotWithItem && destSlots[destSlotIndex].SlotWithItem)
            {
                string destItemTag = destSlots[destSlotIndex].ItemCont.PrefabItemStruct.itemSubTag +
                                     destSlots[destSlotIndex].ItemCont.PrefabItemStruct.itemTag;
                string movingItemTag = movingSlotCont.ItemCont.PrefabItemStruct.itemSubTag + movingSlotCont.ItemCont.PrefabItemStruct.itemTag;
                // We are moving an item to a slot that is occupied with the same type of item.
                if (destItemTag == movingItemTag)
                {
                    //Iterate counter of stack and make sure GUI Text is updated, and remove the item from the stack
                    destSlots[destSlotIndex].CurStackQuantity += ((destSlots[destSlotIndex].CurStackQuantity + 1) <= destSlots[destSlotIndex].ItemCont.MaxStackQuantity) ? 1 : 0;
                    destSlots[destSlotIndex].CounterTMPro.text = destSlots[destSlotIndex].CurStackQuantity.ToString();
                    EmptyMovingSlot(movingSlotCont,noItemSprite);
                }
                else 
                {
                    TransferItem(destSlots[destSlotIndex], initSlots[initSlotIndex], noItemSprite);
                    TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
                }
            }
            //We are moving an item and there is no item at the destination slot
            else if(movingSlotCont.SlotWithItem && !destSlots[destSlotIndex].SlotWithItem)
                TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
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
