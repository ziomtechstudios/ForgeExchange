using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct MathFPlus 
{
    public static float RoundFromMiddle(float value)
    {
        //When the value rounded to the first decimal is greater than or equal to 5 we round up if not round down.
        return ((value % Mathf.Floor(value)) >= 0.5f)?Mathf.Ceil(value):Mathf.Floor(value);
    }
}
