using Com.ZiomtechStudios.ForgeExchange;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
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
        // Start is called before the first frame update
        void Start()
        {
            playerController = GetComponent<PlayerController>();
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}
