using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(BoxCollider2D))]
    public class StockpileController : StorageController
    {
        #region Private Serialized Fields

        [Header("Item data")]
        [SerializeField] private GameObject itemPrefab;
        [SerializeField] private ItemController itemCont;
        [Tooltip("Sprite that represents when this stockpile is empty")][SerializeField] private Sprite emptyStockpileSprite;
        [Tooltip("Sprite of what corresponding items that can fill the stockpile.")][SerializeField] private Sprite[] itemSprites;
        [Tooltip("Tag of corresponding items that can fill the stockpile.")][SerializeField] private string[] itemTags;
        private IDictionary<string, Sprite> itemTagToSpriteDict;
        #endregion
        #region Getters/Setter

        public GameObject ItemPrefab { get { return itemPrefab; } set { itemPrefab = value; } }
        public ItemController ItemCont { get { return itemCont; } set { itemCont = value; } }
        #endregion

        //Taking an item from a stockpile
        public void TakeItem(GameObject newItem, ItemController newItemCont)
        {
            bool canTakeItem = itemTagToSpriteDict.TryGetValue(newItemCont.PrefabItemStruct.itemSubTag + newItemCont.PrefabItemStruct.itemTag, out var newSprite);
            itemPrefab = canTakeItem ? newItem : null;
            itemCont = canTakeItem ? newItemCont : null;
            IsEmpty = !canTakeItem;
            M_SpriteRend.sprite = (!IsEmpty) ? newSprite: emptyStockpileSprite;
        }
        public bool Deposit(int amount, GameObject newItem, ItemController newItemCont)
        {
            //if player can deposit item to stockpile update current quantity and return outcome
            if (IsEmpty && itemTagToSpriteDict.ContainsKey(newItemCont.PrefabItemStruct.itemSubTag + newItemCont.PrefabItemStruct.itemTag))
                TakeItem(newItem, newItemCont);
            if (((CurQuantity + amount) <= MaxQuantity) && (newItem == itemPrefab))
            {
                CurQuantity += amount;
                return true;
            }
            else
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
            itemPrefab = (IsEmpty) ? (null) : (itemPrefab);
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
            M_SpriteRend.sprite = (IsEmpty) ? (emptyStockpileSprite) : (itemTagToSpriteDict[itemPrefab.GetComponent<ItemController>().PrefabItemStruct.itemSubTag + itemPrefab.GetComponent<ItemController>().PrefabItemStruct.itemTag]);
        }
    }
}