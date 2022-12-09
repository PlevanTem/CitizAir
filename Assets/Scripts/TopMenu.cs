using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopMenu : MonoBehaviour
{
    public GameObject HideMenuObj;
    public GameObject ShowMenuObj;
    private bool isMenuShow = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowTopMenu()
    {
        if(!isMenuShow)
        {
            HideMenuObj.SetActive(false);
            ShowMenuObj.SetActive(true);
            isMenuShow = true;
        } else
        {
            HideMenuObj.SetActive(true);
            ShowMenuObj.SetActive(false);
            isMenuShow = false;
        }
    }
}
