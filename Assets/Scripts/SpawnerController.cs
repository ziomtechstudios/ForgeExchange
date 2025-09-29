using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public abstract class SpawnerController : MonoBehaviour
    {
        #region "Private Fields"
        [SerializeField] private IDictionary<string, GameObject> mobPrefabDict;
        [SerializeField] private bool canSpawn;
        #endregion
        #region "Public Fields"
        public abstract GameObject SpawnMob();
        #endregion
        #region "Getters/Setters"
        public bool CanSpawn{set{canSpawn = value;}get{return canSpawn;}}
        public IDictionary<string, GameObject> MobPrefabDict{get{return mobPrefabDict;}set{mobPrefabDict = value;}}
        #endregion

    }
}
