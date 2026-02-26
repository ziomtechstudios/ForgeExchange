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
         [SerializeField] private SlotController movingSlot;
         [SerializeField] private string smallestAmountTransform;
         [SerializeField] private string largestAmountTransform;
         [SerializeField] private string currentAmountTransform;
         [SerializeField] private RectTransform substackSliderRectTransform;
         #endregion
         #region "Private Members"
         private PointerEventData curEventData;
         private TextMeshProUGUI smallestAmountText;
         private TextMeshProUGUI largestAmountText;
         private TextMeshProUGUI currentAmountText;
         private Slider subStackSlider;
         #endregion
         #region "Getters/Setters"
         public PointerEventData CurEventData { get { return curEventData; } set { curEventData = value; } }
         public SlotController DestSlot { get { return destSlot; } set { destSlot = value; } }
         public SlotController InitSlot { get { return initSlot; } set { initSlot = value; } }
         public SlotController MovingSlot { get { return movingSlot; } set { movingSlot = value; } }
         #endregion

         public void UpdateSliderHandleAmmount()
         {
             currentAmountText.text = $"{Mathf.CeilToInt(subStackSlider.value*(destSlot.CurStackQuantity - 1))+((subStackSlider.value!=0.0f)?0:1)} ";
         }
         void Start()
         {
             substackSliderRectTransform = transform.GetComponent<RectTransform>();
         }
         void Awake()
         {
             subStackSlider = transform.GetComponent<Slider>();
             smallestAmountText = transform.Find(smallestAmountTransform).gameObject.GetComponent<TextMeshProUGUI>();
             largestAmountText = transform.Find(largestAmountTransform).gameObject.GetComponent<TextMeshProUGUI>();
             currentAmountText = transform.Find(currentAmountTransform).gameObject.GetComponent<TextMeshProUGUI>();
             
         }
         void OnEnable()
         {
             substackSliderRectTransform.position = destSlot.SubStackSliderRectTransform.position;
             smallestAmountText.text = $"{movingSlot.CurStackQuantity - (movingSlot.CurStackQuantity - 1)}";
             largestAmountText.text = $"{movingSlot.CurStackQuantity-((movingSlot.CurStackQuantity > 2)?1:0)}";
             currentAmountText.text = $"{Mathf.CeilToInt(subStackSlider.value*(destSlot.CurStackQuantity - 1))+((subStackSlider.value!=0.0f)?0:1)}";
         }
     }
}
