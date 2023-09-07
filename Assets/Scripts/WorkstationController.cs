using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class WorkstationController : MonoBehaviour{
        [SerializeField] private PlayerUIStruct workstationUIStruct;
        [SerializeField] private bool inUse;
        [SerializeField] private bool doingWork;
        [SerializeField] private bool barFull;
        [SerializeField] private float barAmnt;
        [SerializeField] private float circleAmnt;    
        public PlayerUIStruct WorkstationUIStruct{get{return workstationUIStruct;}}
        public bool InUse{get{return inUse;}set{inUse = value;}}
        public float BarAmnt{get{return barAmnt;}set{barAmnt = value;}}
        public float CircleAmnt{get{return circleAmnt;}set{circleAmnt = value;}}
        public bool BarFull{get{return barFull;}set{barFull = value;}}
        public bool DoingWork{get{return doingWork;}set{doingWork=value;}}
        public virtual void Work(ItemController itemController){}
        public virtual void Refuel(float fuel){}
        public virtual void Overflow(float amount){}
        public virtual void ToggleUse(PlayerController playerCont){} 
    }
}
