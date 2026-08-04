using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    public abstract class HumanoidController : BeingController
    {
        [SerializeField] private bool isFishing;
        [SerializeField] private bool nearShore;
        public bool NearShore{set{nearShore = value;}get{return nearShore;}}
        public bool IsFishing{set{isFishing = value;}get{return isFishing;}}
        
    }
}
