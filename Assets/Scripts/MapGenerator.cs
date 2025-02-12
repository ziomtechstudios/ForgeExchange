using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Tilemaps;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class MapGenerator : MonoBehaviour
    {
        #region "Private Fields"
        [SerializeField] private Tilemap gameMap;
        [SerializeField] private int[] tiles;
        [SerializeField] private int length, width;
        [SerializeField] private TileType[] TileTypes;

        private bool InBounds(int x, int y)
        {
            return (x>=0 && x<width && y>=0 && y < length);
        }
        #endregion
        #region "Getters/Setters"
        public int Width{get{return width;}}
        public int Length{get{return length;}}
        #endregion
        [Serializable] class TileType
        {
            public WorldGenerator.GroundTileType GroundTile;
            public Color GroundColor;
        }
        
        // Start is called before the first frame update
        void Awake()
        {
            gameMap = gameObject.transform.Find("GameMap").gameObject.GetComponent<Tilemap>();
            tiles = new int[length + width];
            Generate(new RandomDataGen());
        }
        public int GetTIle(int x, int y)
        {
            return InBounds(x, y) ? tiles[y * width + x] : 0;
        }
        public void SetTile(int x, int y, int val)
        {
            if (InBounds(x, y))
                tiles[y * width + x] = val;
        }

        public void Generate(WorldGenerator generator)
        {
            generator.Apply(this);
        }
    }
}
