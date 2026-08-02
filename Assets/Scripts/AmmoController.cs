using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmmoController : MonoBehaviour
{
    [SerializeField] private GameObject ammoPrefab;
    [SerializeField] private AmmoStruct mAmmoStruct; 
    public GameObject AmmoPrefab { get => ammoPrefab; set => ammoPrefab = value; }
    public AmmoStruct AmmoStruct { get => mAmmoStruct; set => mAmmoStruct = value; }
    public void LaunchProjectile(Vector3 direction)
    {
        GameObject projectile = Instantiate(ammoPrefab, transform.position, transform.rotation);
        projectile.transform.Rotate(direction);
        projectile.transform.Translate(direction , Space.World);
        projectile = null;
    }
    
}
