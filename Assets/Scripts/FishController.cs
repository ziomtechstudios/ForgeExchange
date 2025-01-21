using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class FishController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [Tooltip("The current speed and direction the fish is swimming.")] [SerializeField] private Vector2 fishVelocity;
        [Tooltip("The current the depth of the fish.")] [SerializeField] private float fishDepth;
        [Tooltip("The minimum depth the fish swims at, with respect to the surface.")] [SerializeField] private float fishMinDepth;
        [Tooltip("The maximum depth the fish can swim at, with respect to the surface.")] [SerializeField] private float fishMaxDepth;
        [Tooltip("The weight of the fish, this will determine how many pieces of fillet payer can extract from the fish and will play a factor in the difficulty of catching the fish.")] [SerializeField] private float fishWeight;
        #endregion
        #region "Getters and or Setters"
        public float FishWeight{get{return fishWeight;}}
        #endregion
        #region "Public Functions"

        public void Start()
        {
            //Attributes for fish to be later implemented as struct to make easier to apply similar attributes to other animal gameObjects.
            fishVelocity = new Vector2(0.0f, 0.0f);
            
            
        }
        #endregion
    }
}