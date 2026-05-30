using System.Collections.Generic;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class SpriteToTupleController : MonoBehaviour
    {
        [SerializeField] private Sprite[] spriteKeys;
        [SerializeField] private GameObject[] tuplePrefabs;
        [SerializeField] private ItemController[] tupleItemConts;
        private (GameObject, ItemController)[] tupleTerms;
        public IDictionary<Sprite, (GameObject, ItemController)> SpriteToTupleDict;

        // Start is called before the first frame update
        void Awake()
        {
            tupleTerms = new (GameObject, ItemController)[tuplePrefabs.Length];
            SpriteToTupleDict = new Dictionary<Sprite, (GameObject, ItemController)>();
            spriteKeys = new Sprite[tuplePrefabs.Length];
            for (int i = 0; i < tuplePrefabs.Length; i++)
                spriteKeys[i] = tupleItemConts[i].ItemIcon;
            for(int i = 0 ; i < tupleItemConts.Length; i++)
                tupleTerms[i] = (tuplePrefabs[i], tupleItemConts[i]);
            for (int i = 0; i < spriteKeys.Length; i++)
                SpriteToTupleDict.Add(spriteKeys[i], tupleTerms[i]);
        }
    }
}
