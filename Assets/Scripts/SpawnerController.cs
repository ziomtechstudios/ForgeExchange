using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public abstract class SpawnerController : MonoBehaviour
    {
        #region "Private Fields"
        private IDictionary<string, (GameObject, ItemController)> mobPrefabDict;
        [SerializeField] private bool canSpawn;
        [SerializeField] private string[] recipes;
        private (GameObject, ItemController)[] spawnableMobs;
        #endregion
        #region "Public Fields"
        public abstract (GameObject, ItemController) SpawnMob(string Recipe);
        #endregion
        #region "Getters/Setters"
        public bool CanSpawn{set{canSpawn = value;}get{return canSpawn;}}
        public IDictionary<string, (GameObject, ItemController)> MobPrefabDict{get{return mobPrefabDict;}set{mobPrefabDict = value;}}
        public string[] Recipes { get { return recipes; } set { recipes = value; } }
        public (GameObject, ItemController)[] SpawnableMobs { get { return spawnableMobs; } set { spawnableMobs = value; } } 
        #endregion

    }
}
