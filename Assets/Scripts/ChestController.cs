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
            IsSubStacking = false;
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
                IsSubStacking = false;
            }
            
        }

        public override void CloseMenu()
        {
            if (!IsSubStacking)
            {
                //Update contents of slots in chest to match aappropriate slots outside of chest
                SynchronizeSlots.SyncSlots(curUserCont.PlayerBackPackCont.backPackSlots, backPackSlots);
                SynchronizeSlots.SyncSlots(curUserCont.PlayerInventoryCont.SlotConts, quickSlots);
                curUserCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
                gameObject.SetActive(false);
                curUserCont.IsUsingStorage = false;
                curUserCont = null;
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
            if (!IsSubStacking)
            {
                if (eventData.pointerPressRaycast.gameObject != null &&
                    !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas") &&
                    eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>()
                        .SlotWithItem &&
                    SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name,
                        out initSlots))
                {
                    initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                    initSlotAtDrag = eventData.pointerCurrentRaycast.gameObject.transform.parent.gameObject
                        .GetComponent<SlotController>();
                    DragAndDropSlot.SelectItem(eventData, MovingSlot, initSlots, NoItemSprite, this);
                }
            }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            if (!IsSubStacking)
            {
                DragAndDropSlot.MoveItem(eventData, chestRectTransform, MovingSlotRectTrans);
                initSlotAtDrag = eventData.pointerCurrentRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
                TimerPointerHeldDown = Time.time;
            }
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
            if (!IsSubStacking)
            {
                // Finger released over UI element. &&
                // Finger currently over an interactive UI element that is part of Backpack UI. &&
                // Player was moving an item && Making sure the slot we are slotting an item into does not have an item into it already. &&
                // Slot we are dropping off to is in our dictionary of slots.
                if (eventData.pointerCurrentRaycast.gameObject != null &&
                    eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && movingSlot.SlotWithItem &&
                    movingSlot.SlotPrefab != null &&
                    SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name,
                        out destSlots))
                {
                    destSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                    TimerPointerHeldDown = (initSlotAtDrag == destSlots[destSlotNum])
                        ? (Time.time - TimerPointerHeldDown)
                        : 0.0f;
                    if (initSlots[initSlotNum] != destSlots[destSlotNum])
                    {
                        if (TimerPointerHeldDown < 1.0f || destSlots[destSlotNum].SlotWithItem ||
                            movingSlot.CurStackQuantity == 1)
                            DragAndDropSlot.SwapDropItem(movingSlot, destSlots, NoItemSprite, destSlotNum, initSlots,
                                initSlotNum, eventData);
                        else if (TimerPointerHeldDown >= 1.0f && !destSlots[destSlotNum].SlotWithItem)
                            ActivateSubStackSlider(eventData);
                    }
                    else
                        ReturnItem(eventData);
                }
                else if (!IsSubStacking)
                    ReturnItem(eventData);

                TimerPointerHeldDown = 0.0f;
                initSlotAtDrag = null;
            }
        }

        public override void ActivateSubStackSlider(PointerEventData eventData)
        {
            if (TimerPointerHeldDown >= 1.0f)
            {
                IsSubStacking = true;
                subStackSliderCont.InitSlot = initSlots[initSlotNum];
                subStackSliderCont.DestSlot = destSlots[destSlotNum];
                subStackSliderCont.MovingSlot = movingSlot;
                subStackSliderCont.CurEventData = eventData;
                SubStackItemSlider.gameObject.SetActive(true);
            }
        }
 
        public override void ConfirmSubStackQuantity()
        {
            DragAndDropSlot.SplitStack(initSlots[initSlotNum], destSlots[destSlotNum], movingSlot, Mathf.CeilToInt(SubStackItemSlider.value*(movingSlot.CurStackQuantity - 1))+(SubStackItemSlider.value!=0.0f?0:1), NoItemSprite);
            SubStackItemSlider.value = 0.0f;
            SubStackItemSlider.gameObject.SetActive(false);
            IsSubStacking = false;
        }
    }
}
