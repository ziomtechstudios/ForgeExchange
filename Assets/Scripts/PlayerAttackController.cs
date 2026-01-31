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
        private int playerAttackHash, weaponAttackHash, LookXHash, LookYHash, weaponTypeHash;
        private bool hasWeapon;
        private GameObject playerWeapon;
        private PlayerInteractionController playerInteractionCont;
        #endregion
        #region "Getters/Setters"
        public bool HasWeapon { get { return hasWeapon; } set{hasWeapon = value;}}
        public bool AlreadyAttacking { get { return alreadyAttacking; } set { alreadyAttacking = value; } }
        #endregion
        #region "Public Fields"
        public void EquipWeapon()
        {
            playerWeapon = Instantiate(m_PlayerCont.HoldingPrefab, transform.Find("HoldingItem"), false);
            m_WeaponCont = playerWeapon.GetComponent<WeaponController>();
            m_PlayerCont.M_Animator.SetInteger(weaponTypeHash, m_WeaponCont.m_WeaponStruct.weaponType);
            hasWeapon = true;
        }
        public void AllowAttack(){
            alreadyAttacking = false;
            //Debug.Log("THe player has finished attacking and is free to attack again!");
        }
        public void UpdateWeaponAnim()
        {
            m_WeaponCont.WeaponAnimator.SetFloat(LookXHash, m_PlayerCont.LookDir.x);
            m_WeaponCont.WeaponAnimator.SetFloat(LookYHash, m_PlayerCont.LookDir.y);
            m_WeaponCont.WeaponAnimator.SetTrigger(weaponAttackHash);
        }
        public void OnAttack(InputAction.CallbackContext context)
        {
            //The player is pressing the attack button and has a weapon
            if (context.started && (m_WeaponCont != null) && !alreadyAttacking)
            {
                m_PlayerCont.M_Animator.SetTrigger(playerAttackHash);
                alreadyAttacking = true;
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
            alreadyAttacking = false;
        }
    }
}