using JetBrains.Annotations;
using UnityEngine;

public class WeaponController : ItemController
{
<<<<<<< Updated upstream
    public class WeaponController : ItemController
    {
        #region Private Serialized Fields
        [SerializeField] private WeaponStruct weaponStruct;
        [SerializeField] private Animator m_Animator;
        [SerializeField] private SpriteRenderer m_SpriteRenderer;
        [SerializeField] private BoxCollider2D m_BoxCollider2D;
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
            m_BoxCollider2D = transform.Find("collider").gameObject.GetComponent<BoxCollider2D>();
            playerAttackCont = transform.parent.parent.GetComponent<PlayerAttackController>();
            transform.parent.parent.TryGetComponent<AmmoController>(out ammoCont);
            if (ammoCont)
            {
               ammoCont.AmmoPrefab = playerAttackCont.PlayerCont.OffHandTuple.Item1;
               ammoCont.AmmoStruct = (AmmoStruct)playerAttackCont.PlayerCont.OffHandTuple.Item2.PrefabItemStruct;
            }
                
                
        }
        #endregion
=======
    #region Private Serialized Fields
    [SerializeField] private WeaponStruct weaponStruct;
    [SerializeField] private Animator m_Animator;
    [SerializeField] private SpriteRenderer m_SpriteRenderer;
    [SerializeField] private BoxCollider2D m_BoxCollider2D;
    [SerializeField] private PlayerAttackController playerAttackCont;
    #endregion
    #region Getters/Setters
    public WeaponStruct m_WeaponStruct { get { return weaponStruct; } }
    public Animator WeaponAnimator { get { return m_Animator; } }
    public SpriteRenderer WeaponSpriteRenderer { get { return m_SpriteRenderer; } }
    public float ApplyBaseDmg(){
        return Random.Range(weaponStruct.minBaseDamage, weaponStruct.maxBaseDamage);
>>>>>>> Stashed changes
    }
    #endregion
    #region Private Methods
    private void Start()
    {
        m_Animator = GetComponent<Animator>();
        m_SpriteRenderer = GetComponent<SpriteRenderer>();
        m_BoxCollider2D = transform.Find("collider").gameObject.GetComponent<BoxCollider2D>();
        playerAttackCont = transform.parent.parent.GetComponent<PlayerAttackController>();
    }
    #endregion
}