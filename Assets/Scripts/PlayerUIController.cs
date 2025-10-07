using TMPro;
using UnityEngine;
using UnityEngine.UI;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class PlayerUIController : MonoBehaviour
    {
        #region Private Serialized Fields
        [Header("UI Transform Path(s)")]
        [SerializeField] private string playerCamPath;
        [SerializeField] private string quickSlotsPath;
        [SerializeField] private string barUIPath;
        [SerializeField] private string circleUIPath;
        [SerializeField] private string counterTextPath;
        [Header("UI Components")]
        [SerializeReference] private PlayerController playerCont;
        [SerializeField] private Image itemUI;
        [SerializeField] private Image playerHPImage;
        [SerializeField] private Image playerStaminaImage;
        [SerializeField] private GameObject backPackObj;
        [SerializeReference] private BackpackController backpackController;
        #endregion
        #region Private Fields
        private Transform circleTransform, barTransform, itemUiTransform;
        private Camera playerCam;
        private GameObject inGameQuickSlotObjs;
        private Image barImage;
        private Image circleImage;
        private Text circleText;
        private Text barText;
        private TextMeshProUGUI counterText;
        #endregion
        #region Public Members
        public void ToggleInventory()
        {
            backPackObj.SetActive(!backPackObj.activeInHierarchy && !playerCont.UsingWorkstation);
            backpackController.SyncQuickSlots(backPackObj.activeInHierarchy ? "InGameToMenu" : "MenuToInGame");
        }
        public GameObject InGameQuickSlotObjs { get { return inGameQuickSlotObjs; } }
        #endregion
        // Start is called before the first frame update
        void Awake()
        {
            playerCam = transform.Find(playerCamPath).gameObject.GetComponent<Camera>();
            inGameQuickSlotObjs = playerCam.transform.Find(quickSlotsPath).gameObject;
            playerCont = GetComponent<PlayerController>();
            circleImage = playerCam.transform.Find(circleUIPath).gameObject.GetComponent<Image>();
            barImage = playerCam.transform.Find(barUIPath).gameObject.GetComponent<Image>();
            counterText = playerCam.transform.Find(counterTextPath).gameObject.GetComponent<TextMeshProUGUI>();
            barText = playerCam.transform.Find(barUIPath).transform.parent.Find("Text").GetComponent<Text>();
            circleText = playerCam.transform.Find(circleUIPath).transform.parent.Find("Text").GetComponent<Text>();
            itemUI = playerCam.transform.Find("Canvas/itemImage").gameObject.GetComponent<Image>();
            backPackObj = transform.Find("Main Camera/Canvas/Inventory/ImageInventory").gameObject;
            playerHPImage = transform.Find("Main Camera/Canvas/Combat Attributes/HPBack/Healthbar").gameObject.GetComponent<Image>();
            playerStaminaImage = transform.Find("Main Camera/Canvas/Combat Attributes/SPBack/StaminaBar").gameObject.GetComponent<Image>();
            backPackObj.SetActive(false);
            backpackController = backPackObj.transform.Find("Backpack").gameObject.GetComponent<BackpackController>();

        }
        // Update is called once per frame
        void Update()
        {
            if (playerCont.PlayerLOS.transform != null)
            {
                switch (LayerMask.LayerToName(playerCont.PlayerLOS.transform.gameObject.layer))
                {
                    //Player sees a workstation.
                    case "workstation":
                        WorkstationController workstationCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<WorkstationController>();
                        circleTransform = playerCont.PlayerLOS.transform.Find("circleUILOC");
                        barTransform = playerCont.PlayerLOS.transform.Find("barUILOC");
                        itemUiTransform = playerCont.PlayerLOS.transform.Find("productUILOC");
                        if (circleTransform != null)
                        {
                            circleImage.gameObject.transform.parent.transform.position = playerCam.WorldToScreenPoint(circleTransform.position);
                            circleImage.fillAmount = workstationCont.CircleAmnt;
                            if (!circleImage.gameObject.transform.parent.gameObject.activeInHierarchy)
                            {
                                circleImage.gameObject.transform.parent.gameObject.SetActive(true);
                                circleText.text = workstationCont.WorkstationUIStruct.circleTitle;
                            }
                        }
                        if (barTransform != null)
                        {
                            barImage.gameObject.transform.parent.transform.position = playerCam.WorldToScreenPoint(barTransform.position);
                            barImage.fillAmount = workstationCont.BarAmnt;
                            //Toggle UI items visibility  assign Title of UI activated UI items
                            if (!barImage.gameObject.transform.parent.gameObject.activeInHierarchy)
                            {
                                barImage.gameObject.transform.parent.gameObject.SetActive(true);
                                barText.text = workstationCont.WorkstationUIStruct.barTitle;
                            }
                        }

                        if (itemUiTransform != null)
                        {
                            StockpileController stockPileCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<StockpileController>();
                            if (stockPileCont != null && (stockPileCont.CurQuantity != 0))
                            {
                                itemUI.gameObject.transform.position = playerCam.WorldToScreenPoint(playerCont.PlayerLOS.transform.Find("productUILOC").position);
                                itemUI.gameObject.SetActive(true);
                                itemUI.sprite = stockPileCont.ItemPrefab.GetComponent<ItemController>().ItemIcon;
                            }
                            else if (stockPileCont.CurQuantity == 0 && itemUI.gameObject.activeInHierarchy)
                                itemUI.gameObject.SetActive(false);
                        }
                        break;
                    //Player sees a stockpile.
                    case "stockpile":
                        StockpileController stockpileCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<StockpileController>();
                        //Assign location value and title of coresponding UI Items
                        counterText.gameObject.transform.position = playerCam.WorldToScreenPoint(playerCont.PlayerLOS.transform.Find("counterUILOC").position);
                        counterText.text = $"{stockpileCont.CurQuantity}/{stockpileCont.MaxQuantity}";
                        if (!counterText.gameObject.activeInHierarchy)
                            counterText.gameObject.SetActive(true);
                        break;
                    //PLayer sees enemy.
                    case "enemy":
                        EnemyController enemyCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<EnemyController>();
                        counterText.gameObject.transform.position = playerCam.WorldToScreenPoint(playerCont.PlayerLOS.transform.Find("counterUILOC").position);
                        counterText.text = (enemyCont.HealthCont.InstDmg==0.0f) ? "": $"{enemyCont.HealthCont.InstDmg}";
                        if (!counterText.gameObject.activeInHierarchy)
                            counterText.gameObject.SetActive(true);
                        barTransform = playerCont.PlayerLOS.transform.Find("barUILOC");
                        if (barTransform != null)
                        {
                            barImage.gameObject.transform.parent.SetPositionAndRotation(playerCam.WorldToScreenPoint(barTransform.position), barTransform.rotation);
                            barImage.fillAmount = enemyCont.HealthCont.HealthBarAmnt;
                            //Toggle UI items visibility  assign Title of UI activated UI items
                            if (!barImage.gameObject.transform.parent.gameObject.activeInHierarchy)
                            {
                                barImage.gameObject.transform.parent.gameObject.SetActive(true);
                                barText.text = enemyCont.EnemyUIStruct.barTitle;
                            }
                        }
                        break;
                    default:
                        break;
                }
            }
            else
            {
                //player sees nothing that is giving us UI prompts so make UI elements not needed invisible
                circleImage.gameObject.transform.parent.gameObject.SetActive(false);
                barImage.gameObject.transform.parent.gameObject.SetActive(false);
                counterText.gameObject.SetActive(false);
                itemUI.gameObject.SetActive(false);
            }
            playerHPImage.fillAmount = playerCont.M_HealthCont.HealthBarAmnt;
            playerStaminaImage.fillAmount = playerCont.PlayerStaminaCont.Stamina / playerCont.PlayerStaminaCont.MaxStamina;

        }
    }
}