using System;
using System.Collections.Generic;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public class CraftTableController : WorkstationController
    {
        #region Serialized Fields
        //[SerializeField] private Animator m_Animator;
        [SerializeField] private GameObject craftMenuObj;
        [SerializeField] private string[] Recipes;
        [SerializeField] private int numRecipes;
        [SerializeField] private GameObject[] craftableItems;
        [SerializeField] private ItemController craftedCont;
        [SerializeField] private CraftingMenuController craftingMenuController;
        [SerializeField] private StockpileController stockpileController;
        [SerializeField] IDictionary<string, GameObject> craftedItemsDict;
        #endregion
        #region Private Fields/Members
        private int inUseHash;
        #endregion
        #region "Getters/Setters"
        public StockpileController StockpileCont{get{return stockpileController;}}
        //public bool InUseHash{get{ return m_Animator.GetBool(inUseHash); } set { m_Animator.SetBool(inUseHash, value); } }
        public IDictionary<string, GameObject> CraftedItemDict { get { return craftedItemsDict; } }
        #endregion
        #region Public Members
        public override void ToggleUse(PlayerController playerCont)
        {
            craftMenuObj.SetActive(!craftMenuObj.activeInHierarchy);
            if (craftMenuObj.activeInHierarchy)
                craftingMenuController.SyncCraftingMenuSlots(playerCont);
            else
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
        }
        public void CloseMenu()
        {
            craftMenuObj.SetActive(false);
        }
        public override void Work(ItemController itemCont)
        {
            //InUse = (itemCont != null);
            stockpileController.Deposit(1, itemCont.gameObject, itemCont);
        }
        #endregion
        #region "Event Functions"
        // Start is called before the first frame update
        void Awake(){
            //m_Animator = transform.Find("Tools").transform.gameObject.GetComponent<Animator>();
            inUseHash = Animator.StringToHash("InUse");
            craftMenuObj = transform.Find("Canvas/CraftingMenu").gameObject;
            //Recipes = new string[numRecipes];
            //craftableItems = new GameObject[numRecipes];
            craftedItemsDict = new Dictionary<string, GameObject>();
            DoingWork = false;
            foreach (string recipe in Recipes)
                craftedItemsDict.Add(recipe, craftableItems[Array.IndexOf(Recipes, recipe)]);
            craftingMenuController = transform.Find("Canvas/CraftingMenu").gameObject.GetComponent<CraftingMenuController>();
            stockpileController = GetComponent<StockpileController>();
        }
        #endregion
    }
}
