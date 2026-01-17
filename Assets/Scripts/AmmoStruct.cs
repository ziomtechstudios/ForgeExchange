using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/AmmoStruct", order = 1)]
public class AmmoStruct : ItemStruct
{
    public float minDamageModifier;
    public float maxDamageModifier;
}
