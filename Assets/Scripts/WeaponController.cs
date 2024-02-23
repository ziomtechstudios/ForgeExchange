using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class WeaponController : ItemController
    {
        #region Private Serialized Fields
        [SerializeField] private WeaponStruct weaponStruct;
        [SerializeField] private Animator m_Animator;
        [SerializeField] private SpriteRenderer m_SpriteRenderer;
        #endregion
        #region Getters/Setters
        public WeaponStruct m_WeaponStruct { get { return weaponStruct; } }
        public Animator WeaponAnimator { get { return m_Animator; } }
        public SpriteRenderer WeaponSpriteRenderer { get { return m_SpriteRenderer; } }
        public float ApplyBaseDmg(){
            return Random.Range(weaponStruct.minBaseDamage, weaponStruct.maxBaseDamage);
        }
        #endregion
        private void Start()
        {
            m_Animator = GetComponent<Animator>();
            m_SpriteRenderer = GetComponent<SpriteRenderer>();
        }
    }
}
