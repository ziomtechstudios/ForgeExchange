using System.Collections;
using System.Collections.Generic;
using Com.ZiomtechStudios.ForgeExchange;
using JetBrains.Annotations;
using UnityEngine;

public class AmmoController : MonoBehaviour
{
    [SerializeField] [CanBeNull] GameObject ammoPrefab;
    [SerializeField] [CanBeNull] private AmmoStruct mAmmoStruct;
    [SerializeField] private WeaponController mWeaponCont;
    public GameObject AmmoPrefab { get => ammoPrefab; set => ammoPrefab = value; }
    public AmmoStruct AmmoStruct { get => mAmmoStruct; set => mAmmoStruct = value; }
    private Rigidbody2D ammoRb;
    public void LaunchProjectile(Vector3 direction)
    {
        Debug.Log("There was ammo, we are now launching a projectile.");
        GameObject projectile = Instantiate(ammoPrefab, transform.position, transform.rotation);
        ammoRb = projectile.GetComponent<Rigidbody2D>();
        projectile.transform.Rotate(Vector3.forward, Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg, Space.World);
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
