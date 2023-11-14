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
        #endregion
        #region "Getter/Setters"
        public float HP { get { return hp; } set {  hp = value; } }
        #endregion
        #region "Private members"
        private int isDamagedHash, layerMask;
        #endregion

        void Start()
        {
            enemyCollider = GetComponent<BoxCollider2D>();
            enemyAnimator = GetComponent<Animator>();
            isDamagedHash = Animator.StringToHash("isDamaged");
            hp = 100.00f;
            layerMask = (1 << LayerMask.NameToLayer("weapon"));
        }

        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (enemyCollider.IsTouchingLayers(layerMask))
                enemyAnimator.SetTrigger(isDamagedHash);
        }

    }
}
