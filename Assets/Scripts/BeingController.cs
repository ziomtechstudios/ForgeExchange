using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements.Experimental;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class BeingController : MonoBehaviour
    {
        [SerializeField] Animator m_Animator;
        [SerializeField] HealthController m_healthCont;
        private int isDamagedHash;
        public Animator M_Animator{set{m_Animator = value;}get{return m_Animator;}}
        public int IsDamagedHash{set{isDamagedHash = value;}get{return isDamagedHash;}}
    }
}
