using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ForgeController : WorkstationController
    {
        #region Private serialized members
        [Header("Forge Heating.")]
        [SerializeField] private float curTemp;
        [SerializeField] private float maxTemp;
        [SerializeField] private float fuelAmnt;
        [SerializeField] private float maxFuelAmnt;
        [SerializeField] private float burnRate;
        [Header("Forge Smelting")]
        [SerializeField] private float ttsTimer;
        [SerializeField] private float idealTTS;
        [SerializeField] private float ttsScaler;
        [Tooltip("The Struct of the item being smelted.")][SerializeField] private ItemController smeltedController;
        [Header("Forge Components")]
        [SerializeField] private Animator forgeAnimator;
        [SerializeField] private ForgePumpController forgePumpCont;
        [SerializeField] private StockpileController forgeStockPileCont;
        //[SerializeField] private GameObject 
        [Header("Ore To Bar Exchange Data")]
        [SerializeField] private string[] ores;
        [SerializeField] private GameObject[] barsPrefabs;
        #endregion
        #region Private memebers
        private int inUseHash;
        private IDictionary<string, GameObject> oresToBarsDict;
        #endregion
        #region Public Funcs
        // On/Off switch for forge where base temp for forge is defined at runtime
        public void SetForge(bool state, float temp)
        {
            InUse = state;
            forgeAnimator.SetBool(inUseHash, state);
            curTemp = temp;
        }
        #endregion
        #region Overriden Funcs
        //When turning on forge make sure conditions are met to turn on forge
        //If the Forge is On then lets toggle it Off
        public override void ToggleUse(PlayerController playerCont)
        {
            bool hasFuel = fuelAmnt > 0.0f;
            if (!InUse && hasFuel && !playerCont.HoldingItem)
                SetForge(true, maxTemp);
            else if (InUse)
                SetForge(false, 0.0f);
        }
        //Smelting Ore to Metal Bar
        public override void Work(ItemController itemController)
        {
            //Check to see if the forge is on, it's not already smelting and that it is not holding a smelted bar
            if (InUse && !DoingWork && (forgeStockPileCont.CurQuantity == 0))
            {
                smeltedController = itemController;
                //Calculate the quickest time this forge could smelt given ore
                idealTTS = (((MaxTemp + forgePumpCont.MaxBoostTemp) - smeltedController.PrefabItemStruct.meltingTemp) / smeltedController.PrefabItemStruct.meltingTemp) * ttsScaler;
                //Pass the proper data about the  soon-to-be bar to the forge so that it will gie it to the player later on
                forgeStockPileCont.ItemPrefab = oresToBarsDict[smeltedController.PrefabItemStruct.itemSubTag];
                forgeStockPileCont.ItemCont = forgeStockPileCont.ItemPrefab.GetComponent<ItemController>();
            }
        }
        public override void Refuel(float fuel)
        {
            fuelAmnt += fuel;
        }
        //Checking to see if player adding fuel will amount in more fuel than the forge can hold.
        public override void Overflow(float amount)
        {
            BarFull = (fuelAmnt + amount) > maxFuelAmnt;
        }
        #endregion 
        #region Getters/Setters
        public float CurTemp { get { return curTemp; } set { curTemp = value; } }
        public float MaxTemp { get { return maxTemp; } set { maxTemp = value; } }
        public float FuelAmnt { get { return fuelAmnt; } set { fuelAmnt = value; } }
        public float MaxFuelAmnt { get { return maxFuelAmnt; } set { maxFuelAmnt = value; } }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            forgeAnimator = GetComponent<Animator>();
            inUseHash = Animator.StringToHash("inUse");
            forgePumpCont = transform.parent.transform.Find("forge_pump").gameObject.GetComponent<ForgePumpController>();
            SetForge(false, 0.0f);
            ttsTimer = 0.0f;
            forgeStockPileCont = GetComponent<StockpileController>();
            oresToBarsDict = new Dictionary<string, GameObject>();
            foreach (string ore in ores)
                oresToBarsDict.Add(ore, barsPrefabs[Array.IndexOf(ores, ore)]);
        }
        // Update is called once per frame
        void Update()
        {
            //As the forge is in use make sure fuel is being used
            if (InUse && (fuelAmnt > 0.0f))
            {
                //Burn fuel
                fuelAmnt -= (burnRate * Time.deltaTime + (forgePumpCont.InUse ? (burnRate * Time.deltaTime) : (0.0f)));
                //If forge is not on there is no point in seeing if its smelting
                if (DoingWork && (curTemp >= smeltedController.PrefabItemStruct.meltingTemp))
                {              
                    ttsTimer += ((((curTemp - smeltedController.PrefabItemStruct.meltingTemp) / smeltedController.PrefabItemStruct.meltingTemp) * smeltedController.Refinement) * Time.deltaTime);
                    //Forge has smelted the ore, return to player appropriate bar
                    if (ttsTimer >= idealTTS) 
                    {
                        DoingWork = !forgeStockPileCont.Deposit(1, forgeStockPileCont.ItemPrefab, forgeStockPileCont.ItemCont);
                        ttsTimer = 0.0f;
                    }
                }
            }
            //Ran out of fuel
            else if (fuelAmnt <= 0.0f && InUse)
                SetForge(false, 0.0f);
            //Display current amount of fuel and temperature of forge
            CircleAmnt = 100.0f * fuelAmnt / maxFuelAmnt;
            BarAmnt = curTemp / (maxTemp + forgePumpCont.MaxBoostTemp);
        }
    }
}