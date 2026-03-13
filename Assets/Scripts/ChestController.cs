using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class ChestController : SlotsController
    {
        #region "Private serialized fields."
        [SerializeField] private SlotController[] chestSlots;
        [SerializeField] private int chestSlotNum;
        [SerializeField] private PlayerController curUserCont;
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
            SubStackItemSlider = transform.Find(SubStackItemTransformPath).gameObject.GetComponent<Slider>();
            subStackSliderCont = SubStackItemSlider.gameObject.GetComponent<SubsetStackSliderController>();
        }
        void Awake()
        {
            MovingSlot = transform.Find("Slot13").gameObject.GetComponent<SlotController>();
            MovingSlotRectTrans = transform.Find("Slot13").gameObject.GetComponent<RectTransform>();
            chestRectTransform = GetComponent<RectTransform>();
        }
        public void OpenChest(PlayerController playerCont){
            
            if(!gameObject.activeInHierarchy){
                gameObject.SetActive(true);
                SynchronizeSlots.SyncSlots(backPackSlots,playerCont.PlayerBackPackCont.backPackSlots);
                SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(false);
                curUserCont = playerCont;
                curUserCont.IsUsingStorage = true;
            }
            
        }

        public override void CloseMenu()
        {
            //Update contents of slots in chest to match aappropriate slots outside of chest
            SynchronizeSlots.SyncSlots(curUserCont.PlayerBackPackCont.backPackSlots, backPackSlots);
            SynchronizeSlots.SyncSlots(curUserCont.PlayerInventoryCont.SlotConts, quickSlots);
            curUserCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
            gameObject.SetActive(false);
            curUserCont.IsUsingStorage = false;
            curUserCont = null;

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
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && MovingSlot.SlotWithItem && MovingSlot.SlotPrefab != null && SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name, out destSlots))
            {
                //The position of the destination slot.
                int slotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SwapDropItem(MovingSlot, destSlots, NoItemSprite, slotNum, initSlots, initSlotNum, eventData);
            }
            else 
                ReturnItem(eventData);
        }

        public override void ActivateSubStackSlider(PointerEventData eventData)
        {
            if (TimerPointerHeldDown >= 1.0f)
            {
                subStackSliderCont.InitSlot = initSlots[initSlotNum];
                subStackSliderCont.DestSlot = destSlots[destSlotNum];
                subStackSliderCont.MovingSlot = movingSlot;
                subStackSliderCont.CurEventData = eventData;
                SubStackItemSlider.gameObject.SetActive(true);
            }
        }
 
        public override void ConfirmSubStackQuantity()
        {
            DragAndDropSlot.SplitStack(initSlots[initSlotNum], destSlots[destSlotNum], movingSlot, Mathf.CeilToInt(SubStackItemSlider.value*(destSlots[destSlotNum].CurStackQuantity - 1))+((SubStackItemSlider.value!=0.0f)?0:1), NoItemSprite);
            SubStackItemSlider.value = 0.0f;
            SubStackItemSlider.gameObject.SetActive(false);
        }
    }
}
