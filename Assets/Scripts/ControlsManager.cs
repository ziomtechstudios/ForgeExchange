using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ControlsManager : MonoBehaviour
    {
        [SerializeField] private bool isGamePadConnected;
        void OnEnable()
        {
            InputSystem.onDeviceChange += OnDeviceChange;
        }
        void OnDisable()
        {
            //InputSystem.onDeviceChange -= OnDeviceChange;
        }
        private void OnDeviceChange(InputDevice device, InputDeviceChange change)
        {
            if (device.name.Equals("iOSGameController"))
            {
                switch (change)
                {
                    case (InputDeviceChange.Added):
                        gameObject.SetActive(false);
                        break;
                    case (InputDeviceChange.Removed):
                        gameObject.SetActive(true);
                        break;
                    case (InputDeviceChange.Disabled):
                        gameObject.SetActive(true);
                        break;
                    case (InputDeviceChange.Disconnected):
                        gameObject.SetActive(true);
                        break;
                    case (InputDeviceChange.Reconnected):
                        gameObject.SetActive(false);
                        break;
                }
            }
            Debug.Log($"Device: {device.name}, was {change}");
        }
    }
}
