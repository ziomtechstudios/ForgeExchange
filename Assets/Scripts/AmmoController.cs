using System.Collections;
using System.Collections.Generic;
using Com.ZiomtechStudios.ForgeExchange;
using UnityEngine;

public class AmmoController : MonoBehaviour
{
    [SerializeField] private GameObject ammoPrefab;
    [SerializeField] private AmmoStruct mAmmoStruct;
    [SerializeField] private WeaponController mWeaponCont;
    public GameObject AmmoPrefab { get => ammoPrefab; set => ammoPrefab = value; }
    public AmmoStruct AmmoStruct { get => mAmmoStruct; set => mAmmoStruct = value; }
    private Rigidbody2D ammoRb;
    public void LaunchProjectile(Vector3 direction)
    {
        GameObject projectile = Instantiate(ammoPrefab, transform.position, transform.rotation);
        ammoRb = projectile.GetComponent<Rigidbody2D>();
        if(mWeaponCont.m_WeaponStruct is ProjectileWeaponStruct projStruct)
            ammoRb.AddForce(direction * Random.Range(projStruct.minDist, projStruct.maxDist));
        projectile = null;
        ammoRb = null;
    }

    void Start()
    {
        mWeaponCont = gameObject.GetComponent<WeaponController>();
    }
}
