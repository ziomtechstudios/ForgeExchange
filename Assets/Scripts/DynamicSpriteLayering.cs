using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace Com.ZiomtechStudios.ForgeExchange{
[RequireComponent(typeof(SpriteRenderer))]
[RequireComponent(typeof(BoxCollider2D))]
public class DynamicSpriteLayering : MonoBehaviour
{
    [SerializeField] private SpriteRenderer m_SpriteRend;
    [SerializeField] private BoxCollider2D m_BoxCollider;
    [SerializeField] private Tilemap buildingTileMap;
    // Start is called before the first frame update
    void Start()
    {
        m_SpriteRend = GetComponent<SpriteRenderer>();
        m_BoxCollider = GetComponent<BoxCollider2D>();
        buildingTileMap = GameObject.Find("Grid").transform.Find("tilemap_buildings").gameObject.GetComponent<Tilemap>();
    }

    // Called when attached gameObjects collider triggers another gameObject's collider
    void OnTriggerEnter2D(Collider2D col)
    {         
        Debug.Log(buildingTileMap.GetTile(Vector3Int.FloorToInt(transform.position)) != null);
        //Are we colliding with a building wall?  //Are we currently in a room or outside of it?
        if(col.CompareTag("underwall") && (buildingTileMap.GetTile(Vector3Int.FloorToInt(transform.position)) != null))
            m_SpriteRend.sortingOrder = 0;
    }
    void OnTriggerExit2D(Collider2D col){
        if(col.CompareTag("underwall"))
            m_SpriteRend.sortingOrder = 1;
    }
}
}
