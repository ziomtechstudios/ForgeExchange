using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Com.ZiomtechStudios.ForgeExchange{
[RequireComponent(typeof(SpriteRenderer))]
[RequireComponent(typeof(BoxCollider2D))]
public class DynamicSpriteLayering : MonoBehaviour
{
    [SerializeField] private SpriteRenderer m_SpriteRend;
    [SerializeField] private BoxCollider2D m_BoxCollider;
    // Start is called before the first frame update
    void Start()
    {
        m_SpriteRend = GetComponent<SpriteRenderer>();
        m_BoxCollider = GetComponent<BoxCollider2D>();
    }

    // Called when attached gameObjects collider triggers another gameObject's collider
    void OnTriggerEnter2D(Collider2D col)
    {
        if(col.CompareTag("underwall"))
            m_SpriteRend.sortingOrder = 0;
    }
    void OnTriggerExit2D(Collider2D col){
        if(col.CompareTag("underwall"))
            m_SpriteRend.sortingOrder = 1;
    }
}
}
