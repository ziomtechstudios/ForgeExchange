using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ControlsManager : MonoBehaviour
    {
        public void ShowOnScreenControls()
        {
            gameObject.SetActive(true);
        }

        public void HideOnScreenControls()
        {
            gameObject.SetActive(false);
        }
    }
}
