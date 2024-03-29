using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public class BeingController : MonoBehaviour
    {
        [SerializeField] private Animator m_Animator;
        [SerializeField] private HealthController m_healthCont;
        [SerializeField] private AudioSource m_AudioSource;
        [SerializeField] private DynamicSpriteLayering m_DSpriteLayering;
        [SerializeField] private bool isMoving;
        [SerializeField] private bool nearShore;
        private int isDamagedHash;
        public Animator M_Animator{set{m_Animator = value;}get{return m_Animator;}}
        public int IsDamagedHash{set{isDamagedHash = value;}get{return isDamagedHash;}}
        public AudioSource M_AudioSource{set{m_AudioSource = value;}get{return m_AudioSource;}}
        public HealthController M_HealthCont{set{m_healthCont = value;}get{return m_healthCont;}}
        public DynamicSpriteLayering M_DSpriteLayering{set{m_DSpriteLayering = value;}get{return m_DSpriteLayering;}}
        public bool IsMoving{set{isMoving = value;}get{return isMoving;}}
        public bool NearShore{set{nearShore = value;}get{return nearShore;}}

    }
}
