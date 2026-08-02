using UnityEngine;

[RequireComponent(typeof(WeaponController))]
[RequireComponent(typeof(ItemController))]
public class ArrowGenerator : MonoBehaviour {
    #region "Private Serialized Fields"
    [SerializeField] private GameObject arrowPrefab;
    [SerializeField] private ItemController arrowCont;
    #endregion
    // Start is called before the first frame update
    void Start() {

    }
    // Update is called once per frame
    void Update() {

    }
}