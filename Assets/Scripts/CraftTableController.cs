using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftTableController : WorkstationController
    {
        #region Serialized Fields
        //[SerializeField] private Animator m_Animator;
        [SerializeField] private GameObject craftMenuObj;
        [Tooltip("The array that represents the proper sequences of crafting ingredients to bring about a craftable item.")][SerializeField] private string[] Recipes;
        [SerializeField] private int numRecipes;
        [Tooltip("The array of possible items that can be crafted.")][SerializeField] private GameObject[] craftableItems;
        [SerializeField] private CraftingMenuController craftingMenuController;
        [SerializeField] private StockpileController stockpileController;
        [Tooltip("For every craftable item there is coressponding recipe(s).")][SerializeField] private IDictionary<string, GameObject> craftedItemsDict;
        #endregion
        #region Private Fields/Members
        private int inUseHash;
        #endregion
        #region "Getters/Setters"
        public StockpileController StockpileCont { get { return stockpileController; } }
        //public bool InUseHash{get{ return m_Animator.GetBool(inUseHash); } set { m_Animator.SetBool(inUseHash, value); } }
        public IDictionary<string, GameObject> CraftedItemDict { get { return craftedItemsDict; } }
        #endregion
        #region Public Members
        public override void ToggleUse(PlayerController playerCont)
        {
            //Craft table is in use and craft menu is open, now we are goping to close it
            if (craftMenuObj.activeInHierarchy)
            {
                //Closing crafting menu
                craftMenuObj.SetActive(false);
                //Make contents of in game slots match how it was oriented in crafting slot
                //Doing the same to Backpack slots since we can rearange contents of backpack within crafting table
                SynchronizeSlots.SyncSlots(playerCont.PlayerBackPackCont.backPackSlots, craftingMenuController.backPackSlots);
                SynchronizeSlots.SyncSlots(playerCont.PlayerInventoryCont.SlotConts, craftingMenuController.quickSlots);
                //Reveal in-game quickslots, set status of using workstation flse so we can move
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
                playerCont.UsingWorkstation = false;
                InUse = false;
            }
            //Craft Menu is closed so open it so the player can use it
            else
            {
                //open crafting menu
                craftMenuObj.SetActive(true);
                //synchronizing backpackslots + quickslots in the crasfting menu to match contents in respective counterparts
                craftingMenuController.SyncCraftingMenuSlots(playerCont);
                playerCont.UsingWorkstation = true;
                //Hide in-game quick slots
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(false);
                InUse = true;
            }
        }
        public override void Work(ItemController itemCont)
        {
            if(InUse){
                stockpileController.Deposit(1, itemCont.gameObject, itemCont);
            }
        }
        #endregion
        #region "Event Functions"
        // Start is called before the first frame update
        void Awake()
        {
            inUseHash = Animator.StringToHash("InUse");
            craftMenuObj = transform.Find("Canvas/CraftingMenu").gameObject;
            craftedItemsDict = new Dictionary<string, GameObject>();
            DoingWork = false;
            //Occupying Crafting Table Dictionary with recipe(s) and their respective products
            foreach (string recipe in Recipes)
                craftedItemsDict.Add(recipe, craftableItems[Array.IndexOf(Recipes, recipe)]);
            craftingMenuController = transform.Find("Canvas/CraftingMenu").gameObject.GetComponent<CraftingMenuController>();
            stockpileController = GetComponent<StockpileController>();
        }
        #endregion
    }
}
