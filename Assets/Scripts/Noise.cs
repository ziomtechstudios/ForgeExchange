using UnityEngine;
using System;
using Random = System.Random;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class Noise
    {
        public static float[] GenerateNoise(int mapWidth, int mapLength, int seed, float scale, int octaves,
            float persistance, Vector2 offset)
        {
            float[] noiseMap = new float[mapWidth * mapLength];
            var random = new Random(seed);
            octaves = (octaves < 1) ? 1 : octaves;
            Vector2[] octaveOffsets = new Vector2[octaves];
            for (int i = 0; i < octaves; i++)
                octaveOffsets[i] = new Vector2(random.Next(-100000, 100000) + offset.x,
                    random.Next(-100000, 100000) + offset.y);
            
            scale = (scale <= 0f) ? 0.0001f : scale;
            float maxNoiseHeight = float.MinValue;
            float minNoiseHeight = float.MaxValue;
            //WHne changing noise scale the zoom is from top-right, this changes zoom from center
            float halfWidth = mapWidth / 2f;
            float halfLength = mapLength / 2f;
            
            return noiseMap;
        }
    }
}