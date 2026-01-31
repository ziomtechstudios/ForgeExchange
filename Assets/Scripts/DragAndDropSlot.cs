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
                initSlot.CurStackQuantity--;
                initSlot.CounterTMPro.text = initSlot.CurStackQuantity.ToString();
                initSlot.ItemImage.sprite = (initSlot.CurStackQuantity < 1)? noItemSprite : initSlot.ItemImage.sprite;
                initSlot.SlotWithItem = (initSlot.CurStackQuantity >= 1);
                initSlot.ItemCont = (initSlot.CurStackQuantity < 1) ?  null : initSlot.ItemCont;
                initSlot.SlotPrefab = (initSlot.CurStackQuantity < 1) ? null : initSlot.SlotPrefab;
                initSlot.CounterTMPro.text = (initSlot.CurStackQuantity > 1) ?  initSlot.CurStackQuantity.ToString() : "";
        }

        private static void SwapStacks(SlotController initSlot, SlotController destSlot, SlotController movingSlot, Sprite noItemSprite)
        {
            //Stack at destination slot is moved to initial slot
            initSlot.ItemCont = destSlot.ItemCont;
            initSlot.ItemImage.sprite = destSlot.ItemCont.ItemIcon;
            initSlot.SlotWithItem = true;
            initSlot.SlotPrefab = destSlot.SlotPrefab;
            initSlot.CurStackQuantity = destSlot.CurStackQuantity;
            initSlot.CounterTMPro.text = (initSlot.CurStackQuantity > 1) ?  initSlot.CurStackQuantity.ToString() : "";
            //Stack in moving slot moved into destination slot
            destSlot.ItemCont = movingSlot.ItemCont;
            destSlot.ItemImage.sprite = movingSlot.ItemCont.ItemIcon;
            destSlot.SlotWithItem = true;
            destSlot.SlotPrefab = movingSlot.SlotPrefab;
            destSlot.CurStackQuantity =  movingSlot.CurStackQuantity;
            destSlot.CounterTMPro.text = (destSlot.CurStackQuantity > 1) ?  destSlot.CurStackQuantity.ToString() : "";
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
                // We are moving an item to a slot that is occupied with the same type of item.
                if (CheckMatchingItem(movingSlotCont.ItemCont, destSlots[destSlotIndex].ItemCont))
                {
                    //Iterate counter of stack and make sure GUI Text is updated, and remove the item from the stack
                    destSlots[destSlotIndex].CurStackQuantity += ((destSlots[destSlotIndex].CurStackQuantity + 1) <= destSlots[destSlotIndex].ItemCont.MaxStackQuantity) ? 1 : 0;
                    EmptyMovingSlot(movingSlotCont,noItemSprite);
                }
                else
                    SwapStacks(initSlots[initSlotIndex], destSlots[destSlotIndex], movingSlotCont, noItemSprite);
                
            }
            //We are moving an item and there is no item at the destination slot
            else if (movingSlotCont.SlotWithItem && !destSlots[destSlotIndex].SlotWithItem)
            {
                TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
                destSlots[destSlotIndex].CurStackQuantity++;
                
            }
            destSlots[destSlotIndex].CounterTMPro.text = (destSlots[destSlotIndex].CurStackQuantity > 1) ? destSlots[destSlotIndex].CurStackQuantity.ToString() : "";
        }
        public static void DropItem(SlotController movingSlotCont, SlotController[] destSlots, Sprite noItemSprite, int destSlotIndex)
        {
            //If we are actually moving an item drop the item where we have stopped dragging
            if (movingSlotCont.SlotPrefab != null)
                    TransferItem(movingSlotCont, destSlots[destSlotIndex], noItemSprite);
        }

        public static int GetSlotNum(PointerEventData eventData)
        {
            return Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
        }

        public static bool CheckMatchingItem(ItemController initItemCont, ItemController destItemCont)
        {
            return (initItemCont.PrefabItemStruct.itemSubTag + initItemCont.PrefabItemStruct.itemTag) == (destItemCont.PrefabItemStruct.itemSubTag + destItemCont.PrefabItemStruct.itemTag);
        }
    }
}
