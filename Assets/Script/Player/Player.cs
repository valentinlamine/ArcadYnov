using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEditor.Presets;
using UnityEngine;
using static UnityEditor.Experimental.GraphView.GraphView;

public class Player : MonoBehaviour
{
    public float speed = 5.0f;
    public Projectile laserPrefab;
    private bool  IsLaser;
    // Update is called once per frame
    void Update()
    {
        movement();
        shoot();
    }

    private void movement()
    {
        if (Input.GetKey(KeyCode.LeftArrow))//presser fleche de gauche pour aller à gauche
        {
            this.transform.position += Vector3.left * this.speed * Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.RightArrow))// presser fleche de gauche pour aller à gauche
        {
            this.transform.position += Vector3.right * this.speed * Time.deltaTime;
        }
    }

    private void shoot()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            if (!IsLaser)
            {
                Projectile projectile= Instantiate(this.laserPrefab, this.transform.position, quaternion.identity);
                projectile.destroyed += laserDestroyed;
                IsLaser = true;

            }
            

        }
    }


    private void laserDestroyed()
    {
        IsLaser = false;
    }
}


