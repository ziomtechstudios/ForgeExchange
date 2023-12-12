using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace Com.ZiomtechStudios.ForgeExchange{
    [RequireComponent(typeof(SpriteRenderer))]
    [RequireComponent(typeof(BoxCollider2D))]
    public class DynamicSpriteLayering : MonoBehaviour
    {
        #region "rivate serialized Fields"
        [SerializeField] private SpriteRenderer m_SpriteRend;
        [SerializeField] private BoxCollider2D m_BoxCollider;
        [SerializeField] private Tilemap buildingTileMap;
        [SerializeField] private Tilemap environmentTileMap;
        [SerializeField] private Tilemap underwallTileMap;
        [SerializeField] private Tilemap ornamentsTileMap;
        [SerializeField] private Transform m_SpriteSortPoint;
        [SerializeField] private Transform m_OrnamentSortPoint;
        #endregion
        #region "Private memebers"
        private GridLayout m_GridLayout;
        private void FadingWall(){

        }
        private void SortTargetSprite(Collider2D col){
            //Are we colliding with a building wall?  
            if(col.CompareTag("underwall")){
                //Players feet is on a floor tile so we are in from of the wall
                if(buildingTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) != null && ornamentsTileMap.GetTile(m_GridLayout.WorldToCell(m_OrnamentSortPoint.position)) == null) 
                    m_SpriteRend.sortingOrder = 2;                
                //The p[ayer is outside and behind a wall
                else if((environmentTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) != null) && (underwallTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) != null) && (buildingTileMap.GetTile(m_GridLayout.WorldToCell(m_SpriteSortPoint.position)) == null))
                    m_SpriteRend.sortingOrder = 0;
                //we are standing behind something hanging on the walls
                else if(ornamentsTileMap.GetTile(m_GridLayout.WorldToCell(m_OrnamentSortPoint.position)) != null)
                    m_SpriteRend.sortingOrder = 1;
                else
                    m_SpriteRend.sortingOrder = 2;
            }
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_SpriteRend = GetComponent<SpriteRenderer>();
            m_BoxCollider = GetComponent<BoxCollider2D>();
            m_GridLayout  = GameObject.Find("Grid").GetComponent<GridLayout>();
            buildingTileMap = m_GridLayout.gameObject.transform.Find("tilemap_buildings").gameObject.GetComponent<Tilemap>();
            environmentTileMap = m_GridLayout.gameObject.transform.Find("tilemap_environment").gameObject.GetComponent<Tilemap>();
            underwallTileMap = m_GridLayout.gameObject.transform.Find("tilemap_underwall").gameObject.GetComponent<Tilemap>();
            ornamentsTileMap  = m_GridLayout.gameObject.transform.Find("tilemap_underwall/tilemap_ornaments").gameObject.GetComponent<Tilemap>();
            m_SpriteSortPoint = transform.Find("SpriteSortPos");
            m_OrnamentSortPoint = transform.Find("ornamentSortPoint");
        }

        // Called when attached gameObjects collider triggers another gameObject's collider
        void OnTriggerEnter2D(Collider2D col){         
            SortTargetSprite(col);
        }
        void OnTriggerStay2D(Collider2D col){
            SortTargetSprite(col);
        }
        void OnTriggerExit2D(Collider2D col){
            SortTargetSprite(col);
        }
    }
}
