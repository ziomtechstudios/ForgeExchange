using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class CraftingMenuController : SlotsController
    {
        #region "Private Serialized Fields"
        [SerializeField] private CraftTableController craftTableCont;
        [Header("Slots in crafting menu.")]
        [SerializeField] private SlotController[] craftingSlots;
        [SerializeField] private SlotController[] craftedSlot;
        [SerializeField] private int craftedSlotNum;
        [Header("Members for crafting")]
        [SerializeField] private string currentRecipe;
        [Header("Current User component(s).")]
        [SerializeField] private PlayerController currentUserController;
        [SerializeField] private (GameObject, ItemController) potentialItem;
        [SerializeField] private int smallestIngredientStack;
        #endregion
        #region "Private Funcs/Members
        private RectTransform craftMenuRectTrans;
        private void AttemptCrafting()
        {
            smallestIngredientStack = 64;
            //Reevaluating current ingredients the user has deposited into the crafting table.
            foreach (SlotController ingredient in craftingSlots)
            {
                if(ingredient.CurStackQuantity > 0)
                    smallestIngredientStack = (ingredient.CurStackQuantity < smallestIngredientStack) ? ingredient.CurStackQuantity : smallestIngredientStack;
                currentRecipe += ingredient.SlotWithItem ? ingredient.ItemCont.PrefabItemStruct.itemSubTag + ingredient.ItemCont.PrefabItemStruct.craftingTag : "_";
            }

            //Check to make sure that we have a recipe and that the recipe corresponds to an actual recipe we hold in our dictionary
            if (currentRecipe != "" && craftTableCont.CraftedItemDict.TryGetValue(currentRecipe, out potentialItem))
            { 
                //The player has used a valid recipe so we make sure the crafted item slot is populated with the correct item.
                craftedSlot[0].ItemCont = potentialItem.Item2;
                //If the smallest stack of an ingredient is bigger than the maximum stack size of the final product.
                //We need to truncate the size of stack of items to be crafted so it does not exceed the max of its item type.
                smallestIngredientStack = (smallestIngredientStack < craftedSlot[0].ItemCont.MaxStackQuantity)? smallestIngredientStack : craftedSlot[0].ItemCont.MaxStackQuantity;
                craftedSlot[0].ItemImage.sprite = (potentialItem.Item1) ? craftedSlot[0].ItemCont.ItemIcon : NoItemSprite;
                craftedSlot[0].SlotPrefab = potentialItem.Item1;
                craftedSlot[0].SlotWithItem = true;
                craftedSlot[0].CurStackQuantity = smallestIngredientStack;
                craftTableCont.Work(craftedSlot[0].ItemCont);
            }
            else{
                //The recipe was not a valid one so we make sure the slot for a crafted item remains blank.
                craftedSlot[0].ItemImage.sprite = NoItemSprite;
                craftedSlot[0].SlotPrefab = null;
                craftedSlot[0].SlotWithItem = false;
                craftedSlot[0].ItemCont = null;
                potentialItem = (null, null);
                craftedSlot[0].CurStackQuantity = 0;
                craftTableCont.StockpileCont.Withdraw(1);
            }
            currentRecipe = "";
        }
        #endregion
        #region Getters/Setters
        public string CurrentRecipe { get { return currentRecipe; } }
        #endregion
        #region "Public Functions/Members"

        public override void ReturnItem(PointerEventData eventData)
        {
            DragAndDropSlot.DropItem(MovingSlot, initSlots, NoItemSprite, initSlotNum);
        }

        public void CloseMenu()
        {
            craftTableCont.ToggleUse(currentUserController);
        }
        public void SyncCraftingMenuSlots(PlayerController playerCont)
        {
            SynchronizeSlots.SyncSlots(backPackSlots,playerCont.PlayerBackPackCont.backPackSlots);
            SynchronizeSlots.SyncSlots(quickSlots, playerCont.PlayerInventoryCont.SlotConts);
            currentUserController = playerCont;
        }
        public override void OnBeginDrag(PointerEventData eventData)
        {
            // Making sure the press point is not on blank space.
            // Are we sure that what we are dragging from is a slot?
            // THe slot that we are dragging from, does it have an item?
            // Making sure the slot we are dragging from belongs to a group from our dictionary of slot types.
            if (eventData.pointerPressRaycast.gameObject != null && !eventData.pointerPressRaycast.gameObject.transform.parent.name.Contains("Canvas") && eventData.pointerPressRaycast.gameObject.transform.parent.gameObject.GetComponent<SlotController>().SlotWithItem && SlotTypeDict.TryGetValue(eventData.pointerPressRaycast.gameObject.transform.parent.parent.name, out initSlots))
            {
                initSlotNum = DragAndDropSlot.GetSlotNum(eventData);
                DragAndDropSlot.SelectItem(eventData, MovingSlot, initSlots, NoItemSprite, this);
                //Based on the type of slot it is pass relevant parameters
                switch (eventData.pointerPressRaycast.gameObject.transform.parent.parent.name)
                {
                    case ("CraftingSlots"):
                            AttemptCrafting();
                            break;
                    case ("CraftingMenu"):
                        //If we are dragging an item from the crafted slot, the player has chosen to craft the item.
                        //Therefor we will empty the contents of the crafting table.
                        //Item will be moved from craftedSlot to moving slot.
                        if (!craftedSlot[0].SlotWithItem && movingSlot.SlotWithItem)
                        {
                            foreach (SlotController ingredient in craftingSlots)
                            {
                                ingredient.CurStackQuantity-= smallestIngredientStack;
                                bool stillStack = ingredient.CurStackQuantity > 0;
                                DragAndDropSlot.UpdateSlotCounterText(ingredient);
                                ingredient.ItemImage.sprite = stillStack ? ingredient.ItemCont.ItemIcon : NoItemSprite;
                                ingredient.SlotPrefab = stillStack ? ingredient.SlotPrefab : null;
                                ingredient.SlotWithItem = stillStack;
                                ingredient.ItemCont = stillStack ? ingredient.ItemCont : null;
                            }
                            currentRecipe = "";
                        }
                        //DragAndDropSlot.SelectItem(eventData, MovingSlot, craftedSlot, NoItemSprite, this);
                        craftTableCont.StockpileCont.Withdraw(1);
                        break;
                }
            }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            DragAndDropSlot.MoveItem(eventData, craftMenuRectTrans, MovingSlotRectTrans);
        }
        public override void  OnEndDrag(PointerEventData eventData)
        {
            
            //The players finger has stopped dragging onto a slot.
            //Making sure the destination slot is an appropriate destination.
            //The player has an item in the moving slot.
            //Making sure the slot we are dropping onto belongs to a group from our dictionary of slot types.
            if (eventData.pointerCurrentRaycast.gameObject != null && eventData.pointerCurrentRaycast.gameObject.CompareTag("Slot") && MovingSlot.SlotWithItem && MovingSlot.SlotPrefab != null && SlotTypeDict.TryGetValue(eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name, out destSlots)  )
            {
                // Position of the targeted slot
                int slotNum = Int32.Parse(eventData.pointerCurrentRaycast.gameObject.transform.parent.name.Remove(0, 4));
                switch (eventData.pointerCurrentRaycast.gameObject.transform.parent.parent.name)
                {
                    //The player is trying to drag an item onto the slot designed for crafted items, we do not want to let them do that.
                    case "CraftingMenu":
                        ReturnItem(eventData);
                        break;
                    //THe player has placed an item onto a slot for the ingredients of a craftable item.
                    //Once they do we want to generate our recipe and see if it is in the dictionary of craftable items.
                    case "CraftingSlots":
                        DragAndDropSlot.SwapDropItem(MovingSlot, destSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        AttemptCrafting();
                        break;
                    //THe player has moved an item to a Backpack or quick-slot so we do or usual moving/swapping logic.
                    default:
                        DragAndDropSlot.SwapDropItem(MovingSlot, destSlots, NoItemSprite, slotNum, initSlots, initSlotNum);
                        break;
                }
            }
            //The player is trying to place the item in an inappropriate area so we will just return it back to its original spot.
            else 
                ReturnItem(eventData);
        }

        void Update()
        {
            //The current recipe is set to "" after an item is crafted so we will check to see if ingredients remain and another item can be crafted.
            if(currentRecipe == "") 
                AttemptCrafting();
        }
        
        #endregion

        void Start()
        {
            craftMenuRectTrans = gameObject.GetComponent<RectTransform>();
            MovingSlotRectTrans = transform.Find("Slot13").gameObject.GetComponent<RectTransform>();
            craftedSlot = new SlotController[1];
            craftedSlot[0] = transform.Find("Slot0").gameObject.GetComponent<SlotController>();
            MovingSlot = transform.Find("Slot13").gameObject.GetComponent<SlotController>();
            craftingSlots = new SlotController[craftedSlotNum];
            for (int i = 0; i < craftingSlots.Length; i++)
                craftingSlots[i] = transform.Find($"CraftingSlots/Slot{i}").gameObject.GetComponent<SlotController>();
            SlotTypeDict = new Dictionary<string, SlotController[]>();
            SlotTypeDict.Add("BackpackSlots", backPackSlots);
            SlotTypeDict.Add("QuickSlots", quickSlots);
            SlotTypeDict.Add("CraftingSlots", craftingSlots);
            SlotTypeDict.Add("CraftingMenu", craftedSlot);
            currentRecipe = null;
        }

        void OnEnable()
        {
            currentRecipe = null;
        }
    }
}