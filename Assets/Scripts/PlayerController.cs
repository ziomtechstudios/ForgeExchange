
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animator))]
    public class PlayerController : BeingController
    {
        #region Private Serialized Fields  
        [Header("Player Movement")]
        [SerializeField] private bool isRunning, canRun;
        [SerializeField] private Vector2 lookDir;
        [SerializeField] private Vector2 moveDir;
        [SerializeField] private float walkSpeed;
        [SerializeField] private float runSpeed;
        [SerializeField] private float stamina;
        [SerializeField] private float maxStam;
        [SerializeField] private float interactDist;
        [SerializeField] private bool holdingItem;
        [Header("Player Interaction/Inventory")]
        [SerializeField] private bool usingWorkstation;
        [SerializeField] private GameObject holdingPrefab;
        [SerializeReference] private ItemController holdingCont;
        [SerializeReference] private InventoryController m_InventoryCont;
        [SerializeField] private BoxCollider2D m_Collider;
        [SerializeField] private PlayerInput playerInput;
        [SerializeReference] private PlayerUIController playerUIController;
        [SerializeField] private string backPackObjPath;
        [SerializeReference] private BackpackController backpackCont;
        [SerializeReference] private PlayerAttackController playerAttackCont;
        [SerializeReference] private PlayerInteractionController playerInteractionCont;
        [Header("Health/Stamina")]
        [SerializeField] private StaminaController playerStaminaCont;
        [Header("Player Audio")]
        [SerializeField] private AudioClip playerStoneSteps;
        [SerializeField] private AudioClip playerGrassSteps;
        #endregion
        #region Private Fields
        private int lookXHash, lookYHash, isMovingHash, moveXHash, moveYHash, isDeadHash, isFishingHash;
        private int layerMask;
        private RaycastHit2D hit;
        private GameObject backPackObj;
        //Parametric bool for moving represents object desire to move, IsMoving represents if obj meets conditions in order to move
        private void MovePlayer(bool moving)
        {
            if(moving)
            {
                M_Animator.SetBool(isMovingHash, true);
                M_Animator.SetFloat(moveXHash, moveDir.x);
                M_Animator.SetFloat(moveYHash, moveDir.y);
                isRunning = (canRun && playerStaminaCont.Stamina > 0.0f) ? (true) : false;
                transform.Translate((isRunning ? runSpeed : 1.00f) * Time.deltaTime * walkSpeed * (IsMoving ? 1.00f : 0.00f) * moveDir);
                TriggerSoundEffect();
            }
            else
            {
                M_Animator.SetBool(isMovingHash, false);
                M_Animator.SetFloat(lookXHash, lookDir.x);
                M_Animator.SetFloat(lookYHash, lookDir.y);
            }
            if (playerAttackCont.HasWeapon)
                playerAttackCont.UpdateWeaponAnim();
        }
        private void TakeDamage(float amnt)
        {
            M_HealthCont.HP -= amnt;
            M_HealthCont.HealthBarAmnt = (M_HealthCont.HP / M_HealthCont.MaxHP);
            if (M_HealthCont.HP <= 0.0f)
                M_Animator.SetTrigger(isDeadHash);
        }
        private void OnCollisionEnter2D(Collision2D collision)
        {
            EnemyController enemyController = collision.gameObject.GetComponent<EnemyController>();
            if (collision.collider.IsTouchingLayers(1 << LayerMask.NameToLayer("enemy")) && enemyController.IsAttacking)
                TakeDamage(1.00f);
        }

        private void ApplyMovement(InputAction.CallbackContext context)
        {
            IsMoving = (moveDir != Vector2.zero);
            lookDir = (IsMoving && !usingWorkstation) ? (moveDir) : (lookDir);
        }
        #endregion
        #region Public Members

        public void OnMove(InputAction.CallbackContext context)
        {
            moveDir = context.ReadValue<Vector2>();
            ApplyMovement(context);
        }

        public void OnDPadMove(InputAction.CallbackContext context)
        {
            Debug.Log(InputActionType.Value);
            if (context.action.type == InputActionType.Value)
            {
                if (context.started && !context.canceled)
                    moveDir = context.ReadValue<Vector2>();
                else
                    moveDir = Vector2.zero;
                ApplyMovement(context);
            }
        }
        public void ToggleRun(InputAction.CallbackContext context)
        {
            if (context.started)
                canRun = true;
            else if (context.canceled)
                canRun = false;
        }
        public void TriggerSoundEffect(){
            if(M_DSpriteLayering.IsInside)
                M_AudioSource.PlayOneShot(playerStoneSteps, 0.5f);
        }
        #endregion
        #region "Getter and Setters"
        public RaycastHit2D PlayerLOS { get { return hit; } }
        public bool HoldingItem { get { return holdingItem; } set { holdingItem = value; } }
        public GameObject HoldingPrefab { get { return holdingPrefab; } set { holdingPrefab = value; } }
        public ItemController HoldingCont { get { return holdingCont; } set { holdingCont = value; } }
        public BackpackController PlayerBackPackCont { get { return backpackCont; } }
        public InventoryController PlayerInventoryCont { get { return m_InventoryCont; } }
        public PlayerUIController PlayerUICont { get { return playerUIController; } }
        public PlayerInput PlayerInput { get { return playerInput; } }
        public PlayerAttackController PlayerAtkCont { get { return playerAttackCont; } }
        public PlayerInteractionController PlayerInteractionCont{get{return playerInteractionCont;}}
        public Vector2 LookDir { get { return lookDir; } }
        public bool UsingWorkstation { get { return usingWorkstation; } set { usingWorkstation = value; } }
        public bool CanRun { get { return canRun; } set { isRunning = canRun; } }
        public StaminaController PlayerStaminaCont { get { return playerStaminaCont; } }
        public int IsFishingHash { get { return isFishingHash;} set{isFishingHash = value;}} 
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_InventoryCont = transform.Find("Main Camera/Canvas/InventorySlots").gameObject.GetComponent<InventoryController>();
            playerUIController = gameObject.GetComponent<PlayerUIController>();
            //When user logs into game I want player sprite to face the screen, personal preference
            lookDir = -transform.up;
            M_Animator = gameObject.GetComponent<Animator>();
            lookXHash = Animator.StringToHash("LookX");
            lookYHash = Animator.StringToHash("LookY");
            moveXHash = Animator.StringToHash("MoveX");
            moveYHash = Animator.StringToHash("MoveY");
            isDeadHash = Animator.StringToHash("isDead");
            isFishingHash = Animator.StringToHash("isFishing");
            IsMoving = false;
            isMovingHash = Animator.StringToHash("isMoving");
            layerMask = (1 << LayerMask.NameToLayer("workstation")) | (1 << LayerMask.NameToLayer("stockpile")) | (1 << LayerMask.NameToLayer("bounds")) | (1 << LayerMask.NameToLayer("enemy")) | (1 << LayerMask.NameToLayer("chest"));
            m_Collider = GetComponent<BoxCollider2D>();
            backPackObj = transform.Find(backPackObjPath).gameObject;
            backpackCont = backPackObj.GetComponent<BackpackController>();
            playerInput = GetComponent<PlayerInput>();
            playerAttackCont = GetComponent<PlayerAttackController>();
            M_HealthCont = GetComponent<HealthController>();
            playerStaminaCont = GetComponent<StaminaController>();
            playerInteractionCont = GetComponent<PlayerInteractionController>();
            M_AudioSource = GetComponent<AudioSource>();
            M_DSpriteLayering = GetComponent<DynamicSpriteLayering>();
        }
        // Update is called once per frame
        void Update()
        {
            //Is the player looking at an interactable object + within an interactable distance?
            hit = Physics2D.Raycast(transform.position, lookDir, interactDist, layerMask);
            //If player wants to move
            if (IsMoving && (M_HealthCont.HP > 0.0f))
            {
                //If player is touching bounds and the player is trying to move towards the bounds
                if (m_Collider.IsTouchingLayers(layerMask) && hit.transform != null)
                    MovePlayer(false);
                //The player is either no longer touching bounds or is attempting to walk away from bounds
                else
                    MovePlayer(true);
            }
            else if (!IsMoving && M_Animator.GetBool(isMovingHash))
                MovePlayer(false);
            
            

        }
    }
}