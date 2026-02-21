using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;
namespace Com.ZiomtechStudios.ForgeExchange{    
    
    public abstract class SlotsController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerUpHandler, IPointerDownHandler
    {
        #region "Private Fields"
        private RectTransform movingSlotRectTrans;
        private InventoryController inventoryCont;
        private IDictionary<string, SlotController[]> slotTypeDict;
        private float timerPointerHeldDown;
        private bool isHolding;
        private Slider subStackItemSlider;
        #endregion
        #region 'Getters / Setters
        public SlotController MovingSlot{get{return movingSlot;}set{movingSlot = value;}}
        public int BackPackSlotNum{get;set;}
        public int QuickSlotsSlotNum{get;set;}
        public RectTransform MovingSlotRectTrans{get{return movingSlotRectTrans;}set{movingSlotRectTrans=value;}}
        public InventoryController InventoryCont{get{return inventoryCont;}set{ inventoryCont = value;}}
        public IDictionary<string, SlotController[]> SlotTypeDict{get{return slotTypeDict;}set{slotTypeDict=value;}}
        public string OgSlotType{get;set;}
        public int OgSlotIndex{get;set;}
        public float TimerPointerHeldDown{get{return timerPointerHeldDown;}set{timerPointerHeldDown=value;}}
        public bool IsHolding{get{return isHolding;}set{isHolding=value;}}
        public Slider SubStackItemSlider{get{return subStackItemSlider;}set{subStackItemSlider=value;}}
        #endregion
        public SlotController[] backPackSlots;
        public SlotController[] quickSlots;
        public SlotController[] initSlots;
        public SlotController[] destSlots;
        public SlotController movingSlot;
        public Sprite NoItemSprite;
        public int initSlotNum;
        public abstract void ReturnItem (PointerEventData eventData);
        public abstract void OnBeginDrag(PointerEventData eventData);
        public abstract void OnDrag(PointerEventData eventData);
        public abstract void OnEndDrag(PointerEventData eventData);
        public abstract void OnPointerDown(PointerEventData eventData);
        public abstract void OnPointerUp(PointerEventData eventData);

    }
}
