using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class FishSpawnerController : SpawnerController
    {
        public override GameObject SpawnMob()
        {
            return null;
        }

        // Start is called before the first frame update
        void Start()
        {
            MobPrefabDict =  new Dictionary<string, GameObject>();
            CanSpawn = false;
        }
        
    }
}
