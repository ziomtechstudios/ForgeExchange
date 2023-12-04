using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animation))]
    public class DoorController : MonoBehaviour
    {
        #region "Serialized Fields"
        [SerializeField] private Animation doorAnimation;
        #endregion
        #region "Private Fields"
        private float isOpen;
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            doorAnimation = GetComponent<Animation>();
            isOpen = -1.0f;
        }
        public void InteractDoor()
        {
            isOpen = (isOpen > 0.0f) ? -1.00f : 1.00f;
            doorAnimation["InteractDoor"].speed = isOpen;
            doorAnimation.Play("InteractDoor");
        }
    }
}
