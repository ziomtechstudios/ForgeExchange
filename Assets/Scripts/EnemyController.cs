using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animator))]
    [RequireComponent(typeof(SpriteRenderer))]
    [RequireComponent(typeof(BoxCollider2D))]
    [RequireComponent(typeof(HealthController))]
    public class EnemyController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private BoxCollider2D enemyCollider;
        [SerializeField] private Animator enemyAnimator;
        [SerializeField] private PlayerUIStruct enemyUIStruct;
        [SerializeField] private HealthController healthController;
        [SerializeField] private bool isAttacking;
        #endregion
        #region "Getter/Setters"
        public PlayerUIStruct EnemyUIStruct { get { return enemyUIStruct; } set { enemyUIStruct = value; } }
        public HealthController HealthCont { get { return healthController; } }
        public bool IsAttacking { get { return isAttacking; } set { isAttacking = value; } }
        #endregion
        #region "Private members"
        private int isDamagedHash, layerMask;
        private float healthBarAmnt;
        #endregion
        void Start()
        {
            enemyCollider = GetComponent<BoxCollider2D>();
            enemyAnimator = GetComponent<Animator>();
            isDamagedHash = Animator.StringToHash("isDamaged");
            healthController = GetComponent<HealthController>();
            layerMask = (1 << LayerMask.NameToLayer("weapon"));
            healthController.HealthBarAmnt = (healthController.HP / healthController.MaxHP);
            isAttacking = false;
        }
        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (enemyCollider.IsTouchingLayers(layerMask))
            {
                healthController.HP -= (collision.collider.transform.parent.gameObject.GetComponent<WeaponController>().m_WeaponStruct.maxBaseDamage);
                healthController.HealthBarAmnt = (healthController.HP / healthController.MaxHP);
                enemyAnimator.SetTrigger(isDamagedHash);
                healthController.IsDamaged = true;
                healthController.FlashDamage();
            }
        }

    }
}
