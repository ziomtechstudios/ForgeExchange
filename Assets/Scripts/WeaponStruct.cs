using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/WeaponStruct", order = 1)]
public class WeaponStruct : ItemStruct
{
    public float minBaseDamage;
    public float maxBaseDamage;

}
