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
        [SerializeField] private AlgorithmBase[] _algorithms;
        [Header("Size attributes for game map.")] 
        [SerializeField] private int length;
        [SerializeField] private int width;
        [SerializeField] private TilemapType _type;
        private bool InBounds(int x, int y)
        {
            return (x>=0 && x<width && y>=0 && y < length);
        }

        #endregion
        #region "Getters/Setters"
        public int Width{get{return width;}}
        public int Length{get{return length;}}
        public TilemapType Type{get{return _type;}}
        #endregion
        #region "Public fields"
        [HideInInspector] public TileGrid Grid;
        public int GetTile(int x, int y)
        {
            //If position passed in is not InBounds return 0.
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
                    positionsArray[x*width + y] = new Vector3Int(x, y, 0);
                    int typeOfTile = GetTile(x, y);
                    if (!Grid.Tiles.TryGetValue(typeOfTile, out Tile tile))
                    {
                        if(typeOfTile != 0)
                            Debug.Log("Tile not defined for id: " + typeOfTile);
                        tileArray[y * width + x] = null;
                        continue;
                    }

                    tileArray[x * width + y] = tile;
                }
            }
            gameMap.SetTiles(positionsArray, tileArray);
            gameMap.RefreshAllTiles();
        }
        public void Generate(AlgorithmBase algorithm)
        {
            algorithm.Apply(this);
        }
        public void Initialize()
        {
            gameMap = GetComponent<Tilemap>();
            Grid = transform.parent.GetComponent<TileGrid>();
            width = Grid.Width;
            length = Grid.Length;
            //Initialize Array containing tiles in TileMapm as one-dimensional array
            tiles = new int[length * width];
            foreach (var algorithm in _algorithms)
                Generate(algorithm);
            RenderTilemap();
        }
        #endregion
    }
}
