using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(PlayerController))]
    public class PlayerAttackController : MonoBehaviour
    {
        #region "Private Serialized Fields
        [SerializeField] PlayerController m_PlayerCont;
        [SerializeField] WeaponController m_WeaponCont;
        #endregion
        #region "Private Fields"
        private int playerAttackHash, weaponAttackHash, LookXHash, LookYHash;
        private bool hasWeapon, alreadyAttacking;
        private GameObject playerWeapon;
        private PlayerInteractionController playerInteractionCont;
        #endregion
        #region "Getters/Setters"
        public bool HasWeapon { get { return hasWeapon; } }
        #endregion
        #region "Public Fields"
        public void EquipWeapon()
        {
            playerWeapon = Instantiate(m_PlayerCont.HoldingPrefab, transform.Find("HoldingItem"), false);
            m_WeaponCont = playerWeapon.GetComponent<WeaponController>();
            hasWeapon = true;
        }
        public void AllowAttack(){
            alreadyAttacking = false;
        }
        public void UnEquip()
        {
            Debug.Log("Unequiping weapon via player attack controller.");
            playerInteractionCont.UnEquipItem();
            Destroy(playerWeapon);
            hasWeapon = false;
            m_PlayerCont.PlayerInput.SwitchCurrentActionMap("ShopControls");
        }
        public void UpdateWeaponAnim()
        {
            m_WeaponCont.WeaponAnimator.SetFloat(LookXHash, m_PlayerCont.LookDir.x);
            m_WeaponCont.WeaponAnimator.SetFloat(LookYHash, m_PlayerCont.LookDir.y);
        }
        public void OnAttack(InputAction.CallbackContext context)
        {
            //The player is pressing the attakc button and has a weapon
            if (context.started && (m_WeaponCont != null) && !alreadyAttacking)
            {
                UpdateWeaponAnim();
                m_PlayerCont.M_Animator.SetTrigger(playerAttackHash);
                m_WeaponCont.WeaponAnimator.SetTrigger(weaponAttackHash);
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
            alreadyAttacking = false;
        }
    }
}