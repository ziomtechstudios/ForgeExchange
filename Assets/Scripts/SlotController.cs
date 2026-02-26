using JetBrains.Annotations;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


namespace Com.ZiomtechStudios.ForgeExchange
{
    public class SlotController : QuickSlotController
    {
        #region Private Serialized Fields
        [SerializeField] private RectTransform subStackSliderRectTransform;
        #endregion
        #region Getters/Setters
        public RectTransform SubStackSliderRectTransform { get { return subStackSliderRectTransform; } set { subStackSliderRectTransform = value; } }
        #endregion
        #region Public Funcs
        public void Start()
        {
            SlotImage = GetComponent<Image>();
            ItemImage = transform.Find($"Item{transform.name.Remove(0, 4)}").gameObject.GetComponent<Image>();
            CounterTMPro = transform.Find("CurQuantityText").gameObject.GetComponent<TextMeshProUGUI>();
            subStackSliderRectTransform = transform.Find("SubStackSliderRectTransform").GetComponent<RectTransform>();
        }
        #endregion
    }
}
