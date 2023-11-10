using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animator))]
    public class PlayerController : MonoBehaviour
    {
        #region Private Serialized Fields
        [Header("Player Movement")]
        [SerializeField] private bool isMoving;
        [SerializeField] private bool isRunning;
        [SerializeField] private Vector2 lookDir;
        [SerializeField] private Vector2 moveDir;
        [SerializeField] private float walkSpeed;
        [SerializeField] private float runSpeed;
        [SerializeField] private float interactDist;
        [SerializeField] private bool holdingItem;
        [Header("Player Interaction/Inventory")]
        [SerializeField] private bool usingWorkstation;
        [SerializeField] private GameObject holdingPrefab;
        [SerializeField] private ItemController holdingCont;
        [SerializeField] private InventoryController m_InventoryCont;
        [SerializeField] private BoxCollider2D m_Collider;
        [SerializeField] private PlayerInput playerInput;
        [SerializeField] private PlayerUIController playerUIController;
        [SerializeField] private string backPackObjPath;
        [SerializeField] private BackpackController backpackCont;
        [SerializeField] private PlayerAttackController playerAttackCont;
        #endregion
        #region Private Fields
        private Animator m_Animator;
        private int lookXHash, lookYHash, isMovingHash, moveXHash, moveYHash;
        private int layerMask;
        private RaycastHit2D hit;
        private GameObject backPackObj;
        private void MovePlayer(bool moving)
        {

            if(moving)
            {
                m_Animator.SetBool(isMovingHash, true);
                m_Animator.SetFloat(moveXHash, moveDir.x);
                m_Animator.SetFloat(moveYHash, moveDir.y);
                transform.Translate((isRunning ? runSpeed : 1.00f) * Time.deltaTime * walkSpeed * (isMoving?1.00f:0.00f) * moveDir);
            }
            else
            {
                m_Animator.SetBool(isMovingHash, false);
                m_Animator.SetFloat(lookXHash, lookDir.x);
                m_Animator.SetFloat(lookYHash, lookDir.y);
            }
            if(playerAttackCont.HasWeapon)
                playerAttackCont.UpdateWeaponAnim();
            }

        #endregion
        #region Public Members
        public void Immobolize()
        {
            isMoving = false;
        }
        public void Mobolize()
        {
            isMoving = true;
        }

        public void OnMove(InputAction.CallbackContext context)
        {
            ///<summary>
            ///Player Movement
            ///Player movement input taken as 2D Vector and is translted to movement of gameObject.
            ///The last dir the player moves in is the players looking direction.
            ///Rounding the value of the given direction to the nearest integer. Range of -1 to 1 implied since vector is based on joystick interaction.
            ///If the component of the vector is negative make sure to carry that over once the magnitude has been rounded.
            ///Personal choice: When the direction of movement of diagonal, prevent player movement. Might omit this in future builds.
            ///</summary>
            moveDir = context.ReadValue<Vector2>();
            float moveDirX = ((Mathf.Abs(moveDir.x) >= 0.5f) ? (1.00f) : (0.0f)) * ((moveDir.x > 0.0f) ? (1.00f) : (-1.00f));
            float moveDirY = ((Mathf.Abs(moveDir.y) >= 0.5f) ? (1.00f) : (0.0f)) * ((moveDir.y > 0.0f) ? (1.00f) : (-1.00f));
            moveDir = new Vector2(moveDirX, moveDirY);
            //Detect if the player is attempting to move diagonal so we can avoid it.
            bool isMovingDiag = ((Mathf.Abs(moveDirX) == 1.00f) && (Mathf.Abs(moveDirY) == 1.00f));
            moveDir = (isMovingDiag) ? (Vector2.zero) : (new Vector2(moveDirX, moveDirY));
            isMoving = (moveDir != Vector2.zero);
            lookDir = (isMoving && !usingWorkstation) ? (moveDir) : (lookDir);
        }
        public void ToggleRun(InputAction.CallbackContext context)
        {
            if (context.started)
                isRunning = true;
            else if (context.canceled)
                isRunning = false;
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
        public Animator PlayerAnimator { get { return m_Animator; } }
        public PlayerAttackController PlayerAtkCont { get { return playerAttackCont; } }
        public Vector2 LookDir { get { return lookDir; } }
        public bool IsMoving { get { return isMoving; } set { isMoving = value; } }
        public bool UsingWorkstation { get { return usingWorkstation; } set {  usingWorkstation = value; } }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            m_InventoryCont = transform.Find("Main Camera/Canvas/InventorySlots").gameObject.GetComponent<InventoryController>();
            playerUIController = gameObject.GetComponent<PlayerUIController>();
            lookDir = -transform.up;
            m_Animator = gameObject.GetComponent<Animator>();
            lookXHash = Animator.StringToHash("LookX");
            lookYHash = Animator.StringToHash("LookY");
            moveXHash = Animator.StringToHash("MoveX");
            moveYHash = Animator.StringToHash("MoveY");
            isMoving = false;
            isMovingHash = Animator.StringToHash("isMoving");
            layerMask = ((1 << LayerMask.NameToLayer("workstation")) | (1 << LayerMask.NameToLayer("stockpile")) | (1 << LayerMask.NameToLayer("bounds")));
            m_Collider = GetComponent<BoxCollider2D>();
            backPackObj = transform.Find(backPackObjPath).gameObject;
            backpackCont = backPackObj.GetComponent<BackpackController>();
            playerInput = GetComponent<PlayerInput>();
            playerAttackCont = GetComponent<PlayerAttackController>();
        }
        // Update is called once per frame
        void Update()
        {
            //Is the player looking at a interactable object + within an interactable distance?
            hit = Physics2D.Raycast(transform.position, lookDir, interactDist, layerMask);
            //If player wants to move
            if (isMoving)
            {
                //If player is touching bounds and the player is trying to move towards the bounds
                if ((m_Collider.IsTouchingLayers(layerMask)) && (hit.transform != null))
                    MovePlayer(false);
                //The player is either no longer touching bounds or is attempting to walk away from bounds
                else
                    MovePlayer(true);
            }
            else if (!isMoving && m_Animator.GetBool(isMovingHash))
                MovePlayer(false);
        }
    }
}