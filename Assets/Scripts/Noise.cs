using UnityEngine;
using System;


namespace Com.ZiomtechStudios.ForgeExchange
{
    public class Noise
    {
	    public static float[] GenIslandGradientMap(int mapWidth, int mapLength)
	    {
		    float[] map = new float[mapWidth * mapLength];
		    for (int x = 0; x < mapWidth; x++)
		    {
			    for (int y = 0; y < mapLength; y++)
			    {
				    // Dividing x/y coordinate point by width/Length lands val between 0-1, *2-1 lands val between -1, 0
				    float i = x/(float)mapWidth*2-1;
				    float j = y/(float)mapLength*2-1;
				    //Closest Val to the Edge of the map
				    float val = Mathf.Max(Mathf.Abs(i), Mathf.Abs(j));
				    //Applies a curve so that more values of o around the edge, and moer vals >= 3 in the middle
				    float a = 3;
				    float b = 2.2f;
				    float islandGradientVal = Mathf.Pow(val ,a)/(Mathf.Pow(val ,a) + Mathf.Pow(b-b*val, a));
				    //Applying gradient to the map.
				    map[y * mapWidth + x] = islandGradientVal;
			    }
		    }
		    return map;
	    }
        public static float[] GenerateNoise(int mapWidth, int mapLength, int seed, float scale, int octaves,
            float persistance, float lacunarity, Vector2 offset)
        {
            float[] noiseMap = new float[mapWidth * mapLength];
            var random = new System.Random(seed);
            if (octaves < 1)
	            octaves = 1;
            Vector2[] octaveOffsets = new Vector2[octaves];
            for (int i = 0; i < octaves; i++)
                octaveOffsets[i] = new Vector2((random.Next(-100000, 100000) + offset.x),
                    (random.Next(-100000, 100000) + offset.y));
            if(scale <= 0f)
				scale = 0.0001f;
            float maxNoiseHeight = float.MinValue;
            float minNoiseHeight = float.MaxValue;
            //WHne changing noise scale the zoom is from top-right, this changes zoom from center
            float halfWidth = mapWidth / 2f;
            float halfLength = mapLength / 2f;
            for(int x = 0; x < mapWidth; x++){
				for(int y = 0; y < mapLength; y++){
					float amplitude = 1f;
					float frequency = 1f;
					float noiseHeight = 0;
					for(int i = 0; i < octaves; i++){
						float sampleX = (x - halfLength) / scale * frequency + octaveOffsets[i].x;
						float sampleY = (y - halfWidth) / scale * frequency + octaveOffsets[i].y;
						//Using Unity's implementation of Perlin's Noise
						float perlinVal = Mathf.PerlinNoise(sampleX, sampleY)*2-1;
						noiseHeight += perlinVal * amplitude;
						amplitude *= persistance;
						frequency *= lacunarity;
					}
					if(noiseHeight > maxNoiseHeight)
						maxNoiseHeight = noiseHeight;
					else if(noiseHeight < minNoiseHeight)
						minNoiseHeight = noiseHeight;
					noiseMap[y*mapWidth+x] = noiseHeight;
				}
			}
			for(int x = 0; x < mapWidth; x++){
				for(int y = 0; y < mapLength; y++){
					//Returned val between 0 and 1 based on val of NoiseMap
					//minNoiseHeight at least 0f maxNoiseHeight at most 1f;
					noiseMap[y*mapWidth+x] = Mathf.InverseLerp(minNoiseHeight, maxNoiseHeight, noiseMap[y*mapWidth+x]);
				}
			}
			return noiseMap;
        }
    }
}