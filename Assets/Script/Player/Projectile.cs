using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public Vector3 direction;
    public float ProjectileSpeed=0.5f;
    public System.Action destroyed;

    private void Update() 
    {
        this.transform.position += this.direction * this.ProjectileSpeed * Time.deltaTime;
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        this.destroyed.Invoke();
        Destroy(this.gameObject);
    }
}
