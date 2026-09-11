using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class BeingAudioController : MonoBehaviour
    {
        #region "Serialized Fields"
        [SerializeField] private BeingController beingCont;
        #endregion
        // Start is called before the first frame update
        void Start()
        {
            beingCont = GetComponent<BeingController>();
        }
    }
}
