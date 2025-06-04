
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.U2D;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class TileGrid:MonoBehaviour
    {
        public int Width, Length;
        public int TileSize, Seed;
        public Dictionary<int, Tile> Tiles { get; private set; }
        public Dictionary<TilemapType, MapGenerator> Tilemaps;

        [Serializable]
        class GroundTiles
        {
            public GroundTileType TileType;
            public Color Color;
            public Texture2D Texture;
        }

        [Serializable]
        class ObjectTiles
        {
            public ObjectTileType TileType;
            public Color Color;
            public Texture2D Texture;
        }

        [SerializeField] private GroundTiles[] GroundTileTypes;
        [SerializeField] private ObjectTiles[] ObjectTileTypes;
        [SerializeField] private SpriteAtlas spriteAtlas;

        private Tile CreateTile(Color color, Texture2D texture)
        {
            bool setColor = false;
            if(texture == null)
            {
                setColor = true;
                texture = new Texture2D(TileSize, TileSize);
            }
            texture.filterMode = FilterMode.Point;
            var sprite = Sprite.Create(texture, new Rect(0,0, TileSize, TileSize), new Vector2(0.5f, 0.5f), TileSize);
            var tile = ScriptableObject.CreateInstance<Tile>();
            if (setColor)
            {
                //Make sure Color is not transparent.
                color.a = 1;
                //Set tile color.
                tile.color = color;
            }
            tile.sprite = sprite;
            return tile;
        }

        private Dictionary<int, Tile> InitializeTiles()
        {
            var dictionary = new Dictionary<int, Tile>();
            //Creating a Tile for each GroundTileType
            foreach (var tileType in GroundTileTypes)
            {
                if (tileType.TileType == 0) continue;
                var tile = CreateTile(tileType.Color, tileType.Texture);
                dictionary.Add((int)tileType.TileType, tile);
            }
            foreach (var tileType in ObjectTileTypes)
            {
                if (tileType.TileType == 0) continue;
                var tile = CreateTile(tileType.Color, tileType.Texture);
                dictionary.Add((int)tileType.TileType, tile);
            }
            return dictionary;
        }

        private void Awake()
        {
            Tiles = InitializeTiles();
            Tilemaps = new Dictionary<TilemapType, MapGenerator>();
            foreach (Transform child in transform)
            {
                var tilemap = child.GetComponent<MapGenerator>();
                if (tilemap == null)
                    continue;
                if(Tilemaps.ContainsKey(tilemap.Type))
                    throw new Exception("Duplicate tilemap type: " + tilemap.Type);
                Tilemaps.Add(tilemap.Type, tilemap);
            }

            foreach (var tilemap in Tilemaps.Values)
                tilemap.Initialize();
        }
    }
}