using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.S)) // Touche pour descendre player 1
        {
            this.transform.position += Vector3.down * this.speed * Time.deltaTime;
        }

        if (Input.GetKey(KeyCode.Z)) // Touche pour monter player 1
        {
            this.transform.position += Vector3.up * this.speed * Time.deltaTime;
        }

        if (this.transform.position.y > 4.5f)
        {
            this.transform.position = new Vector3(this.transform.position.x, 4.0f, this.transform.position.z);
        }

        if (this.transform.position.y < -4.5f)
        {
            this.transform.position = new Vector3(this.transform.position.x, -4.0f, this.transform.position.z);
        }
    }
}
