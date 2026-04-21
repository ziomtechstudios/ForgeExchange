using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ControlsManager : MonoBehaviour
    {
        [SerializeField] private bool isGamePadConnected;

        private void ToggleOnScreenControls()
        {
            isGamePadConnected = Gamepad.all.Count > 0;
            gameObject.SetActive(!isGamePadConnected);
        }

        // Start is called before the first frame update
        void Start()
        {
            ToggleOnScreenControls();
        }

        void OnDeviceConnected(InputDevice device)
        {
            ToggleOnScreenControls();
        }
    }
}
