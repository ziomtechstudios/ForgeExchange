using UnityEngine;


namespace Com.ZiomtechStudios.ForgeExchange 
{
    public class StaminaController : MonoBehaviour
    {
        #region "Private Serialized Members"
        [SerializeReference] private PlayerController playerController;
        [SerializeField] private float stamina;
        [SerializeField] private float maxStamina;
        [Range(0.0f, 1.0f)] [SerializeField] private float burnRate;
        #endregion
        #region "Getters/Setters"
        public float Stamina {  get { return stamina; } set {  stamina = value; } }
        public float MaxStamina { get { return maxStamina; } }
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            playerController = GetComponent<PlayerController>();
            stamina = maxStamina;
        }

        // Update is called once per frame
        private void FixedUpdate()
        {
            if (playerController.CanRun && playerController.IsMoving && (stamina > 0.0f))
                stamina -= burnRate;
            else if (!playerController.CanRun && (stamina < maxStamina))
                stamina += (burnRate / 2);
        }
    }
}
