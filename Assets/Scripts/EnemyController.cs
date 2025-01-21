 using UnityEngine;
using Unity.MLAgents;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animator))]
    [RequireComponent(typeof(SpriteRenderer))]
    [RequireComponent(typeof(BoxCollider2D))]
    [RequireComponent(typeof(HealthController))]
    public class EnemyController : BeingController
    {
        #region "Private Serialized Fields"
        [SerializeField] private BoxCollider2D enemyCollider;
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
        private int layerMask;
  
        #endregion
        void Start()
        {
            enemyCollider = GetComponent<BoxCollider2D>();
            M_Animator = GetComponent<Animator>();
            IsDamagedHash = Animator.StringToHash("isDamaged");
            healthController = GetComponent<HealthController>();
            layerMask = 1 << LayerMask.NameToLayer("weapon");
            healthController.HealthBarAmnt = healthController.HP / healthController.MaxHP;
            isAttacking = false;
        }
        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (enemyCollider.IsTouchingLayers(layerMask))
            {
                healthController.InstDmg = collision.collider.transform.parent.gameObject.GetComponent<WeaponController>().ApplyBaseDmg();
                healthController.HP -= healthController.InstDmg;
                healthController.HealthBarAmnt = healthController.HP / healthController.MaxHP;
                healthController.IsDamaged = true;
                M_Animator.SetBool(IsDamagedHash, healthController.IsDamaged);
                healthController.FlashDamage();
            }
        }

    }
}
