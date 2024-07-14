using UnityEngine;
using UnityEngine.UI;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class SlotController : MonoBehaviour
    {
        #region Private Serialized Fields
        [SerializeField] private Image slotImage;
        [SerializeField] private Image itemImage;
        [SerializeField] private bool slotInUse;
        [SerializeField] private bool slotWithItem;
        [SerializeField] private GameObject slotPrefab;
        [SerializeField] private ItemController itemCont;
        [SerializeField] private string slotType;
        [SerializeField] private int curQuantity;
        [SerializeField] private int maxQuantity;
        #endregion
        #region Getters/Setters
        public bool SlotInUse { get { return slotInUse; } set { slotInUse = value; } }
        public bool SlotWithItem { get { return slotWithItem; } set { slotWithItem = value; } }
        public GameObject SlotPrefab { get { return slotPrefab; } set { slotPrefab = value; } }
        public Image SlotImage { get { return slotImage; } set { slotImage = value; } }
        public Image ItemImage { get { return itemImage; } set { itemImage = value; } }
        public ItemController ItemCont { get { return itemCont; } set { itemCont = value; } }
        public int CurQuantity { get { return curQuantity;} set { curQuantity = value; } }
        public int MaxQuantity { get { return maxQuantity;} set { maxQuantity = value; } }
        #endregion
        #region Public Funcs
        public void Awake()
        {
            slotImage = GetComponent<Image>();
            itemImage = transform.Find($"Item{transform.name.Remove(0, 4)}").gameObject.GetComponent<Image>();
        }
        #endregion
    }
}
