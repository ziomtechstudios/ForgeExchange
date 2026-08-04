using System;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [CreateAssetMenu(fileName = "NoiseGeneration", menuName ="Algorithms/NoiseGeneration" )]
    public class NoiseGeneration : AlgorithmBase
    {
        [Header("Noise settings.")] public int Octaves;
        [Range(0, 1)] 
        public float Persistance;
        public float Lacunarity;
        public float NoiseScale;
        public Vector2 Offset;
        public bool ApplyIslandGradient;

        [Serializable]
        class NoiseValues
        { 
                [Range(0f, 1f)] 
            public float Height;
            public GroundTileType GroundTile;
        }

        [SerializeField] private NoiseValues[] TileTypes;
        public override void Apply(MapGenerator gameMap)
        {
            //Order TileTypes for small to large
            TileTypes = TileTypes.OrderBy(a => a.Height).ToArray();
            //Passing other PARAMS to generate noise
            var noiseMap = Noise.GenerateNoise(gameMap.Width, gameMap.Length, gameMap.Grid.Seed, NoiseScale, Octaves,
                Persistance, Lacunarity, Offset);
            if (ApplyIslandGradient)
            {
                var islandGradient = Noise.GenIslandGradientMap(gameMap.Width, gameMap.Length);
                for (int x = 0; x < gameMap.Width; x++)
                {
                    for (int y = 0; y < gameMap.Length; y++)
                    {
                        //Subtract islandGradient val from noiseMap val.
                        float subtractedVal = noiseMap[y * gameMap.Width + x] - islandGradient[y * gameMap.Width + x];
                        //Applying to island map clamping vals between 0f and 1f
                        noiseMap[y * gameMap.Width + x] = Mathf.Clamp01(subtractedVal);
                    }
                }
            }
            for (int x = 0; x < gameMap.Width; x++)
            {
                for (int y = 0; y < gameMap.Length; y++)
                {
                    //Get height @ cur Position
                    var height = noiseMap[y * gameMap.Width + x];
                    for (int i = 0; i < TileTypes.Length; i++)
                    {
                        if (height <= TileTypes[i].Height)
                        {
                            gameMap.SetTile(x, y, (int)TileTypes[i].GroundTile);
                            break;
                        }
                    }
                }
            }
            
        }
    }
}