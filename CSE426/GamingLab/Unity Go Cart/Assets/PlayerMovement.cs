using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public Rigidbody rb;
    public Transform Player;
    public float TimeR;

    // Start is called before the first frame update
    void Start()
    {
        rb.AddForce(0, 0, 50);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        TimeR = TimeR + Time.deltaTime;
        rb.AddForce(0, 0, 250*TimeR);

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
            rb.AddForce(0, 0, -5, ForceMode.VelocityChange);
        }
    }
}
