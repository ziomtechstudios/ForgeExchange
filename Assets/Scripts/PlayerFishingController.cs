
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(PlayerInteractionController))]
    public class PlayerFishingController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private PlayerInteractionController playerInteractionCont;
        [SerializeField] private FishingRodController fishingRodCont;


        #endregion
        #region "Private Members"

        private int isReelingHash, isFullyReeledHash;
        private int isCastingHash;
        private GameObject fishingRod;
        #endregion
        #region "Public Funcs"
        public void IsFullyReeled(){
            playerInteractionCont.PlayerCont.M_Animator.SetBool(isFullyReeledHash, (fishingRodCont.CurReeledAmnt+=0.1f) >= fishingRodCont.MaxReelAmnt);
            fishingRodCont.M_Animator.SetBool(fishingRodCont.IsRodFullyReeledHash, playerInteractionCont.PlayerCont.M_Animator.GetBool(IsFullyReeledHash));
            fishingRodCont.CurReeledAmnt = fishingRodCont.M_Animator.GetBool(fishingRodCont.IsRodFullyReeledHash) ? 0.0f: fishingRodCont.CurReeledAmnt;
            fishingRodCont.RodReeling(fishingRodCont.CurReeledAmnt != 0.0f);
        }

        public void ReelingRod(InputAction.CallbackContext context){
            if(!playerInteractionCont.PlayerCont.M_Animator.GetBool(IsFullyReeledHash))
            {
                if(context.started){
                    fishingRodCont.RodReeling(true);
                    playerInteractionCont.PlayerCont.M_Animator.SetBool(IsReelingHash, true);
                }
                else if(context.canceled || playerInteractionCont.PlayerCont.M_Animator.GetBool(isFullyReeledHash)){
                    fishingRodCont.RodReeling(false);
                    playerInteractionCont.PlayerCont.M_Animator.SetBool(isReelingHash, false);
                }
            }
            else
                fishingRodCont.RodReeling(false);
        }
        public void CastingRod(){
            if(fishingRod == null){
                fishingRod = Instantiate(playerInteractionCont.PlayerCont.HoldingPrefab, transform.Find("HoldingItem"), false);
                fishingRodCont = fishingRod.GetComponent<FishingRodController>();
            }
            fishingRodCont.CastRod(playerInteractionCont.PlayerCont);
        }   
        #endregion
        #region "Getters/Setters"
        public int IsReelingHash{get{return isReelingHash;} set{isReelingHash = value;} }
        public int IsFullyReeledHash{get{return isFullyReeledHash;} set{isFullyReeledHash = value;} }
        public int IsCastingHash{get{return isCastingHash;} set{isCastingHash = value;}}
        #endregion

        // Start is called before the first frame update
        void Start()
        {
            playerInteractionCont = GetComponent<PlayerInteractionController>();
            isFullyReeledHash = Animator.StringToHash("fullyReeled");
            isReelingHash = Animator.StringToHash("isReeling");
            isCastingHash = Animator.StringToHash("isCasting");
        }
        void FixedUpdate(){
            if(playerInteractionCont.PlayerCont.M_Animator.GetBool(isReelingHash))
                IsFullyReeled();
        }

    }
}
