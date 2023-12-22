using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements.Experimental;

namespace Com.ZiomtechStudios.ForgeExchange{
    public class BeingController : MonoBehaviour
    {
        [SerializeField] Animator m_Animator;
        [SerializeField] HealthController m_healthCont;
        [SerializeField] AudioSource m_AudioSource;
        private int isDamagedHash;
        public Animator M_Animator{set{m_Animator = value;}get{return m_Animator;}}
        public int IsDamagedHash{set{isDamagedHash = value;}get{return isDamagedHash;}}
        public AudioSource M_AudioSource{set{m_AudioSource = value;}get{return m_AudioSource;}}
        public HealthController M_HealthCont{set{m_healthCont = value;}get{return m_healthCont;}}
    }
}
