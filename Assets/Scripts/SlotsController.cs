using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange{
    public abstract class SlotsController : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
    {
        #region "Private Fields"
        [SerializeField] private SlotController movingSlot;
        [SerializeField] private int backPackSlotNum;
        [SerializeField] private int quickSlotsSlotNum;
        private RectTransform movingSlotRectTrans;
        private string ogSlotType;
        private int ogSlotIndex;
        private GameObject potentialItem;
        #endregion
        #region 'Getters / Setters
        public SlotController MovingSlot{get;set;}
        public int BackPackSlotNum{get;set;}
        public int QuickSlotsSlotNum{get;set;}
        public RectTransform MovingSlotRectTrans{get{return movingSlotRectTrans;}set{movingSlotRectTrans=value;}}
        public string OgSlotType{get;set;}
        public int OgSlotIndex{get;set;}
        public GameObject PotentialItem{get;set;}
        #endregion
        public SlotController[] backPackSlots;
        public SlotController[] quickSlots;
        public abstract void ReturnItem (PointerEventData eventData);
        public abstract void CloseMenu();
        public abstract void OnBeginDrag(PointerEventData eventData);
        public abstract void OnDrag(PointerEventData eventData);
        public abstract void OnEndDrag(PointerEventData eventData);


    }
}
