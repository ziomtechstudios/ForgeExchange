using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftTableController : WorkstationController
    {
        #region private Serialized + Non Fields
        //[SerializeField] private Animator m_Animator;
        [SerializeField] private GameObject craftMenuObj;
        [Tooltip("The array that represents the proper sequences of crafting ingredients to bring about a craftable item.")][SerializeField] private string[] Recipes;
        //[Tooltip("The array of possible items that can be crafted. Used to create GameObject and ItemController tuple.")][SerializeField] private GameObject[] craftableItems;
        //[Tooltip("The array of possible item controllers used by the crafted items. Used to create GameObject and ItemController tuple.")][SerializeField] private ItemController[] craftedItemConts;
        //[Tooltip("The tuple that binds crafted Item prefabs with a reference to their item controllers.")] private List<(GameObject, ItemController)> craftedItemTupleList;
        [SerializeField] private CraftingMenuController craftingMenuController;
        [SerializeField] private StockpileController stockpileController;
        [Tooltip("Crafting table recipe provides us .")] private IDictionary<string, Sprite> craftedItemsDict;

        [SerializeField] private Sprite[]  craftedItemSprites;
        
        #endregion
        #region Private Fields/Members
        private int inUseHash;
        #endregion
        #region "Getters/Setters"
        public StockpileController StockpileCont { get { return stockpileController; } }
        public CraftingMenuController CraftingMenuCont { get { return craftingMenuController; } }
        //public bool InUseHash{get{ return m_Animator.GetBool(inUseHash); } set { m_Animator.SetBool(inUseHash, value); } }
        public IDictionary<string, Sprite> CraftedItemDict { get { return craftedItemsDict; } }
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
                //Reveal in-game quick-slots, set status of using workstation flse so we can move
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(true);
                playerCont.UsingWorkstation = false;
                InUse = false;
            }
            //Craft Menu is closed so open it so the player can use it
            else
            {
                //open crafting menu
                craftMenuObj.SetActive(true);
                //synchronizing backpackslots + quickslots in the crafting menu to match contents in respective counterparts
                craftingMenuController.SyncCraftingMenuSlots(playerCont);
                playerCont.UsingWorkstation = true;
                //Hide in-game quick slots
                playerCont.PlayerUICont.InGameQuickSlotObjs.SetActive(false);
                InUse = true;
            }
        }
        public override void Work((GameObject, ItemController) craftedTuple)
        {
            if(InUse)
                stockpileController.Deposit(1, craftedTuple);
        }
        #endregion
        #region "Event Functions"
        // Start is called before the first frame update
        void Awake()
        {
            inUseHash = Animator.StringToHash("InUse");
 
            craftedItemsDict = new Dictionary<string, Sprite>();
            DoingWork = false;
            for (int i = 0; i < Recipes.Length; i++)
                craftedItemsDict.Add(Recipes[i], craftedItemSprites[i]);
            stockpileController = GetComponent<StockpileController>();
        }

        void Start()
        {
            craftMenuObj = transform.Find("Canvas/CraftingMenu").gameObject;
            craftingMenuController = transform.Find("Canvas/CraftingMenu").gameObject.GetComponent<CraftingMenuController>();
        }
        #endregion
    }
}
