using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class ChestController : SlotsController
    {
        #region "Private serialized fields."
        [SerializeField] private SlotController[] chestSlots;
        [SerializeField] private int chestSlotNum;
        #endregion
        private RectTransform chestRectTransform;
        // Start is called before the first frame update
        void Awake()
        {
            chestSlots = new SlotController[chestSlotNum];
            for(int i = 0; i < chestSlots.Length; i++)
                chestSlots[i] = transform.Find($"ChestSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            MovingSlot = transform.Find("Slot13").gameObject.GetComponent<SlotController>();
            MovingSlotRectTrans = transform.Find("Slot13").gameObject.GetComponent<RectTransform>();
            chestRectTransform = GetComponent<RectTransform>();
        }
        public void SyncChestSlots(PlayerController playerCont){

            if(gameObject.activeInHierarchy){
                //Update contents of slots in chest to match aappropriate slots outside of chest
                SynchronizeSlots.SyncSlots(playerCont.PlayerBackPackCont.backPackSlots, backPackSlots);
                SynchronizeSlots.SyncSlots(playerCont.PlayerInventoryCont.SlotConts, quickSlots);
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
                //curUserCont = null;
                gameObject.SetActive(false);
            }
            else{
                gameObject.SetActive(true);
                SynchronizeSlots.SyncSlots(backPackSlots,playerCont.PlayerBackPackCont.backPackSlots);
                SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(false);
            }
            
        }
        public override void ReturnItem(PointerEventData eventData)
        {
            switch (OgSlotType)
            {
                case ("BackpackSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, backPackSlots, NoItemSprite, OgSlotIndex);
                    break;
                case ("QuickSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, quickSlots, NoItemSprite, OgSlotIndex);
                    break;
                case ("ChestSlots"):
                    DragAndDropSlot.DropItem(MovingSlot, chestSlots, NoItemSprite, OgSlotIndex);
                    break;
                default:
                    break;
            }
        }
        public override void OnBeginDrag(PointerEventData eventData)
        {   
                 //Making sure the press point is not on blank space.  Are we sure that what we are dragging from is a slot?  + THe slot that we are draggin from, does it have an item?
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
                    case ("ChestSlots"):
                            initSlots = chestSlots;
                            DragAndDropSlot.SelectItem(eventData, MovingSlot, chestSlots, NoItemSprite, this);
                            break;
                    default:
                        break;
                    
                }
            }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, chestRectTransform, MovingSlotRectTrans);
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
            //  The players finger has stopped dragging onto a slot   Making sure the destination slot is an appripriate destination          //Making sure moving slot has an item                          //making sure destination slot has no item                                                                   //Checking to see that the destination slot holds no prefab 
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Chest") && MovingSlot.SlotWithItem && MovingSlot.SlotPrefab != null)
            {
                //The position of the destination slot.
                int slotNum = Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("BackpackSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, backPackSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, quickSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    case ("ChestSlots"):
                        DragAndDropSlot.SwapDropItem(MovingSlot, chestSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    default:
                        ReturnItem(eventData);
                        break;
                }
            }
            else 
                ReturnItem(eventData);
        }
    }
}
