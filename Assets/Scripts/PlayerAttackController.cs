using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(PlayerController))]
    public class PlayerAttackController : MonoBehaviour
    {
        #region "Private Serialized Fields
        [SerializeField] private PlayerController m_PlayerCont;
        [SerializeField] private WeaponController m_WeaponCont;
        [SerializeField] private bool alreadyAttacking;
        #endregion
        #region "Private Fields"
        private int playerAttackHash, weaponAttackHash, LookXHash, LookYHash, weaponTypeHash, comboAtkHash;
        private bool hasWeapon;
        private bool alreadyDamagedEnemy;
        private GameObject playerWeapon;
        private PlayerInteractionController playerInteractionCont;
        private float timeBetweenAtks;
        #endregion
        #region "Getters/Setters"
        public bool HasWeapon { get { return hasWeapon; } set{hasWeapon = value;}}
        public bool AlreadyAttacking { get { return alreadyAttacking; } set { alreadyAttacking = value; } }
        public bool AlreadyDamagedEnemy
        {
            get { return alreadyDamagedEnemy;}
            set { alreadyDamagedEnemy = value; }
        }
        #endregion
        #region "Public Fields"
        public void EquipWeapon()
        {
            playerWeapon = Instantiate(m_PlayerCont.HoldingPrefab, transform.Find("HoldingItem"), false);
            m_WeaponCont = playerWeapon.GetComponent<WeaponController>();
            m_PlayerCont.M_Animator.SetInteger(weaponTypeHash, (int)m_WeaponCont.m_WeaponStruct.weaponType);
            hasWeapon = true;
        }
        public void AllowAttack()
        {
            alreadyAttacking = false;
            alreadyDamagedEnemy = false;
        }
        public void UpdateWeaponAnim()
        {
            m_WeaponCont.WeaponAnimator.SetFloat(LookXHash, m_PlayerCont.LookDir.x);
            m_WeaponCont.WeaponAnimator.SetFloat(LookYHash, m_PlayerCont.LookDir.y);
            m_WeaponCont.WeaponAnimator.SetTrigger(weaponAttackHash);
        }
        public void OnAttack(InputAction.CallbackContext context)
        {
            //TODO: Set up logic at runtime for second attack for combo-light attack.
            // General logic for this is after player is allowed to attack again and they press attack input within some time period.
            // Once second attack in combo is triggered we play attack from same blend tree but at a higher speed in reverse for melee and forward for range.
            //The player is pressing the attack button and has a weapon
            if (context.started && m_WeaponCont)
            {
                if (!alreadyAttacking)
                {
                    Debug.Log("We are triggering the first attack.");
                    m_PlayerCont.M_Animator.SetTrigger(playerAttackHash);
                    alreadyAttacking = true;
                    timeBetweenAtks = Time.time;
                    return;
                }
                if (((timeBetweenAtks -= Time.time) <= 2.00f) && alreadyAttacking)
                {
                    Debug.Log("We are triggering the second attack for a combo attack.");
                    m_PlayerCont.M_Animator.SetTrigger(comboAtkHash);
                }
            }
        }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_PlayerCont = GetComponent<PlayerController>();
            playerInteractionCont = GetComponent<PlayerInteractionController>();
            playerAttackHash = Animator.StringToHash("isAttacking");
            weaponAttackHash = Animator.StringToHash("isWAttacking");
            LookXHash = Animator.StringToHash("LookX");
            LookYHash = Animator.StringToHash("LookY");
            weaponTypeHash = Animator.StringToHash("weaponType");
            comboAtkHash = Animator.StringToHash("isComboAttack");
            alreadyAttacking = false;
            alreadyDamagedEnemy = false;
            timeBetweenAtks = 0.0f;
        }
    }
}