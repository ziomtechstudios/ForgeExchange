using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(PlayerInteractionController))]
    public class PlayerFishingController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private PlayerInteractionController playerInteractionCont;
                
        #endregion
        #region "Private Members"


        #endregion
        #region "Private Funcs"
        #endregion
        private void ReelingRod(){
            playerInteractionCont.PlayerCont.M_Animator.SetBool(playerInteractionCont.PlayerCont.IsFishingHash, false);
            playerInteractionCont.PlayerCont.IsFishing = false;
        }
        // Start is called before the first frame update
        void Start()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
            
        }
    }
}
