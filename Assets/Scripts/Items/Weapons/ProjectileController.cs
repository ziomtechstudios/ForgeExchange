using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange
{
    public class ProjectileController : MonoBehaviour
    {
        [SerializeField] private WeaponController m_WeaponCont;

        private void OnCollisionEnter2D(Collision2D other)
        {
            Destroy(gameObject);
        }
    }
}
