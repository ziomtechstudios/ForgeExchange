using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct MathFPlus 
{
    public static float RoundFromMiddle(float value)
    {
        return ((value % Mathf.Floor(value)) >= 0.5f)?Mathf.Ceil(value):Mathf.Floor(value);
    }
}
