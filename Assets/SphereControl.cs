using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereControl : MonoBehaviour
{
    public AirParticle airParticle;
    private float speed=1f;
    private float timer=0;
    private float changeDirectionInterval=0.5f;
    private Vector3 moveDir;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        timer+=Time.deltaTime;
        Movement();
    }
    void Movement()
    {

        transform.Translate(moveDir*Time.deltaTime*speed,Space.World);
        moveDir=new Vector3(Random.Range(-1f,1f),Random.Range(-1f,1f),Random.Range(-1f,1f)).normalized;
        if(timer>=changeDirectionInterval)
        {
            moveDir=new Vector3(Random.Range(-1,1),Random.Range(-1,1),Random.Range(-1,1)).normalized;
            timer=0;
        }

        
    }
}
