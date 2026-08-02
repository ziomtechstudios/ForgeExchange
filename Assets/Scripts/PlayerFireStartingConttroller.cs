using UnityEngine;

//TODO: Implement Fire starting and cooking once artists have created fire starting animations
[RequireComponent(typeof(PlayerController))]
public class PlayerFireStartingConttroller : MonoBehaviour
{
    #region "Private Serialized Fields"
    [SerializeField] private PlayerController playerCont;
    #endregion
    // Start is called before the first frame update
    void Start()
    {
        playerCont = GetComponent<PlayerController>();
    }

    public void StartFire()
    {
            
    }
    
}