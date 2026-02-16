using System;
using System.Collections.Generic;
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
        void Start()
        {
            chestSlots = new SlotController[chestSlotNum];
            for(int i = 0; i < chestSlots.Length; i++)
                chestSlots[i] = transform.Find($"ChestSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            SlotTypeDict = new Dictionary<string, SlotController[]>();
            SlotTypeDict.Add("ChestSlots", chestSlots);
            SlotTypeDict.Add("QuickSlots", quickSlots);
            SlotTypeDict.Add("BackpackSlots", backPackSlots);
        }
        void Awake()
        {

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
            DragAndDropSlot.DropItem(MovingSlot, initSlots, NoItemSprite, initSlotNum);
        }
        public override void OnBeginDrag(PointerEventData eventData)
        {   
            ///<summary>
            /// Making sure the press point is not on blank space. &&
            /// Are we sure that what we are dragging from is a slot? &&
            /// The slot that we are draggin from, does it have an item? &&
            /// The type of slot we are dragging and item from is in our Dictionary if SlotTypes
            /// </summary>
            if (eventData.pointerPressRaycast.gameObject != null && !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas") && eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem && SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name, out initSlots))
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SelectItem(eventData, MovingSlot, initSlots, NoItemSprite, this);
            }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, chestRectTransform, MovingSlotRectTrans);
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
            ///<summary>
            /// Making sure the player is dragging an item. &&
            /// Making sure we are dropping the item onto an appropriate UI element. &&
            /// Checking to see that the destination slot holds no prefab. &&
            /// Chekcing that the slot we have stopped at in part of a subset of slots in our dictionary of approved slots.
            /// </summary>
            //Debug.Log(eventData.pointerCurrentRaycast.gameObject.tag);
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && MovingSlot.SlotWithItem && MovingSlot.SlotPrefab != null && SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name, out destSlots))
            {
                //The position of the destination slot.
                int slotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SwapDropItem(MovingSlot, destSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
            }
            else 
                ReturnItem(eventData);
        }
    }
}
