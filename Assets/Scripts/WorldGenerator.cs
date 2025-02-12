using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class WorldGenerator : MonoBehaviour
    {
        public interface IWorldGen
        {
            void Apply(MapGenerator gameMapGenerator);
        }
        public enum GroundTileType
        {
            // 0 - 100
            DeepWater = 0,
            ShallowWater = 1,
            Beach = 2,
            Grass = 3,
            Dirt = 4,
            Mountain = 5,
            Snow = 6
        } 
    }
}
