using UnityEngine;
using System.Collections;

public class ARSphereParticles : MonoBehaviour
{
    public int numParticles = 100; // number of particles to generate
    public float particleRadius = 0.1f; // radius of each particle
    public float particleSpeed = 1.0f; // speed at which particles move

    private ParticleSystem particleSystem; // reference to the particle system

    void Start()
    {
        // create a new particle system
        particleSystem = gameObject.AddComponent<ParticleSystem>();

        // set the particle system's shape to a sphere
        var shape = particleSystem.shape;
        shape.shapeType = ParticleSystemShapeType.Sphere;
        shape.radius = particleRadius;

        // set the particle system's main module properties
        var main = particleSystem.main;
        main.startSpeed = particleSpeed;
        main.startSize = particleRadius;
        main.maxParticles = numParticles;
        main.simulationSpace = ParticleSystemSimulationSpace.World;

        // generate the particles
        particleSystem.Emit(numParticles);
    }
}