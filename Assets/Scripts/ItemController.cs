using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ItemController : MonoBehaviour
    {
        [SerializeField] private float refinement;
        [SerializeField] private ItemStruct prefabItemStruct;
        [SerializeField] private Sprite itemIcon;
        [SerializeField] private int maxStackQuantity;
        public float Refinement { get { return refinement; } set { refinement = value; } }
        public ItemStruct PrefabItemStruct { get { return prefabItemStruct; } set { prefabItemStruct = value; } }
        public int MaxStackQuantity { get { return maxStackQuantity; } set { maxStackQuantity = value; } }
        public Sprite ItemIcon { get { return itemIcon; } }

    }
}
