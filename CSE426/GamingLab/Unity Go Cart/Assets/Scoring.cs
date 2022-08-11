using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Scoring : MonoBehaviour
{
    public Transform Player;
    public Text scoreDistance;
    public Text scoreTime;
    public float zpos;
    public float timeC;
    // Start is called before the first frame update
    void Start()
    {
        zpos = -278.3f;
    }
    
    // Update is called once per frame
    void Update()
    {
        timeC = timeC + Time.deltaTime;
        //scoreDistance.text = (Player.position.z - zpos).ToString("Current Score: .00");
        scoreTime.text = timeC.ToString("Current Time: .0");

        if (Player.position.z > 495.3)
        {
            scoreTime.text = "Congratz, You Win!!";
        }
    }
}