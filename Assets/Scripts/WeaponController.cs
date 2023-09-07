using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Com.ZiomtechStudios.ForgeExchange
{
    public class WeaponController : ItemController
    {
        #region Private Serialized Fields
        [SerializeField] private WeaponStruct weaponStruct;
        [SerializeField] private Animator m_Animator;
        #endregion
        #region Getters/Setters
        public WeaponStruct m_WeaponStruct { get { return weaponStruct; } }
        public Animator WeaponAnimator { get { return m_Animator; } }
        #endregion
        private void Start(){
            m_Animator = GetComponent<Animator>();          
        }
    }
}
