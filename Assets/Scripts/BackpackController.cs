using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
// ReSharper disable InvalidXmlDocComment

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class BackpackController : SlotsController
    {
        #region Private Serialized Fields

        [SerializeField] private PlayerUIController m_PlayerUIController;
        #endregion
        #region Private Functions + Members
        private RectTransform backPackRectTransform;

        #endregion
        #region Public Funcs
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

        public override void OnPointerDown(PointerEventData eventData)
        {
            TimerPointerHeldDown = Time.time;
            IsHolding = true;
        }

        public override void OnPointerUp(PointerEventData eventData)
        {
            
        }

        //Store info of original item is contained in and move the item to the moving slot
        public override void OnBeginDrag(PointerEventData eventData)
        {   
            /// <summary>
            /// If the player is pressing on a slot with an item &&
            /// the type of slot we are dragging an item from is in our dictionary of slots.
            /// </summary>
            if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem && SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name, out initSlots))
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SelectItem(eventData, movingSlot, initSlots, InventoryCont.NoItemSprite, this);
            }
        }
        //Move moving slot to corresponding current touch position
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, backPackRectTransform, MovingSlotRectTrans);
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
               ///<summary>
               /// Finger released over UI element. &&
               /// Finger currently over an interactive UI element that is part of Backpack UI. &&
               /// Player was moving an item && Making sure the slot we are slotting an item into does not have an item into it already. &&
               /// Slot we are dropping off to is in our dictionary of slots.
               /// </summary>
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && movingSlot.SlotWithItem && movingSlot.SlotPrefab != null && SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name, out destSlots))
            {
                //THe position of the slot the player has dragged an item to.
                int slotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SwapDropItem(movingSlot, destSlots, InventoryCont.NoItemSprite, slotNum, initSlots, initSlotNum, eventData);
            }
            else
                ReturnItem(eventData);
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
        } 
        void Awake()
        {
            InventoryCont = transform.parent.parent.parent.Find("InventorySlots").gameObject.GetComponent<InventoryController>();
            m_PlayerUIController = InventoryCont.transform.parent.parent.parent.gameObject.GetComponent<PlayerUIController>();
            movingSlot = gameObject.transform.Find("Slot13").GetComponent<SlotController>();
            MovingSlotRectTrans = MovingSlot.gameObject.GetComponent<RectTransform>();
            backPackRectTransform = GetComponent<RectTransform>();
            
        }
        void OnEnable()
        {
            SyncQuickSlots("InGameToMenu");
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(false);
        }
        void OnDisable()
        {
            SyncQuickSlots("MenuToInGame");
            //Re-enable in-game quickslots since backpack is closed
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(true);
        }
    }
}