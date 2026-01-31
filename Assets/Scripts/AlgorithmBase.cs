using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public abstract class AlgorithmBase : ScriptableObject

    {
        public abstract void Apply(MapGenerator gameMap);
    }
} 