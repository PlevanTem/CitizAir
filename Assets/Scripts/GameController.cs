using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public List<GameObject> AtomPrefab;
    // Start is called before the first frame update
    void Start()
    {
        for (int i = -2; i < 3; i++)
        {
            for (int j = -2; j < 3; j++)
            {
                for (int k = -2; k < 3; k++)
                {
                    int rand = Random.Range(0, AtomPrefab.Count);
                    Instantiate(AtomPrefab[rand], new Vector3(i*2f,j * 2f, k * 2f), Quaternion.identity);

                }
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
