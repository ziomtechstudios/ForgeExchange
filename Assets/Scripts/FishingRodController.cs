using System.Collections;
using System.Collections.Generic;
using Com.ZiomtechStudios.ForgeExchange;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public class FishingRodController : ItemController
    {
        [SerializeField] Animator m_Animator;
        // Start is called before the first frame update
        private int isRodCastingHash, isRodReelingHash, isRodFullyReeledHash, lookDirXHash, lookDirYHash;

        public int IsRodReelingHash { get { return isRodReelingHash;} set { isRodReelingHash = value;}}
        public int IsRodCastingHash { get { return isRodCastingHash;} set { isRodCastingHash =value;}}
        public int IsRodFullyReeledHash {get { return isRodFullyReeledHash; } set { isRodFullyReeledHash = value;}}

        public void CastRod(PlayerController playerCont){
            m_Animator.SetTrigger(isRodCastingHash);
            m_Animator.SetBool(isRodReelingHash, false);
            m_Animator.SetBool(isRodFullyReeledHash, false);
            m_Animator.SetFloat(lookDirXHash, playerCont.LookDir.x);
            m_Animator.SetFloat(lookDirYHash, playerCont.LookDir.y);
        }

        void Awake()
        {
            m_Animator = GetComponent<Animator>();
            isRodCastingHash = Animator.StringToHash("isRodCasting");
            isRodReelingHash = Animator.StringToHash("isRodReeling");
            isRodFullyReeledHash = Animator.StringToHash("isRodFullyReeled");
            lookDirXHash = Animator.StringToHash("LookX");
            lookDirYHash = Animator.StringToHash("LookY");
        }

        // Update is called once per frame
        void Update()
        {
            
        }
    }
}
