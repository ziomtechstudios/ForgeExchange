using System;
using UnityEngine;
using UnityEngine.EventSystems;
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
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("Backpack"):
                        DragAndDropSlot.SelectItem(eventData, movingSlot, backPackSlots, InventoryCont.NoItemSprite, this);
                        break;
                    case ("QuickSlots"):
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
        /// <summary>
        /// Moving slot is at destination
        /// Check to see if destination has a slot and if that slot is not being used
        /// If there is an empty slot remove item from moving slot and insert into destination slot
        /// if no empty slot send the item back into its original slot
        /// </summary>
        public override void OnEndDrag(PointerEventData eventData)
        {
               //Finger released over UI element                         //finger currently over UI element that is part of Backpack UI                   Player was moving an item                          Making sure the slot we are slotting an item into does not have an item into it already.
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Backpack") && movingSlot.SlotWithItem && movingSlot.SlotPrefab != null && !eventData.pointerCurrentRaycast.gameObject.transform.parent.GetComponent<SlotController>().SlotWithItem)
            {
                //THe position of the slot the player has dragged an item to.
                int slotNum = Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("Backpack"):
                        DragAndDropSlot.DropItem(movingSlot, backPackSlots, InventoryCont.NoItemSprite, slotNum);
                        break;
                    case ("QuickSlots"):
                        DragAndDropSlot.DropItem(movingSlot, quickSlots, InventoryCont.NoItemSprite, slotNum);
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
        void Awake()
        {
            InventoryCont = transform.parent.parent.parent.Find("InventorySlots").gameObject.GetComponent<InventoryController>();
            m_PlayerUIController = InventoryCont.transform.parent.parent.parent.gameObject.GetComponent<PlayerUIController>();
            movingSlot = MovingSlot.gameObject.GetComponent<SlotController>();
            MovingSlotRectTrans = MovingSlot.gameObject.GetComponent<RectTransform>();
            backPackRectTransform = GetComponent<RectTransform>();
        }
        void OnEnable()
        {
            //Disable in-game quickslots, I didnt like having both references to quickslots enabled
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