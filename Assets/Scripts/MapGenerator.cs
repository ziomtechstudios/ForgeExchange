using System;
using System.Collections.Generic;
using UnityEngine.Tilemaps;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    /// <summary>
    /// Code for this procedural generation of tilemaps is from studying + implementing from following blog:
    /// https://code2d.wordpress.com/2020/07/20/topdown-world-generation-series/
    /// Much thanks for the author for the clear explanations and great base for implementing this feature!
    /// </summary>
    public class MapGenerator : MonoBehaviour
    {
        #region "Private Fields"
        [Tooltip("Reference to Tilemap object in use.")][SerializeField] private Tilemap gameMap;
        [Tooltip("Storing references to tiles based on 2-D Cartesian coordinates, stored in 1D array.")][SerializeField] private int[] tiles;
        private Dictionary<int, Tile> tileTypeDict;
        [SerializeField] private TileType[] TileTypes;
        [Header("Size attributes for game map.")]
        [SerializeField] private int length, width, tileSize;
  
 
        private bool InBounds(int x, int y)
        {
            return (x>=0 && x<width && y>=0 && y < length);
        }
        // Start is called before the first frame update
        private void Awake()
        {
            gameMap = gameObject.transform.Find("GameMap").gameObject.GetComponent<Tilemap>();
            tiles = new int[length + width];
            tileTypeDict = new Dictionary<int, Tile>();
            foreach (TileType tileType in TileTypes)
            {
                Tile tile = ScriptableObject.CreateInstance<Tile>();
                tileType.GroundColor.a = 1;
                tile.color = tileType.GroundColor;
                tile.sprite = Sprite.Create(new Texture2D(tileSize, tileSize), new Rect(0, 0, tileSize, tileSize), new Vector2(0.5f, 0.5f), tileSize);
                tileTypeDict.Add((int)tileType.GroundTile, tile);
            }
            Generate(new RandomDataGen());
        }
        #endregion
        #region "Getters/Setters"
        public int Width{get{return width;}}
        public int Length{get{return length;}}
        #endregion
        #region "Internal classes/data structures"
        [Serializable] class TileType
        {
            public GroundTileType GroundTile;
            public Color GroundColor;
        }
        #endregion
        #region "Public fields"
        public int GetTile(int x, int y)
        {
            return InBounds(x, y) ? tiles[y * width + x] : 0;
        }
        public void SetTile(int x, int y, int val)
        {
            if (InBounds(x, y))
                tiles[y * width + x] = val;
        }

        public void RenderTilemap()
        {
            Vector3Int[] positionsArray = new Vector3Int[width * length];
            Tile[] tileArray = new Tile[width * length];
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < length; y++)
                {
                    positionsArray[x*width * y] = new Vector3Int(x, y, 0);
                    int typeofTile = GetTile(x, y);
                    
                }
            }

        }
        public void Generate(WorldGenerator generator)
        {
            generator.Apply(this);
        }
        #endregion
    }
}
