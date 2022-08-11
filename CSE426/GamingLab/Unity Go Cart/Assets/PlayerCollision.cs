using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerCollision : MonoBehaviour
{
    public PlayerMovement movement;
    public Scoring scoreOver;
    public Text GameOver;
    public float TimeT;

    void Update()
    {
        TimeT = TimeT + Time.deltaTime;
    }


    void OnCollisionEnter(Collision hit)
    {
        
        if (hit.collider.tag == "ogroups")
        {
            GameOver.text = TimeT.ToString("Game Over! Final Score: .0 Second");
            movement.enabled = false;
            scoreOver.enabled = false;
        }
    }
}
