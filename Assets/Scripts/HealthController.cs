using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    [RequireComponent(typeof(SpriteRenderer))]
    public class HealthController : MonoBehaviour
    {
        #region "Serialized Fields"
        [SerializeField] private float hp;
        [SerializeField] private float maxHealth;
        [SerializeField] private SpriteRenderer objSprite;
        [SerializeField] private bool isDamaged;
        [SerializeField] private float damageTime;
        [SerializeField] private float damageTimer;
        [Range(0.01f, 0.25f)][SerializeField] private float timerIncrement;
        #endregion
        #region "Getter/Setter"
        public float HP { get { return hp; } set { hp = value; } }
        public float MaxHP { get { return maxHealth; } }
        public float DamageTimer { get { return damageTimer; } set { damageTimer = value; } }
        public bool IsDamaged { get { return isDamaged; } set { isDamaged = value; } }
        #endregion
        #region "Private members"
        private float healthBarAmnt;
        #endregion
        #region "Getter/Setters"
        public float HealthBarAmnt { get { return healthBarAmnt; } set { healthBarAmnt = value; } }
        #endregion
        #region "Public members"
        //When the gameObject takes damage we want to have the 
        // gameObjec to flash red as a secondary indicator of this.
        public void FlashDamage()
        {
            if (isDamaged)
            {
                //WHenr player is damaged we trigger + increment the timer and
                //have that change in timer linearlly interpolated betweeen white and red
                if ((damageTimer < damageTime))
                {
                    damageTimer += 0.1f;
                    objSprite.color = Color.Lerp(Color.white, Color.red, (damageTimer / damageTime));
                }
                //gameObject is now fully flashing red.
                //Let us now decrement the timer and call Color Lerp to back to OG color
                else if (damageTimer >= damageTime)
                {
                    isDamaged = false;
                    damageTimer -= 0.1f;
                    objSprite.color = Color.Lerp(Color.white, Color.red, (damageTimer / damageTime));
                }
            }
            //Ensuring gameObject goes back to "normal" color
            //done so this way bc it look s nicer than simply hard setting the color after flash
            // Does not need to be set in stone it was just a artistic preference
            else if (!isDamaged && (damageTimer > 0.0f))
            {
                damageTimer -= 0.1f;
                objSprite.color = Color.Lerp(Color.white, Color.red, (damageTimer / damageTime));
            }
            else
                damageTimer = 0.0f;

        }
        #endregion
        void Start()
        {
            damageTimer = 0.0f;
            objSprite = GetComponent<SpriteRenderer>();
            isDamaged = false;
            hp = maxHealth;
            healthBarAmnt = hp / maxHealth;
        }
        void Awake()
        {
            hp = maxHealth;
            healthBarAmnt = hp / maxHealth;
        }
        void FixedUpdate()
        {
            if (damageTimer != 0.0f)
                FlashDamage();
        }
    }
}
