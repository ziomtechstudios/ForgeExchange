using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
namespace Com.ZiomtechStudios.ForgeExchange{
    public  class StorageController : SlotsController
    {
        [SerializeField] private SpriteRenderer m_SpriteRend;
        [SerializeField] private int curQuantity;
        [SerializeField] private int maxQuantity;
        [SerializeField] private bool isEmpty;

        public bool IsEmpty { get { return isEmpty; } set { isEmpty = value; } }
        public int CurQuantity { get { return curQuantity;} set { curQuantity = value; } }
        public int MaxQuantity { get { return maxQuantity;} set{maxQuantity = value;}}
        public SpriteRenderer M_SpriteRend{get { return m_SpriteRend;} set { m_SpriteRend = value;}}

        public override void ReturnItem (PointerEventData eventData){

        }
        public override void OnBeginDrag(PointerEventData eventData){

        }
        public override void OnDrag(PointerEventData eventData){

        }
        public override void OnEndDrag(PointerEventData eventData)
        {
            
        }

    }

}