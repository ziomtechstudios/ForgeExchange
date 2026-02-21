using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


 namespace Com.ZiomtechStudios.ForgeExchange
 {
     public class SubsetStackSliderController : MonoBehaviour
     {
         [SerializeField] private SlotController initSlot;
         [SerializeField] private SlotController destSlot;
         [SerializeField] private Slider SubStackSlider;
         private PointerEventData curEventData;
         private TextMeshProUGUI smallestAmountText;
         private TextMeshProUGUI largestAmountText;
         
         public PointerEventData CurEventData { get; set; }
         public SlotController DestSlot { get; set; }
         public SlotController InitSlot { get { return initSlot;} set { initSlot = value; } }

         void Start()
         {
             SubStackSlider = GetComponent<Slider>();
             smallestAmountText = transform.Find("SmallestAmntText").gameObject.GetComponent<TextMeshProUGUI>();
             largestAmountText = transform.Find("LargestAmntText").gameObject.GetComponent<TextMeshProUGUI>();
         }
         void OnEnable()
         {
             smallestAmountText.text = $"{initSlot.CurStackQuantity - (initSlot.CurStackQuantity - 1)}";
             largestAmountText.text = $"{initSlot.CurStackQuantity-1}";
         }
     }
 }
