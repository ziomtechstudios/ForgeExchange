using Com.ZiomtechStudios.ForgeExchange;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine.UI;
using UnityEngine;


namespace Com.ZiomtechStudios.ForgeExchangeP
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
        void FixedUpdate()
        {
            if (playerController.IsRunning && playerController.IsMoving && stamina > 0.0f)
                stamina -= burnRate;
            else if (!playerController.IsRunning && stamina < maxStamina)
                stamina += (burnRate / 2);
        }
    }
}
