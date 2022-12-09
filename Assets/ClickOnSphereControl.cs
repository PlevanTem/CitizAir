using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickOnSphereControl : MonoBehaviour
{
    private Camera cameraObject;
    public LayerMask layerMask;
    public GameObject infoPanel;
    // Start is called before the first frame update
    void Start()
    {
        cameraObject = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {

#if UNITY_ANDROID || UNITY_IPHONE
        if(Input.touchCount>0)
        {
            Click(Input.GetTouch(0).position);
        }
#else
        if (Input.GetMouseButtonDown(0))
        {
            Click(Input.mousePosition);
        }
#endif

    }
    void Click(Vector3 pos)
    {
        RaycastHit hit = CastRay(pos, layerMask);
        Debug.Log("Click");

        if (hit.collider != null && hit.transform.tag == "Sphere")
        {
            Debug.Log("red");
            SphereControl sphereControl = hit.transform.GetComponent<SphereControl>();
            infoPanel.SetActive(true);
            infoPanel.GetComponent<InfoPanelControl>().SetAirParticle(sphereControl.airParticle);
        }
    }
    private RaycastHit CastRay(Vector3 cursorPos, LayerMask layerMask)
    {
        Vector3 screenMousePosFar = new Vector3(cursorPos.x, cursorPos.y, Camera.main.farClipPlane);
        Vector3 screenMousePosNear = new Vector3(cursorPos.x, cursorPos.y, Camera.main.nearClipPlane);
        Vector3 worldMousePosFar = Camera.main.ScreenToWorldPoint(screenMousePosFar);
        Vector3 worldMousePosNear = Camera.main.ScreenToWorldPoint(screenMousePosNear);
        RaycastHit hit;
        Physics.Raycast(worldMousePosNear, worldMousePosFar - worldMousePosNear, out hit, 100, layerMask, QueryTriggerInteraction.Collide);
        return hit;
    }
}
