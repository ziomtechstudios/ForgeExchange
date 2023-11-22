using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/PlayerUIStruct", order = 1)]
public class PlayerUIStruct : ScriptableObject
{
    public string barTitle;
    public string circleTitle;
    public Quaternion globalRotation;
    public Vector3 globalPosition;
}
