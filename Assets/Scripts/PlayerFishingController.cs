
using System;
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
        [SerializeField] private float reelingIncrmt;
        [SerializeField] [Range(0.0f, 1.0f)] private float lineDurability;
        

        #endregion 
        #region "Getters/Setters"
        public FishingRodController FishingRodCont{get{return fishingRodCont;}}
        #endregion
        #region"Private Members"
        private int isReelingHash, isFullyReeledHash;
        private int isCastingHash;
        private GameObject fishingRod;
        private bool isFullyReeled;
        #endregion
        #region "Public Funcs"
        public void IsFullyReeled()
        {
            ///<summary>
            ///We check to see if the player has fully reeled in the line.
            ///First increment ammount the line has currently reeled and then check to see if this reaches or exceeds the maximum.
            ///Pass the boolean result into the animation controller of both the player and the fishing rod.
            ///If the line is fuly reeled reset the reeled amount to zero
            ///</summary>
            isFullyReeled = ((fishingRodCont.CurReeledAmnt += reelingIncrmt) >= fishingRodCont.MaxReelAmnt);
            playerInteractionCont.PlayerCont.M_Animator.SetBool(isFullyReeledHash, isFullyReeled);
            fishingRodCont.M_Animator.SetBool(fishingRodCont.IsRodFullyReeledHash, isFullyReeled);
            fishingRodCont.RodReeling(!isFullyReeled);
            fishingRodCont.CurReeledAmnt = isFullyReeled ? 0.0f : fishingRodCont.CurReeledAmnt;
        }
        public void ReelingRod(InputAction.CallbackContext context){
            if(!isFullyReeled)
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
            else{
                fishingRodCont.RodReeling(false);
                playerInteractionCont.PlayerCont.M_Animator.SetBool(isReelingHash, false);
            }
        }

        public void KeepingTheBite(InputAction.CallbackContext context)
        {
            Vector2 inputVector = context.ReadValue<Vector2>();
            playerInteractionCont.PlayerCont.PlayerUICont.CurZoneRectTransform.Translate(
                new Vector3(
                    inputVector.x + playerInteractionCont.PlayerCont.PlayerUICont.CurZoneRectTransform.localPosition.x,
                    0.0f, 0.0f));
            //TODO Find appropriate and simple calculation for degradation of Rod when reeling inplayer a Bite Based on player input and statisfying conditions.
            ///<summary>
            /// If the vertical line (rect transform) that represents players applicance of tension on the fishing line overlaps the rec transform of the inter oscilating horizontal chunk.
            /// We then apply minimal wear to durability of the line.
            /// If the rect transforms do not overlap we accelerate or increase the rate of durability loss of line.
            /// If the player fully reels in the line without fully draining durability the player has ability to successfully reel in their bite.
            /// If not the player looses the fish.
            /// Player depleting line durability is garunteed to loose bait and cause loss of durability to fishing rod itself.
            /// </summary> 
            bool isProperTension =
                playerInteractionCont.PlayerCont.PlayerUICont.CurZoneRectTransform.rect.Overlaps(
                    playerInteractionCont.PlayerCont.PlayerUICont.GoodZoneRectTransform.rect, true);
            lineDurability -= ((!isProperTension ? 2.00f : 0.00f) + 0.01f);
        }
        public void CastingRod(){
            if(fishingRod == null){
                fishingRod = Instantiate(playerInteractionCont.PlayerCont.HoldingPrefab, transform.Find("HoldingItem"), false);
                fishingRodCont = fishingRod.GetComponent<FishingRodController>();
                fishingRodCont.CastRod(playerInteractionCont.PlayerCont);
                lineDurability = 1.0f;
            }
        }   
        /// <summary>
        /// This function is intended to be called when the last frame of the player's catching animation is played.
        /// This player's fishing status is set to false and the player's will unequip their fishing pole.
        /// This way if the player wants to engage in fishing they just have to re-equip the fishing rod and press the interaction button.
        /// </summary>
        public void ReelInRod(){
            playerInteractionCont.PlayerCont.IsFishing = false;
            playerInteractionCont.PlayerCont.M_Animator.SetBool(playerInteractionCont.PlayerCont.IsFishingHash, false);
            playerInteractionCont.PlayerCont.M_Animator.SetBool(isFullyReeledHash, false);
            fishingRodCont.M_Animator.SetBool(fishingRodCont.IsRodFullyReeledHash, false);
            fishingRodCont.RodReeling(false);
            // Unequip the fishing rod within the quickslot it resides it.
            playerInteractionCont.PlayerCont.PlayerInventoryCont.SelectSlot(-1);
            // In case player no longer wants to fish they can now revert to other activities
            playerInteractionCont.PlayerCont.PlayerInput.SwitchCurrentActionMap("ShopControls");
            ///<summary>
            /// Satisfies condition for casting rod if fishing is done consecutively.
            /// This also ensures that if the player where to equip another item it will be the only gameObject held within the scene @ runtime.
            //.</summary>
            if (lineDurability > 0.0f && fishingRodCont.HasBite)
            {
                Debug.Log("The Player has successfully reeled in a fish!");
                fishingRodCont.HasBite = false;
                playerInteractionCont.PlayerCont.PlayerInventoryCont.SlotItem(fishingRodCont.CurFishSpawnerCont.SpawnMob(fishingRodCont.PrefabItemStruct.itemSubTag+"_"+fishingRodCont.PrefabItemStruct.itemTag));
            }
            isFullyReeled = false;
            fishingRodCont.CurFishSpawnerCont = null;
            Destroy(fishingRod);
            fishingRod = null;
        }
        #endregion
        #region "Getters/Setters"
        public int IsReelingHash{get{return isReelingHash;} set{isReelingHash = value;} }
        public int IsFullyReeledHash{get{return isFullyReeledHash;} set{isFullyReeledHash = value;} }
        public int IsCastingHash{get{return isCastingHash;} set{isCastingHash = value;}}
        public float ReelingIncrmt{get{return reelingIncrmt;}set{reelingIncrmt = value;} }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            playerInteractionCont = GetComponent<PlayerInteractionController>();
            isFullyReeledHash = Animator.StringToHash("fullyReeled");
            isReelingHash = Animator.StringToHash("isReeling");
            isCastingHash = Animator.StringToHash("isCasting");
            isFullyReeled = false;
        }
        void Update(){
            if(playerInteractionCont.PlayerCont.M_Animator.GetBool(isReelingHash) && !isFullyReeled)
                IsFullyReeled();
        }

    }
}
