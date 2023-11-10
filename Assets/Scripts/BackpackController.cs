using System;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class BackpackController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        #region Private Serialized Fields
        [SerializeField] private int numSlots;
        [SerializeField] private InventoryController m_InventoryCont;
        [SerializeField] private SlotController[] backPackSlots;
        [SerializeField] private SlotController[] quickSlots;
        [SerializeField] private GameObject movingSlot;
        [SerializeField] private SlotController movingSlotCont;
        [SerializeField] private Canvas m_Canvas;
        [SerializeField] private PlayerUIController m_PlayerUIController;
        #endregion
        #region Private Functions + Members
        private string ogSlotType;
        private int ogSlotIndex;
        private RectTransform movingSlotRectTransform;
        private RectTransform backPackRectTransform;
        private void ReturnItem(PointerEventData eventData)
        {
            switch (ogSlotType)
            {
                case ("Backpack"):
                    DragAndDropSlot.DropItem(movingSlotCont, backPackSlots, m_InventoryCont.NoItemSprite, ogSlotIndex);
                    break;
                case ("QuickSlots"):
                    DragAndDropSlot.DropItem(movingSlotCont, quickSlots, m_InventoryCont.NoItemSprite, ogSlotIndex);
                    break;
                default:
                    break;
            }
        }
        #endregion
        #region Getters/Setters
        public string OGSlotType { get { return ogSlotType; } }
        public int OGSlotIndex { get { return ogSlotIndex; } }
        public SlotController[] BackPackSlots { get { return backPackSlots; } }
        #endregion
        #region Public Funcs
        public void FindBackpackSlots()
        {
            for (int i = 0; i < numSlots; i++)
                backPackSlots[i] = transform.Find($"Slot{i}").gameObject.GetComponent<SlotController>();
        }
        public void SyncQuickSlots(string order)
        {
            switch (order)
            {
                //Make Quick Slots in menu match the ones in-game
                case "InGameToMenu":
                    SynchronizeSlots.SyncSlots(quickSlots, m_InventoryCont.SlotConts);
                    break;
                //Make the quick slots in the in-game UI to match the ones in the inventory menu
                case "MenuToInGame":
                    SynchronizeSlots.SyncSlots(m_InventoryCont.SlotConts, quickSlots);
                    break;
            }
            //Update status of if all quick slots are full
            m_InventoryCont.AreAllSlotsFull();
        }
        //Store info of original item is contained in and move the item to the moving slot
        public void OnBeginDrag(PointerEventData eventData)
        {
            if (eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem)
            {
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("Backpack"):
                        DragAndDropSlot.SelectItem(eventData, movingSlotCont, backPackSlots, m_InventoryCont.NoItemSprite, out ogSlotIndex, out ogSlotType);
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.SelectItem(eventData, movingSlotCont, quickSlots, m_InventoryCont.NoItemSprite, out ogSlotIndex, out ogSlotType);
                        break;
                    default:
                        break;
                }
            }
        }
        //Move moving slot to coressponding current touch position
        public void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, backPackRectTransform, movingSlotRectTransform);
        }
        /// <summary>
        /// Moving slot is at destination
        /// Check to see if destination has a slot and if that slot is not being used
        /// If there is an empty slot remove item from moving slot and insert into destination slot
        /// if no empty slot send the item back into its original slot
        /// </summary>
        public void OnEndDrag(PointerEventData eventData)
        {
            //Debug.Log(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name);
            if (eventData.pointerCurrentRaycast.gameObject != null && !eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name.Contains("Canvas") && movingSlotCont.SlotWithItem)
            {
                if (!(eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotWithItem))
                {
                    switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                    {
                        case ("Backpack"):
                            DragAndDropSlot.DropItem(movingSlotCont, backPackSlots, m_InventoryCont.NoItemSprite, Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4)));
                            break;
                        case ("QuickSlots"):
                            DragAndDropSlot.DropItem(movingSlotCont, quickSlots, m_InventoryCont.NoItemSprite, Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4)));
                            break;
                        default:
                            ReturnItem(eventData);
                            break;
                    }
                }
                else
                    ReturnItem(eventData);
            }
            else
                ReturnItem(eventData);
        }
        #endregion
        // Start is called before the first frame update
        void Awake()
        {
            m_InventoryCont = transform.parent.parent.parent.Find("InventorySlots").gameObject.GetComponent<InventoryController>();
            m_PlayerUIController = m_InventoryCont.transform.parent.parent.parent.gameObject.GetComponent<PlayerUIController>();
            movingSlot = transform.Find("Slot13").gameObject;
            movingSlotCont = movingSlot.GetComponent<SlotController>();
            movingSlotRectTransform = movingSlot.GetComponent<RectTransform>();
            backPackSlots = new SlotController[numSlots];
            backPackRectTransform = GetComponent<RectTransform>();
            FindBackpackSlots();
            quickSlots = new SlotController[m_InventoryCont.InventoryAmnt];
            for (int i = 0; i < m_InventoryCont.InventoryAmnt; i++)
                quickSlots[i] = transform.Find($"QuickSlots/Slot{i}").gameObject.GetComponent<SlotController>();
        }
        void OnEnable()
        {
            FindBackpackSlots();
            //Disable in-game quickslots, I didnt like having both references to quickslots enabled
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(false);
        }
        void OnDisable()
        {
            //Re-enable in-game quickslots since backpack is closed
            m_PlayerUIController.InGameQuickSlotObjs.SetActive(true);
        }
    }
}