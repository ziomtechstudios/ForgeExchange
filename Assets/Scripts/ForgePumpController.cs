using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange{
    [RequireComponent(typeof(Animator))]
    public class ForgePumpController : WorkstationController{
        #region Private Fields
        [SerializeField] private Animator forgePumpAnimator;
        [SerializeField] private ForgeController forgeCont;
        [Header("Pump Functionality")]
        [Tooltip("Highest amount of boost the fore pump provides.")][SerializeField] private float maxBoostTemp;
        [Tooltip("Time it takes to reach boosted temp and back to normal.")][SerializeField] private float timeToBoost;
        [SerializeField] private float boostTimer;
        private int inUseHash;
        #endregion
        #region Private funcs
        //Update status of forge when forge pump is in use
        private void SyncUI(){
            BarAmnt = forgeCont.BarAmnt;
            CircleAmnt = forgeCont.CircleAmnt;
        }
        private float TurnOff(){
            //
            forgeCont.SetForge(forgeCont.InUse, (forgeCont.InUse?forgeCont.MaxTemp:0.0f));
            InUse = false;
            return boostTimer;
        }
        #endregion
        #region Public Functions
        public float MaxBoostTemp{get{return maxBoostTemp;}}
        public override void ToggleUse(PlayerController playerCont){
            if(boostTimer<= 0.0f && !playerCont.HoldingItem){
                forgePumpAnimator.SetTrigger(inUseHash);
                InUse = true;
                boostTimer += 0.001f;
            }
        }
        #endregion
        // Start is called before the first frame update
        void Start(){
            forgePumpAnimator = GetComponent<Animator>();
            forgeCont = transform.parent.Find("forge").gameObject.GetComponent<ForgeController>();            
            inUseHash = Animator.StringToHash("InUse");
            boostTimer = 0.0f;
            SyncUI();
            InUse = false;
            BarFull = true;
        }
        void FixedUpdate(){
            SyncUI();
            ///<summary>
            /// If forge pump is in use and the boost timer has not reached max Time, increment timer for boosting forge temp.
            /// If forge pump is in use and the boost timer has reached maximum allowed time turn off forge pump.
            /// If forge pump is not in use and the timer has not yet reached zero keep decrementing the boost timer.
            /// If forge pump is not in use and the boost timer has reached zero just keep it at 0.
            ///</sumary>
            if(boostTimer != 0.0f)
                boostTimer = (InUse)?(boostTimer>=timeToBoost?(TurnOff()):(boostTimer+Time.deltaTime)):((boostTimer>=0.0f)?(boostTimer-Time.deltaTime):(0.0f));
            ///<summary>
            /// To prevent Update() from repeatedly seting boost timer to 0, the update() will check to see if the boostTimer is not 0.
            /// When setting boost timer to a number insignificantly higher than 0 when the forge pump is in use we can trigger the logic and prevent repeated assignments.
            ///</summary>
            if (forgeCont.InUse)
            {
                if (InUse)
                    forgeCont.CurTemp = Mathf.Lerp(forgeCont.MaxTemp, (forgeCont.MaxTemp + maxBoostTemp), boostTimer / timeToBoost);
                else
                    forgeCont.CurTemp = Mathf.Lerp(forgeCont.MaxTemp, (forgeCont.MaxTemp + maxBoostTemp), (boostTimer / timeToBoost));
            }
        }
    }
}
