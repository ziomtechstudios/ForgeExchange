using System;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class FishSpawnerController : SpawnerController
    {
        ///<summary>
        ///Spawners will logically behave similar to craft table, forge , etc..
        /// Dictionary will store list of prefabs.
        /// Look up val will be following parameters
        /// Season, time of day, type of Rod, type of bait, level of fishing skill.
        /// </summary>
        [SerializeField] private GameObject potentialFish;

        public override GameObject SpawnMob(string recipe)
        {
            CanSpawn = MobPrefabDict.TryGetValue(recipe, out potentialFish);
            return potentialFish;
        }

        // Start is called before the first frame update
        void Start()
        {
            MobPrefabDict =  new Dictionary<string, GameObject>();
            CanSpawn = false;
            foreach (string recipe in Recipes)
                MobPrefabDict.Add(recipe, SpawnableMobs[Array.IndexOf(Recipes, recipe)]);
        }
        
    }
}
