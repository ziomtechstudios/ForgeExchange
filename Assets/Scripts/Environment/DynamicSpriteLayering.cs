using UnityEngine;
using UnityEngine.Tilemaps;

namespace Com.ZiomtechStudios.ForgeExchange{
    [RequireComponent(typeof(SpriteRenderer))]
    [RequireComponent(typeof(BoxCollider2D))]
    public class DynamicSpriteLayering : MonoBehaviour
    {
        #region "Private serialized Fields"
        [SerializeField] private SpriteRenderer m_SpriteRend;
        [SerializeField] private Tilemap buildingTileMap;
        [SerializeField] private Tilemap environmentTileMap;
        [SerializeField] private Tilemap underwallTileMap;
        [SerializeField] private Tilemap ornamentsTileMap;
        [SerializeField] private Tilemap waterTileMap;
        [SerializeField] private Tilemap entryExitTileMap;
        [SerializeField] private Tilemap roofingTileMap;
        [SerializeField] private Transform m_SpriteSortPoint;
        [SerializeField] private Transform m_OrnamentSortPoint;
        [SerializeField] private SpriteRenderer m_ShadowSpriteRend;
        [Tooltip("When passing a value for transparancy work within the range of 0.0f to 255.0f. Take your target value and divide it by 255.0f so that it will result in a nuumber between 0.0f and 1.0f.")][Range(0.0f, 1.0f)] [SerializeField] private float transparancyVal;
        #endregion
        #region "Getters/Setters"
        public bool IsInside{get{return isInside;}}
        public bool IsBehindWall{get{return isBehindWall;}}
        #endregion
        #region "Private members"
        private GridLayout m_GridLayout;
        private bool isInside, isBehindWall;

        private void MakeTileMapTransparent(Tilemap targetTileMap)
        {
            targetTileMap.color = (gameObject.CompareTag("Player"))
                ? Color.Lerp(new Color(1.0f, 1.0f, 1.0f, (transparancyVal / 255.0f)), Color.white, 1.00f)
                : Color.white;
        }
        private void ChangeSpriteSortOrder(int layer)
        {
            m_ShadowSpriteRend.sortingOrder = layer;
            m_SpriteRend.sortingOrder = layer;
        }
        private void DynamicWallLayering(Collider2D col)
        {
            //Are we colliding with a building wall?  
            if (col.CompareTag("underwall"))
            {
                isInside = (buildingTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) &&
                            ornamentsTileMap.GetTile(m_GridLayout.WorldToCell(m_OrnamentSortPoint.position)) == null) ||
                           roofingTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position));
                isBehindWall = !isInside &&
                               (((environmentTileMap.GetTile(m_GridLayout.WorldToCell(transform.position)) != null) ||
                                 (underwallTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) !=
                                  null) ||
                                 (entryExitTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) !=
                                  null)) && (buildingTileMap.GetTile(
                                   m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) == null));
                //Players feet is on a floor tile so we up against the wall from the inside
                if (isInside)
                {
                    ChangeSpriteSortOrder(0);
                    //We want gameobjects that are not the player to be layered in a similar fashion
                    //What we don't want is AI objects walking behind the walls and triggering the transparency effect.
                    MakeTileMapTransparent(underwallTileMap);
                    MakeTileMapTransparent(entryExitTileMap);
                    MakeTileMapTransparent(roofingTileMap);
                }
                //The pl
                //Player is outside and behind a wall
                else if (isBehindWall)
                {
                    ChangeSpriteSortOrder(0);
                    underwallTileMap.color = gameObject.CompareTag("Player")
                        ? Color.Lerp(Color.white, new Color(1.0f, 1.0f, 1.0f, transparancyVal), 1.00f)
                        : Color.white;
                    entryExitTileMap.color = gameObject.CompareTag("Player")
                        ? Color.Lerp(Color.white, new Color(1.0f, 1.0f, 1.0f, transparancyVal), 1.00f)
                        : Color.white;
                }
                //we are standing behind something hanging on the walls
                else if (ornamentsTileMap.GetTile(m_GridLayout.WorldToCell(m_OrnamentSortPoint.position)) != null)
                    ChangeSpriteSortOrder(1);
                    
                else
                    ChangeSpriteSortOrder(2);
            }
        }
        private void DynamicInteractableLayering(Collider2D col, int layer1, int layer2)
        {
            Vector2 dir = col.transform.position - transform.position;
            m_SpriteRend.sortingOrder = (dir.y > 0 ? layer1 : layer2);
            m_SpriteRend.sortingOrder = m_SpriteRend.sortingOrder;
        }
        private void SortTargetSprite(Collider2D col){
            switch (LayerMask.LayerToName(col.gameObject.layer))
            {
                case"bounds":
                    DynamicWallLayering(col);
                    break;
                case "workstation":
                    DynamicInteractableLayering(col, 2, 1);
                    break;
                case "chest":
                    DynamicInteractableLayering(col, 3, 2);
                    break;
                    
            }
            
        }
        private void ResetWallTransparency()
        {
            if (underwallTileMap.color.a != 1.00f || entryExitTileMap.color.a != 1.00f)
            {
                underwallTileMap.color = Color.Lerp(new Color(1.0f, 1.0f, 1.0f, (transparancyVal / 255.0f)),
                    Color.white, 1.00f);
                entryExitTileMap.color = Color.Lerp(new Color(1.0f, 1.0f, 1.0f, (transparancyVal / 255.0f)),
                    Color.white, 1.00f);
            }
        }
        #endregion
        #region "Public Members/Methods"
        public bool IsObjInWater(){
            return waterTileMap.GetTile(m_GridLayout.WorldToCell(transform.position));
        }
        public bool IsObjOutside()
        {
            return environmentTileMap.GetTile(m_GridLayout.WorldToCell(transform.position));
        }

        public bool IsUnderRoof()
        {
            return roofingTileMap.GetTile(m_GridLayout.WorldToCell(m_OrnamentSortPoint.position));
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_SpriteRend = GetComponent<SpriteRenderer>();
            m_GridLayout  = GameObject.Find("Grid").GetComponent<GridLayout>();
            buildingTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_buildings").gameObject.GetComponent<Tilemap>();
            environmentTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_environment").gameObject.GetComponent<Tilemap>();
            underwallTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_underwall").gameObject.GetComponent<Tilemap>();
            entryExitTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_underwall/tilemap_entry_exit").gameObject.GetComponent<Tilemap>();
            ornamentsTileMap  = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_underwall/tilemap_ornaments").gameObject.GetComponent<Tilemap>();
            waterTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_environment/tilemap_water").gameObject.GetComponent<Tilemap>();
            roofingTileMap = m_GridLayout.gameObject.transform.Find("Ground Level/tilemap_roofing").gameObject.GetComponent<Tilemap>();
            m_SpriteSortPoint = transform.Find("SpriteSortPos");
            m_OrnamentSortPoint = transform.Find("ornamentSortPoint");
            m_ShadowSpriteRend = transform.Find("Player Shadow").GetComponent<SpriteRenderer>();
        }
        // Called when attached gameObjects collider triggers another gameObject's collider
        void OnTriggerEnter2D(Collider2D col)
        {         
            SortTargetSprite(col);
        }
        void OnTriggerStay2D(Collider2D col)
        {
            SortTargetSprite(col);
        }
        void OnTriggerExit2D(Collider2D col)
        {
            SortTargetSprite(col);
        }

        void Update()
        {
            Debug.Log($"Is under roof: {IsUnderRoof()}.");
            if (IsUnderRoof())
            {
                //MakeTileMapTransparent(roofingTileMap);
                roofingTileMap.gameObject.SetActive(false);
            }
            else
            {
                roofingTileMap.gameObject.SetActive(true);
            }
        }
    }
}
