using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(BoxCollider2D))]
    public class StockpileController : StorageController
    {
        #region Private Serialized/Non-Serialized Fields
        [Header("Item data")]
        [SerializeField] private GameObject initPrefab;
        [SerializeField] private ItemController initItemCont;
        private (GameObject, ItemController) stockPileTuple;
        [Tooltip("Sprite that represents when this stockpile is empty")][SerializeField] private Sprite emptyStockpileSprite;
        [Tooltip("Sprite of what corresponding items that can fill the stockpile.")][SerializeField] private Sprite[] itemSprites;
        [Tooltip("Tag of corresponding items that can fill the stockpile.")][SerializeField] private string[] itemTags;
        private IDictionary<string, Sprite> itemTagToSpriteDict;
        #endregion
        #region Getters/Setter
        public (GameObject, ItemController) StockPileTuple { get { return stockPileTuple; } set { stockPileTuple = value; } }
        #endregion

        //Taking an item from a stockpile
        public void TakeItem((GameObject, ItemController) newItemTuple)
        {
            bool canTakeItem = itemTagToSpriteDict.TryGetValue(newItemTuple.Item2.PrefabItemStruct.itemSubTag + newItemTuple.Item2.PrefabItemStruct.itemTag, out var newSprite);
            stockPileTuple = canTakeItem ? newItemTuple : (null, null);
            IsEmpty = !canTakeItem;
            M_SpriteRend.sprite = (!IsEmpty) ? newSprite: emptyStockpileSprite;
        }
        public bool Deposit(int amount, (GameObject, ItemController) newItemTuple)
        {
            //if player can deposit item to stockpile update current quantity and return outcome
            if (IsEmpty && itemTagToSpriteDict.ContainsKey(newItemTuple.Item2.PrefabItemStruct.itemSubTag + newItemTuple.Item2.PrefabItemStruct.itemTag))
                TakeItem(newItemTuple);
            if (((CurQuantity + amount) <= MaxQuantity) && (newItemTuple == stockPileTuple))
            {
                CurQuantity += amount;
                return true;
            } 
            return false;
        }
        //if player can withdraw from stock item then update quantity and return outcome
        public void Withdraw(int amount)
        {
            //Check to make sure amount withdraw does not result in negative stock, if it does fail withdraw
            CurQuantity -= (((CurQuantity - amount) >= 0) ? (amount) : (0));
            //if empty get rid of 
            IsEmpty = (CurQuantity == 0);
            //If the stockpile is empty replace prefab sprite to empty one so that playerts now stockpile can be repopulated with an item
            M_SpriteRend.sprite = (IsEmpty) ? (emptyStockpileSprite) : (M_SpriteRend.sprite);
            stockPileTuple = IsEmpty ? (null, null) : stockPileTuple;
        }
        public void Start()
        {
            if (gameObject.tag.Contains("Stockpile"))
                M_SpriteRend = GetComponent<SpriteRenderer>();
            else
                M_SpriteRend= transform.Find("productUILOC").gameObject.GetComponent<SpriteRenderer>();
            //CurQuantity = MaxQuantity;
            IsEmpty = (CurQuantity == 0);
            itemTagToSpriteDict = new Dictionary<string, Sprite>();
            foreach (string itemTag in itemTags)
                itemTagToSpriteDict.Add(itemTag, itemSprites[Array.IndexOf(itemTags, itemTag)]);
            stockPileTuple = (initPrefab, initItemCont);
            M_SpriteRend.sprite = (IsEmpty) ? (emptyStockpileSprite) : (itemTagToSpriteDict[stockPileTuple.Item2.PrefabItemStruct.itemSubTag + stockPileTuple.Item2.PrefabItemStruct.itemTag]);
        }
    }
}