using System;
using System.Collections.Generic;
using JetBrains.Annotations;
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
        [SerializeReference] private SpriteToTupleController spriteToTupleCont;
        [CanBeNull]
        public override (GameObject, ItemController) SpawnMob(string recipe)
        {
            Sprite potentialSpawnSprite;
            if (MobPrefabDict.TryGetValue(recipe, out potentialSpawnSprite))
                return spriteToTupleCont.SpriteToTupleDict[potentialSpawnSprite];
            return (null, null);
        }
        // Start is called before the first frame update
        void Start()
        {
            spriteToTupleCont = GameObject.Find("EventSystem").GetComponent<SpriteToTupleController>();
        }
        void Awake()
        {
            MobPrefabDict =  new Dictionary<string, Sprite>();
            CanSpawn = false;
            foreach (string recipe in Recipes)
                MobPrefabDict.Add(recipe, SpawnableMobs[Array.IndexOf(Recipes, recipe)]);
        }
    }
}
