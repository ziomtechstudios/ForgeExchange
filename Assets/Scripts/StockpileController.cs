using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(BoxCollider2D))]
    public class StockpileController : MonoBehaviour
    {
        #region Private Serialized Fields
        [Header("Stockpile Components")]
        [SerializeField] private SpriteRenderer m_SpriteRenderer;
        [Header("Stockpile Metrics")]
        [SerializeField] private int quantity;
        [SerializeField] private int maxQuantity;
        [SerializeField] private bool isEmpty;
        [Header("Item data")]
        [SerializeField] private GameObject itemPrefab;
        [Tooltip("Sprite that represents when this stockpile is empty")][SerializeField] private Sprite emptyStockpileSprite;
        [Tooltip("Sprite of what corresponding items that can fill the stockpile.")][SerializeField] private Sprite[] itemSprites;
        [Tooltip("Tag of corresponding items that can fill the stockpile.")][SerializeField] private string[] itemTags;
        private IDictionary<string, Sprite> itemTagToSpriteDict;
        #endregion
        #region Getters/Setter
        public int Quantity { get { return quantity; } }
        public int MaxQuantity { get { return maxQuantity; } set { maxQuantity = value; } }
        public GameObject ItemPrefab { get { return itemPrefab; } set { itemPrefab = value; } }
        public bool IsEmpty { get { return isEmpty; } }
        #endregion

        //Taking an item from a stockpile
        public void TakeItem(GameObject newItem, ItemController newItemCont)
        {

            Sprite newSprite;
            bool canTakeItem = itemTagToSpriteDict.TryGetValue((newItemCont.PrefabItemStruct.itemSubTag + newItemCont.PrefabItemStruct.itemTag), out newSprite);
            itemPrefab = (canTakeItem) ? (newItem) : (null);
            isEmpty = !canTakeItem;
            m_SpriteRenderer.sprite = (!isEmpty) ? (newSprite) : (emptyStockpileSprite);
        }
        public bool Deposit(int amount, GameObject newItem, ItemController newItemCont)
        {
            //if player can deposit item to stockpile update current quantity and return outcome
            if (isEmpty && itemTagToSpriteDict.ContainsKey(newItemCont.PrefabItemStruct.itemSubTag + newItemCont.PrefabItemStruct.itemTag))
                TakeItem(newItem, newItemCont);
            if (((quantity + amount) <= maxQuantity) && (newItem == itemPrefab))
            {
                quantity += amount;
                return true;
            }
            else
                return false;
        }
        //if player can withdraw from stock item then update quantity and return outcome
        public void Withdraw(int amount)
        {
            //Check to make sure amount withdraw does not result in negative stock, if it does fail withdraw
            quantity -= (((quantity - amount) >= 0) ? (amount) : (0));
            //if empty get rid of 
            isEmpty = (quantity == 0);
            //If the stockpile is empty replace prefab sprite to empty one so that playerts now stockpile can be repopulated with an item
            m_SpriteRenderer.sprite = (isEmpty) ? (emptyStockpileSprite) : (m_SpriteRenderer.sprite);
            itemPrefab = (isEmpty) ? (null) : (itemPrefab);
        }
        public void Start()
        {
            if (gameObject.tag.Contains("Stockpile"))
                m_SpriteRenderer = GetComponent<SpriteRenderer>();
            else
                m_SpriteRenderer = transform.Find("productUILOC").gameObject.GetComponent<SpriteRenderer>();
            isEmpty = (quantity == 0);
            itemTagToSpriteDict = new Dictionary<string, Sprite>();
            foreach (string itemTag in itemTags)
                itemTagToSpriteDict.Add(itemTag, itemSprites[Array.IndexOf(itemTags, itemTag)]);
            m_SpriteRenderer.sprite = (isEmpty) ? (emptyStockpileSprite) : (itemTagToSpriteDict[itemPrefab.GetComponent<ItemController>().PrefabItemStruct.itemSubTag + itemPrefab.GetComponent<ItemController>().PrefabItemStruct.itemTag]);
        }
    }
}