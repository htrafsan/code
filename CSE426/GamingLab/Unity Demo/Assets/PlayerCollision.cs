using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    public PlayerMovement movement;
    void OnCollisionEnter(Collision hit)
    {
        if (hit.collider.tag == "ogroups")
        {
            Debug.Log("Game Over!");
            movement.enabled = false;
        }
    }
}
