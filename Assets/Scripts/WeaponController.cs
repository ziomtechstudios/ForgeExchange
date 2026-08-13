using JetBrains.Annotations;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class WeaponController : ItemController
    {
        #region Private Serialized Fields
        [SerializeField] private WeaponStruct weaponStruct;
        [SerializeField] private Animator m_Animator;
        [SerializeField] private SpriteRenderer m_SpriteRenderer;
        [SerializeField] [CanBeNull] private BoxCollider2D m_BoxCollider2D;
        [SerializeField] private PlayerAttackController playerAttackCont;
        [SerializeField] [CanBeNull] private AmmoController ammoCont;
        #endregion
        #region Getters/Setters
        public WeaponStruct m_WeaponStruct { get { return weaponStruct; } }
        public Animator WeaponAnimator { get { return m_Animator; } }
        public SpriteRenderer WeaponSpriteRenderer { get { return m_SpriteRenderer; } }
        public AmmoController AmmoCont { get { return ammoCont; } }
        public float ApplyBaseDmg(){
            return Random.Range(weaponStruct.minBaseDamage, weaponStruct.maxBaseDamage);
        }
        #endregion
        #region Private Methods


        private void Start()
        {
            m_Animator = GetComponent<Animator>();
            m_SpriteRenderer = GetComponent<SpriteRenderer>();
            transform.Find("collider")?.TryGetComponent<BoxCollider2D>(out  m_BoxCollider2D);
            playerAttackCont = transform.parent.parent.GetComponent<PlayerAttackController>();
            transform.TryGetComponent(out ammoCont);
            if (ammoCont)
            {
               ammoCont.AmmoPrefab = playerAttackCont.PlayerCont.OffHandTuple.Item1;
               ammoCont.AmmoStruct = (AmmoStruct)playerAttackCont.PlayerCont.OffHandTuple.Item2.PrefabItemStruct;
            }
                
                
        }
        #endregion
    }
}
