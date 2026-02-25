using TMPro;
using UnityEngine; 
using UnityEngine.UI;
using UnityEngine.EventSystems;
 namespace Com.ZiomtechStudios.ForgeExchange
 {
     public class SubsetStackSliderController : MonoBehaviour
     {
         #region "Serialized Fields"
         [SerializeField] private SlotController initSlot;
         [SerializeField] private SlotController destSlot;
         [SerializeField] private string smallestAmountTransform;
         [SerializeField] private string largestAmountTransform;
         [SerializeField] private string confirmButtonTransform;
         [SerializeField] private RectTransform substackSliderRectTransform;
         #endregion
         #region "Private Members"
         private PointerEventData curEventData;
         private TextMeshProUGUI smallestAmountText;
         private TextMeshProUGUI largestAmountText;
         #endregion
         #region "Getters/Setters"

         public PointerEventData CurEventData
         {
             get { return curEventData; } set { curEventData = value; }
         }

         public SlotController DestSlot
         {
             get { return destSlot; } set { destSlot = value; }
         }

         public SlotController InitSlot
         {
             get { return initSlot; } set { initSlot = value; }
         }

         #endregion
         void Start()
         {
             
         }
     void Awake()
         {
             smallestAmountText = transform.Find(smallestAmountTransform).gameObject.GetComponent<TextMeshProUGUI>();
             largestAmountText = transform.Find(largestAmountTransform).gameObject.GetComponent<TextMeshProUGUI>();
             substackSliderRectTransform = transform.Find("SubStackSliderRectTransform").GetComponent<RectTransform>();
         }
         void OnEnable()
         {
             smallestAmountText.text = $"{initSlot.CurStackQuantity - (initSlot.CurStackQuantity - 1)}";
             largestAmountText.text = $"{initSlot.CurStackQuantity-1}";
         }
     }
}
