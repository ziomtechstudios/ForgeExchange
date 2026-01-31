using System;
using System.Linq;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [CreateAssetMenu(fileName = "TreeGeneration", menuName = "ForgeExchange/Algorithms/TreeGeneration")]
    public class TreeGeneration : AlgorithmBase
    {
        [SerializeField] private TreeConfiguration[] TreeSelection;
        [Serializable] class TreeConfiguration
        {
            public ObjectTileType Tree;
            public GroundTileType[] SpawnOnGrounds;
            [Range(0, 100)] public int SpawnChancePerCell;
        }
        public override void Apply(MapGenerator gameMap)
        {
            var groundGameMap = gameMap.Grid.Tilemaps[TilemapType.Ground];
            var random = new System.Random(gameMap.Grid.Seed);
            for (int x = 0; x < gameMap.Width; x++)
            {
                for(int y = 0; y < gameMap.Length; y++)
                {
                    foreach (var tree in TreeSelection)
                    {
                        var groundTile = groundGameMap.GetTile(x, y);
                        if (tree.SpawnOnGrounds.Any(tile => (int)tile == groundTile))
                            gameMap.SetTile(x, y, (int)tree.Tree);
                    }
                }
            }
        }
    }
}
