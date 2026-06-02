using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class BackpackController : SlotsController
    {
        #region "Private Serialized Fields"
        [SerializeField] private PlayerUIController m_PlayerUIController;
        #endregion
        #region Private Functions + Members
        private RectTransform backPackRectTransform;
        #endregion
        #region Public Funcs
        public override void CloseMenu()
        {
            Debug.Log("Trying to close backpack.");
            if(!isSubStacking)
                transform.parent.gameObject.SetActive(false);
        }
        public override void ReturnItem(PointerEventData eventData)
        {
            DragAndDropSlot.DropItem(movingSlot, initSlots, NoItemSprite, OgSlotIndex);
        }
        //Store info of original item is contained in and move the item to the moving slot
        public override void OnBeginDrag(PointerEventData eventData)
        {
            if (!IsSubStacking) 
            {
                // If the player is pressing on a slot with an item &&
                // the type of slot we are dragging an item from is in our dictionary of slots.
                if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>()
                        .SlotWithItem &&
                    SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name,
                        out initSlots) && !IsSubStacking)
                {
                    initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                    DragAndDropSlot.SelectItem(eventData, movingSlot, initSlots, InventoryCont.NoItemSprite, this);
                }
            }
        }
        //Move moving slot to corresponding current touch position
        public override void OnDrag(PointerEventData eventData)
        {
            if (!IsSubStacking && eventData.pointerCurrentRaycast.gameObject)
            {
                DragAndDropSlot.MoveItem(eventData, backPackRectTransform, MovingSlotRectTrans);
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
                    movingSlot.SlotItemTuple.Item1 &&
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
                            DragAndDropSlot.SwapDropItem(movingSlot, destSlots, InventoryCont.NoItemSprite, destSlotNum,
                                initSlots, initSlotNum, eventData);
                        else if (TimerPointerHeldDown >= 1.0f && !destSlots[destSlotNum].SlotWithItem && movingSlot.CurStackQuantity > 2)
                            ActivateSubStackSlider(eventData);
                        else if(TimerPointerHeldDown >= 1.0f && !destSlots[destSlotNum].SlotWithItem && movingSlot.CurStackQuantity == 2)
                            DragAndDropSlot.SplitStack(initSlots[initSlotNum], destSlots[destSlotNum], movingSlot, 1, NoItemSprite);
                    }
                    else
                        ReturnItem(eventData);
                }
                else
                    ReturnItem(eventData);
            }
            else if (!IsSubStacking)
                ReturnItem(eventData);
            TimerPointerHeldDown = 0.0f;
            initSlotAtDrag = null;
        }
        public override void ActivateSubStackSlider(PointerEventData eventData)
        {
            IsSubStacking = true;
            subStackSliderCont.InitSlot = initSlots[initSlotNum];
            subStackSliderCont.DestSlot = destSlots[destSlotNum];
            subStackSliderCont.MovingSlot = movingSlot;
            SubStackItemSlider.gameObject.SetActive(true);
        }
        public override void ConfirmSubStackQuantity()
        {
            DragAndDropSlot.SplitStack(initSlots[initSlotNum], destSlots[destSlotNum], movingSlot, Mathf.CeilToInt(SubStackItemSlider.value*(movingSlot.CurStackQuantity - 1))+(SubStackItemSlider.value!=0.0f?0:1), InventoryCont.NoItemSprite);
            SubStackItemSlider.value = 0.0f;
            SubStackItemSlider.gameObject.SetActive(false);
            isSubStacking = false;
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_PlayerUIController = InventoryCont.transform.parent.parent.parent.gameObject.GetComponent<PlayerUIController>();
            for (int i =0; i < backPackSlots.Length; i++)
                backPackSlots[i] = transform.Find($"Slot{i}").GetComponent<SlotController>();
            SlotTypeDict.Add("Backpack", backPackSlots);
            SlotTypeDict.Add("QuickSlots", quickSlots);
            SubStackItemSlider = transform.Find(SubStackItemTransformPath).gameObject.GetComponent<Slider>();
            subStackSliderCont = SubStackItemSlider.gameObject.GetComponent<SubsetStackSliderController>();
            movingSlot = transform.Find("Slot13").GetComponent<SlotController>();
            MovingSlotRectTrans = MovingSlot.gameObject.GetComponent<RectTransform>();
            backPackRectTransform = GetComponent<RectTransform>();
        } 
        void Awake()
        {
            InventoryCont = transform.parent.parent.parent.Find("InventorySlots").gameObject.GetComponent<InventoryController>();
            SlotTypeDict = new Dictionary<string, SlotController[]>();
            isSubStacking = false;
        }
        void OnEnable()
        {
            SynchronizeSlots.SyncSlots(quickSlots, InventoryCont.SlotConts);
            InventoryCont.AreAllSlotsFull();
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(false);
        }
        void OnDisable()
        {
            SynchronizeSlots.SyncSlots(InventoryCont.SlotConts, quickSlots);
            InventoryCont.AreAllSlotsFull();
            InventoryCont.PlayerCont.IsUsingStorage = false;
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(true);
        }
    }
}