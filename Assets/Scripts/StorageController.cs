using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange{
    public abstract class StorageController : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer m_SpriteRend;
        [SerializeField] private int curQuantity;
        [SerializeField] private int maxQuantity;
        [SerializeField] private bool isEmpty;
        [SerializeField] private int ogSlotIndex;
        [SerializeField] private string ogSlotType;
        public bool IsEmpty { get { return isEmpty; } set { isEmpty = value; } }
        public int CurQuantity { get { return curQuantity;} set { curQuantity = value; } }
        public int MaxQuantity { get { return maxQuantity;} set{maxQuantity = value;}}
        public SpriteRenderer M_SpriteRend{get { return m_SpriteRend;} set { m_SpriteRend = value;}}
        public int OgSlotIndex { get{return ogSlotIndex;} set{ogSlotIndex=value;}}
        public string OgSlotType { get{return ogSlotType;} set{ogSlotType=value;}}
    }
}