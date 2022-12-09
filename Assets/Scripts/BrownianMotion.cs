using UnityEngine;

public class BrownianMotion : MonoBehaviour
{
    // The maximum amount of force that can be applied to the sphere
    public float maxForce = 1.0f;

    // The Rigidbody component of the sphere
    private Rigidbody rb;

    void Start()
    {
        // Get the Rigidbody component
        rb = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
        // Apply a random force to the sphere
        Vector3 force = new Vector3(
            Random.Range(-maxForce, maxForce),
            Random.Range(-maxForce, maxForce),
            Random.Range(-maxForce, maxForce)
        );
        rb.AddForce(force);
    }
}