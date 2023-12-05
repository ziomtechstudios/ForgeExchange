using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(Animator))]
    public class DoorController : MonoBehaviour
    {
        #region "Serialized Fields"
        [SerializeField] private Animator doorAnimator;
        #endregion
        #region "Private Fields"
        private int isOpenHash;
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            doorAnimator = GetComponent<Animator>();
            isOpenHash = Animator.StringToHash("isOpen");
        }
        void CloseDoor()
        {
            doorAnimator.SetBool(isOpenHash, false);
        }
        public void InteractDoor()
        {
            doorAnimator.SetBool(isOpenHash, true);
            Invoke("CloseDoor", 5.00f);
        }
    }
}
