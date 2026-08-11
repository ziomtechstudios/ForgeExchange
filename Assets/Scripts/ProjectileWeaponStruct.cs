using Com.ZiomtechStudios.ForgeExchange;
using UnityEngine;
[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ProjectileWeaponStruct", order = 1)]
public class ProjectileWeaponStruct : WeaponStruct
{
    public float minDist;
    public float maxDist;
}
