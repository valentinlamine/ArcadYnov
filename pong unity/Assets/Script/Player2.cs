using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player2 : MonoBehaviour
{
    public float speed;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.UpArrow)) // Touche pour descendre player 2
        {
            this.transform.position += Vector3.down * this.speed * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.DownArrow)) // Touche pour monter player 2
        {
            this.transform.position += Vector3.up * this.speed * Time.deltaTime;
        }


    }
}
