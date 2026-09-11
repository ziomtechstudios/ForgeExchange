using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public abstract class SpawnerController : MonoBehaviour
    {
        #region "Private Fields"
        private IDictionary<string, Sprite> mobPrefabDict;
        private bool canSpawn;
        [SerializeField] private string[] recipes;
        [SerializeField] private Sprite[] spawnableMobs;
        #endregion
        #region "Public Fields"
        public abstract (GameObject, ItemController) SpawnMob(string Recipe);
        #endregion
        #region "Getters/Setters"
        public bool CanSpawn{set{canSpawn = value;}get{return canSpawn;}}
        public IDictionary<string, Sprite> MobPrefabDict{get{return mobPrefabDict;}set{mobPrefabDict = value;}}
        public string[] Recipes { get { return recipes; } set { recipes = value; } }
        public Sprite[] SpawnableMobs { get { return spawnableMobs; } set { spawnableMobs = value; } } 
        #endregion

    }
}
