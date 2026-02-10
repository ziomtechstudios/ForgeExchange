using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

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
            switch (OgSlotType)
            {
                case ("Backpack"):
                    DragAndDropSlot.DropItem(movingSlot, backPackSlots, NoItemSprite, OgSlotIndex);
                    break;
                case ("QuickSlots"):
                    DragAndDropSlot.DropItem(movingSlot, quickSlots, NoItemSprite, OgSlotIndex);
                    break;
                default:
                    break;
            }
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
            if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem)
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("Backpack"):
                        initSlots = backPackSlots;
                        DragAndDropSlot.SelectItem(eventData, movingSlot, backPackSlots, InventoryCont.NoItemSprite, this);
                        break;
                    case ("QuickSlots"):
                        initSlots = quickSlots;
                        DragAndDropSlot.SelectItem(eventData, movingSlot, quickSlots, InventoryCont.NoItemSprite, this);
                        break;
                    default:
                        break;
                }
            }
        }
        //Move moving slot to coressponding current touch position
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, backPackRectTransform, MovingSlotRectTrans);
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
               //Finger released over UI element                         //finger currently over UI element that is part of Backpack UI                   Player was moving an item                          Making sure the slot we are slotting an item into does not have an item into it already.
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Backpack") && movingSlot.SlotWithItem && movingSlot.SlotPrefab != null)
            {
                //THe position of the slot the player has dragged an item to.
                int slotNum = DragAndDropSlot.GetSlotNum(eventData);
                //Debug.Log($"We are trying to drop the item or stack to slot {slotNum} in {eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name} slots.");
                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("Backpack"):
                        DragAndDropSlot.SwapDropItem(movingSlot, backPackSlots, InventoryCont.NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.SwapDropItem(movingSlot, quickSlots, InventoryCont.NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                    default:
                        ReturnItem(eventData);
                        break;
                }
            }
            else
                ReturnItem(eventData);
            //Debug.Log($"The item dropped has an initial index of {OgSlotIndex} and was in the {OgSlotType} group of slots.");
            
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            for (int i =0; i < backPackSlots.Length; i++)
                backPackSlots[i] = transform.Find($"Slot{i}").GetComponent<SlotController>();
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