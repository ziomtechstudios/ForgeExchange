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
        #region public members
        public SlotController initSlotAtDrag;
        #endregion
        #region Public Funcs
        public override void CloseMenu()
        {
            if(!isSubStacking)
                transform.parent.gameObject.SetActive(false);
        }
        public override void ReturnItem(PointerEventData eventData)
        {
            DragAndDropSlot.DropItem(movingSlot, initSlots, NoItemSprite, OgSlotIndex);
        }
        public void SyncQuickSlots(string order)
        {
            switch (order)
            {
                //Make Quick Slots in menu match the ones in-game
                case "InGameToMenu":
                    SynchronizeSlots.SyncSlots(quickSlots, InventoryCont.SlotConts);
                    break;
                //Make the quick slots in the in-game UI to match the ones in the inventory menu
                case "MenuToInGame":
                    SynchronizeSlots.SyncSlots(InventoryCont.SlotConts, quickSlots);
                    break;
            }
            //Update status of if all quick slots are full
            InventoryCont.AreAllSlotsFull();
        }
        //Store info of original item is contained in and move the item to the moving slot
        public override void OnBeginDrag(PointerEventData eventData)
        {   
            // If the player is pressing on a slot with an item &&
            // the type of slot we are dragging an item from is in our dictionary of slots.
            if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem && SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name, out initSlots) && !IsSubStacking)
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SelectItem(eventData, movingSlot, initSlots, InventoryCont.NoItemSprite, this);
            }
        }
        //Move moving slot to corresponding current touch position
        public override void OnDrag(PointerEventData eventData)
        {
            if (!IsSubStacking)
            {
                DragAndDropSlot.MoveItem(eventData, backPackRectTransform, MovingSlotRectTrans);
                initSlotAtDrag = eventData.pointerCurrentRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>();
                TimerPointerHeldDown = Time.time;
            }
        }
        public override void OnEndDrag(PointerEventData eventData)  
        {   
            // Finger released over UI element. &&
            // Finger currently over an interactive UI element that is part of Backpack UI. &&
            // Player was moving an item && Making sure the slot we are slotting an item into does not have an item into it already. &&
            // Slot we are dropping off to is in our dictionary of slots.
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && movingSlot.SlotWithItem && movingSlot.SlotPrefab != null && SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name, out destSlots) && !IsSubStacking)
            {
                destSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                TimerPointerHeldDown = (initSlotAtDrag == destSlots[destSlotNum]) ? (Time.time-TimerPointerHeldDown) : 0.0f;
                //Debug.Log($"TimerPointerHeldDown = {TimerPointerHeldDown}.");
                if (initSlots[initSlotNum] != destSlots[destSlotNum])
                {
                    if (TimerPointerHeldDown < 1.0f || destSlots[destSlotNum].SlotWithItem || movingSlot.CurStackQuantity == 1)
                        DragAndDropSlot.SwapDropItem(movingSlot, destSlots, InventoryCont.NoItemSprite, destSlotNum, initSlots, initSlotNum, eventData);
                    else if (TimerPointerHeldDown >= 1.0f && !destSlots[destSlotNum].SlotWithItem)
                        ActivateSubStackSlider(eventData); 
                }
                else
                    ReturnItem(eventData);
            }
            else if(!IsSubStacking)
                ReturnItem(eventData);
            TimerPointerHeldDown = 0.0f;
            initSlotAtDrag = null;
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
            DragAndDropSlot.SplitStack(initSlots[initSlotNum], destSlots[destSlotNum], movingSlot, Mathf.CeilToInt(SubStackItemSlider.value*(movingSlot.CurStackQuantity - 1))+(SubStackItemSlider.value!=0.0f?0:1), InventoryCont.NoItemSprite);
            SubStackItemSlider.value = 0.0f;
            SubStackItemSlider.gameObject.SetActive(false);
            isSubStacking = false;
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            SlotTypeDict = new Dictionary<string, SlotController[]>();
            for (int i =0; i < backPackSlots.Length; i++)
                backPackSlots[i] = transform.Find($"Slot{i}").GetComponent<SlotController>();
            SlotTypeDict.Add("Backpack", backPackSlots);
            SlotTypeDict.Add("QuickSlots", quickSlots);
            SubStackItemSlider = transform.Find(SubStackItemTransformPath).gameObject.GetComponent<Slider>();
            subStackSliderCont = SubStackItemSlider.gameObject.GetComponent<SubsetStackSliderController>();
            IsSubStacking = false;
        } 
        void Awake()
        {
            InventoryCont = transform.parent.parent.parent.Find("InventorySlots").gameObject.GetComponent<InventoryController>();
            m_PlayerUIController = InventoryCont.transform.parent.parent.parent.gameObject.GetComponent<PlayerUIController>();
            movingSlot = transform.Find("Slot13").GetComponent<SlotController>();
            MovingSlotRectTrans = MovingSlot.gameObject.GetComponent<RectTransform>();
            backPackRectTransform = GetComponent<RectTransform>();
            isSubStacking = false;
        }
        void OnEnable()
        {
            SyncQuickSlots("InGameToMenu");
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(false);
            //IsSubStacking = false;
        }
        void OnDisable()
        {
            SyncQuickSlots("MenuToInGame");
            //Re-enable in-game quickslots since backpack is closed
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(true);
            //IsSubStacking = false;
        }
    }
}