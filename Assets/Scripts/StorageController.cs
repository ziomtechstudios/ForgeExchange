using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public  abstract class StorageController : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer m_SpriteRend;
        [SerializeField] private int curQuantity;
        [SerializeField] private int maxQuantity;
        [SerializeField] private bool isEmpty;
        [SerializeField] private SlotController[] storageSlots;
        public bool IsEmpty { get { return isEmpty; } set { isEmpty = value; } }
        public SpriteRenderer M_SpriteRend{get { return m_SpriteRend;} set { m_SpriteRend = value;}}

        public int CurQuantity { get { return curQuantity;} set { curQuantity = value; } }
        public int MaxQuantity { get { return maxQuantity;} set { maxQuantity = value; } }
        
    }
}