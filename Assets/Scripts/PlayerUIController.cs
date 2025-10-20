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
        [SerializeField] private string itemUIPath;
        [SerializeField] private string mainZoneImagePath;
        [SerializeField] private string goodZoneImagePath;
        [SerializeField] private string curZoneImagePath;
        [SerializeField] private RectTransform curZoneRectTransform;
        [SerializeField] private RectTransform goodZoneRectTransform;
        [SerializeField] private RectTransform mainZoneRectTransform;
        [Header("UI Components")]
        [SerializeReference] private PlayerController playerCont;
        [SerializeField] private Image itemUI;
        [SerializeField] private Image playerHPImage;
        [SerializeField] private Image playerStaminaImage;
        [SerializeField] private GameObject backPackObj;
        [SerializeReference] private BackpackController backpackController;
        [Header("Fishing Mini-Game UI elements")] 
        [SerializeField] private Image mainZoneImage;
        [SerializeField] private Image goodZoneImage;
        [SerializeField] private Image curZoneImage;
        [SerializeField] private PlayerUIStruct fishingUIStruct;
        [Tooltip("Minimum time the good zone bar for fishing mini-game can oscillate.")] [SerializeField] private float minTTO;
        [Tooltip("Maximum time the good zone bar for fishing mini-game can oscillate.")] [SerializeField] private float maxTTO;
        [Tooltip("The maximum speed the good zone bar can oscillate at, this value applies to both directions along x-axis.")] [SerializeField] private float maxOscillationSpeed;
        [SerializeField] private float oscillationTimer;
        #endregion
        #region Getters/Setters
        public Image CurZoneImage => curZoneImage;
        public RectTransform CurZoneRectTransform => curZoneRectTransform;
        public RectTransform GoodZoneRectTransform => goodZoneRectTransform;
        #endregion
        #region Private Fields
        private Transform circleTransform, barTransform, itemUiTransform, fishingUITransform;
        private Camera playerCam;
        private GameObject inGameQuickSlotObjs;
        private Image barImage;
        private Image circleImage;
        private Text circleText;
        private Text barText;
        private TextMeshProUGUI counterText;
        private Vector3[] goodZoneCorners = new Vector3[4];
        private float timeToOscillate;
        private Vector2 randomDir;
        private bool isAcceptableOscillation;
        private bool isFullyOscillated;
        #endregion
        #region Public Members
        public void ToggleInventory()
        {
            backPackObj.SetActive(!backPackObj.activeInHierarchy && !playerCont.UsingWorkstation);
            backpackController.SyncQuickSlots(backPackObj.activeInHierarchy ? "InGameToMenu" : "MenuToInGame");
        }
        public void OscilateGoodZone()
        {
            //TODO Implementing Challenge for the player's fishing mini-game.
            ///<Summary>
            /// Oscilate the zone of good tension back and forth across the RectZone of the parent gameobject (background).
            ///Rect Transform of the curZone at all times must be such that the corners of CurZon Rect Transform are Contained by
            ///the RectTransform of the background.
            /// </summary>
            isFullyOscillated = oscillationTimer >= timeToOscillate;
            RandomizeOscillationDir();
            Debug.Log(isAcceptableOscillation);
            if (!isFullyOscillated)
            {
                oscillationTimer += Time.deltaTime;
                if (isAcceptableOscillation)
                    GoodZoneRectTransform.Translate(randomDir);
                else if(!isAcceptableOscillation)
                    RandomizeOscillationDir();
            }
            else
            {
                oscillationTimer = 0.0f;
                timeToOscillate = Random.Range(minTTO, maxTTO);
            }
        }
        public GameObject InGameQuickSlotObjs { get { return inGameQuickSlotObjs; } }
        #endregion
        #region Private Functions

        private void RandomizeOscillationDir()
        {
            goodZoneRectTransform.GetWorldCorners(goodZoneCorners);
            randomDir = (isFullyOscillated ? randomDir : new Vector2(Random.Range(-maxOscillationSpeed, maxOscillationSpeed), 0.0f));
            isAcceptableOscillation = mainZoneRectTransform.rect.Contains(goodZoneCorners[0] + (Vector3)randomDir) &&
                                           mainZoneRectTransform.rect.Contains(goodZoneCorners[1] + (Vector3)randomDir) &&
                                           mainZoneRectTransform.rect.Contains(goodZoneCorners[2] + (Vector3)randomDir) &&
                                           mainZoneRectTransform.rect.Contains(goodZoneCorners[3] + (Vector3)randomDir);
        }
        private void ClearUnwantedUI()
        {
            //player sees nothing that is giving us UI prompts so make UI elements not needed invisible
            circleImage.gameObject.transform.parent.gameObject.SetActive(false);
            barImage.gameObject.transform.parent.gameObject.SetActive(false);
            counterText.gameObject.SetActive(false);
            itemUI.gameObject.SetActive(false);
            mainZoneImage.gameObject.transform.parent.gameObject.SetActive(false);
        }
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
            itemUI = playerCam.transform.Find(itemUIPath).gameObject.GetComponent<Image>();
            backPackObj = transform.Find("Main Camera/Canvas/Inventory/ImageInventory").gameObject;
            playerHPImage = transform.Find("Main Camera/Canvas/Combat Attributes/HPBack/Healthbar").gameObject.GetComponent<Image>();
            playerStaminaImage = transform.Find("Main Camera/Canvas/Combat Attributes/SPBack/StaminaBar").gameObject.GetComponent<Image>();
            backPackObj.SetActive(false);
            backpackController = backPackObj.transform.Find("Backpack").gameObject.GetComponent<BackpackController>();
            mainZoneImage = transform.Find(mainZoneImagePath).gameObject.GetComponent<Image>();
            mainZoneRectTransform = mainZoneImage.gameObject.GetComponent<RectTransform>();
            curZoneRectTransform = transform.Find(curZoneImagePath).gameObject.GetComponent<RectTransform>();
            goodZoneImage = transform.Find(goodZoneImagePath).gameObject.GetComponent<Image>();
            goodZoneRectTransform = goodZoneImage.gameObject.GetComponent<RectTransform>();
            curZoneImage = curZoneRectTransform.gameObject.GetComponent<Image>();
            mainZoneImage.gameObject.transform.parent.gameObject.SetActive(false);
            goodZoneRectTransform.GetWorldCorners(goodZoneCorners);
            timeToOscillate = Random.Range(minTTO, maxTTO);
        }
        // Update is called once per frame
        void Update()
        {
            if (playerCont.PlayerLOS.transform)
            {
                switch (LayerMask.LayerToName(playerCont.PlayerLOS.transform.gameObject.layer))
                {
                    //Player sees a workstation.
                    case "workstation":
                        WorkstationController workstationCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<WorkstationController>();
                        circleTransform = playerCont.PlayerLOS.transform.Find("circleUILOC");
                        barTransform = playerCont.PlayerLOS.transform.Find("barUILOC");
                        itemUiTransform = playerCont.PlayerLOS.transform.Find("productUILOC");
                        if (circleTransform)
                        {
                            circleImage.gameObject.transform.parent.transform.position = playerCam.WorldToScreenPoint(circleTransform.position);
                            circleImage.fillAmount = workstationCont.CircleAmnt;
                            if (!circleImage.gameObject.transform.parent.gameObject.activeInHierarchy)
                            {
                                circleImage.gameObject.transform.parent.gameObject.SetActive(true);
                                circleText.text = workstationCont.WorkstationUIStruct.circleTitle;
                            }
                        }

                        if (barTransform)
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

                        if (itemUiTransform)
                        {
                            StockpileController stockPileCont = playerCont.PlayerLOS.transform.gameObject.GetComponent<StockpileController>();
                            if (stockPileCont && (stockPileCont.CurQuantity != 0))
                            {
                                itemUI.gameObject.transform.position = playerCam.WorldToScreenPoint(playerCont.PlayerLOS.transform.Find("productUILOC").position);
                                itemUI.gameObject.SetActive(true);
                                itemUI.sprite = stockPileCont.ItemCont.ItemIcon;
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
                        counterText.text = (enemyCont.HealthCont.InstDmg == 0.0f) ? "" : $"{enemyCont.HealthCont.InstDmg}";
                        if (!counterText.gameObject.activeInHierarchy)
                            counterText.gameObject.SetActive(true);
                        barTransform = playerCont.PlayerLOS.transform.Find("barUILOC");
                        if (barTransform)
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
                    case "bounds":
                        bool isReelingFish = playerCont.IsFishing && playerCont.PlayerInteractionCont.PlayerFishingCont.FishingRodCont.HasBite && playerCont.PlayerLOS.transform.CompareTag(("water"));
                        if (isReelingFish && !mainZoneImage.gameObject.transform.parent.gameObject.activeInHierarchy)
                        {
                            fishingUITransform = playerCont.transform.Find("HoldingItem").GetChild(0).Find("FishingUILOC");
                            mainZoneImage.gameObject.transform.position = playerCam.WorldToScreenPoint(fishingUITransform.position);
                            mainZoneImage.gameObject.transform.parent.gameObject.SetActive(true);
                        }
                        else if(playerCont.PlayerInteractionCont.PlayerFishingCont.IsFullyReeledIn)
                        {
                            mainZoneImage.gameObject.transform.parent.gameObject.SetActive(false);
                            curZoneRectTransform.SetLocalPositionAndRotation(Vector3.zero, Quaternion.identity);
                            goodZoneRectTransform.SetLocalPositionAndRotation(Vector3.zero, Quaternion.identity);
                        }
                        break;
                    default:
                        break;
                }
            }
            else
                ClearUnwantedUI();
            playerHPImage.fillAmount = playerCont.M_HealthCont.HealthBarAmnt;
            playerStaminaImage.fillAmount = playerCont.PlayerStaminaCont.Stamina / playerCont.PlayerStaminaCont.MaxStamina;
        }
    }
}