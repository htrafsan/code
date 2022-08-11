using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public Rigidbody rb;


    // Start is called before the first frame update
    void Start()
    {
        rb.AddForce(0, 0, 50);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //
        //rb.useGravity = false;
        //Debug.Log("Hello World!");

        rb.AddForce(0, 0, 300);

        if (Input.GetKey("d"))
        {
            rb.AddForce(5, 0, 0, ForceMode.VelocityChange);
        }

        if (Input.GetKey("a"))
        {
            rb.AddForce(-5, 0, 0, ForceMode.VelocityChange);
        }
        if (Input.GetKey("w"))
        {
            rb.AddForce(0, 0, 10, ForceMode.VelocityChange);
        }

        if (Input.GetKey("s"))
        {
            rb.AddForce(0, 0, -10, ForceMode.VelocityChange);
        }
    }
}
