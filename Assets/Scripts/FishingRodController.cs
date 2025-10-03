using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public class FishingRodController : ItemController
    {
        #region "Private Fields"
        [SerializeField] private Animator m_Animator;
        [SerializeField] private float curReeledAmnt;
        [SerializeField] private float maxReelAmnt;
        // Start is called before the first frame update
        private int isRodCastingHash, isRodReelingHash, isRodFullyReeledHash, lookDirXHash, lookDirYHash;
        #endregion
        #region "Public Getters/Setters"
        public int IsRodReelingHash { get { return isRodReelingHash;} set { isRodReelingHash = value;}}
        public int IsRodCastingHash { get { return isRodCastingHash;} set { isRodCastingHash =value;}}
        public int IsRodFullyReeledHash {get { return isRodFullyReeledHash; } set { isRodFullyReeledHash = value;}}
        public float MaxReelAmnt { get { return maxReelAmnt;}}
        public float CurReeledAmnt{ get { return curReeledAmnt;} set{curReeledAmnt = value;}}
        public Animator M_Animator{set{m_Animator = value;}get{return m_Animator;}}
        #endregion
        public void CastRod(PlayerController playerCont){
            m_Animator.SetTrigger(isRodCastingHash);
            m_Animator.SetBool(isRodReelingHash, false);
            m_Animator.SetBool(isRodFullyReeledHash, false);
            m_Animator.SetFloat(lookDirXHash, playerCont.LookDir.x);
            m_Animator.SetFloat(lookDirYHash, playerCont.LookDir.y);
        }
        public void RodReeling(bool isReeling){
            m_Animator.SetBool(IsRodReelingHash, isReeling);
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
        void OnCollisionEnter2D(Collision2D other)
        {
            if(other.gameObject.CompareTag("Spawner") && LayerMask.LayerToName(other.gameObject.layer) == "Water")
                Debug.Log("The player's fishing line is contacting a fish spawner.");
        }
    }
}
