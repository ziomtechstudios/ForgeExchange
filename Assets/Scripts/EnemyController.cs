using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudiosZiomtech.ForgeExchange 
{
    [RequireComponent(typeof(Animator))]
    [RequireComponent(typeof(SpriteRenderer))]
    [RequireComponent(typeof(BoxCollider2D))]
    public class EnemyController : MonoBehaviour
    {
        #region "Private Serialized Fields"
        [SerializeField] private float hp;
        [SerializeField] private BoxCollider2D enemyCollider;
        [SerializeField] private Animator enemyAnimator;
        [SerializeField] private PlayerUIStruct enemyUIStruct;
        [SerializeField] private float maxHP;
        #endregion
        #region "Getter/Setters"
        public float HP { get { return hp; } set {  hp = value; } }
        public PlayerUIStruct EnemyUIStruct { get { return enemyUIStruct; } set { enemyUIStruct = value; } }
        public float HealthBarAmnt { get { return healthBarAmnt; } }
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
            hp = maxHP;
            layerMask = (1 << LayerMask.NameToLayer("weapon"));
            healthBarAmnt = (hp / maxHP);
        }

        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (enemyCollider.IsTouchingLayers(layerMask))
            {
                healthBarAmnt = ((hp--)/maxHP);
                enemyAnimator.SetTrigger(isDamagedHash);
            }
        }

    }
}
