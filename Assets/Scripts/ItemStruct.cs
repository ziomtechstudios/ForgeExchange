using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ItemStruct", order = 1)]
public class ItemStruct : ScriptableObject
{
    public float fuelAmnt;
    public string itemTag;
    public string itemSubTag;
    public string craftingTag;
    public float meltingTemp;
}