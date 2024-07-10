using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange{
    public abstract class SlotsController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        #region "Private Fields"
        private RectTransform movingSlotRectTrans;
        #endregion
        #region 'Getters / Setters
        public SlotController MovingSlot{get{return movingSlot;}set{movingSlot = value;}}
        public int BackPackSlotNum{get;set;}
        public int QuickSlotsSlotNum{get;set;}
        public RectTransform MovingSlotRectTrans{get{return movingSlotRectTrans;}set{movingSlotRectTrans=value;}}
        public string OgSlotType{get;set;}
        public int OgSlotIndex{get;set;}
        #endregion
        public SlotController[] backPackSlots;
        public SlotController[] quickSlots;
        public SlotController movingSlot;
        public abstract void ReturnItem (PointerEventData eventData);
        public abstract void OnBeginDrag(PointerEventData eventData);
        public abstract void OnDrag(PointerEventData eventData);
        public abstract void OnEndDrag(PointerEventData eventData);


    }
}
