using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(menuName = "My Assets/AirParticle")]
public class AirParticle : ScriptableObject
{
   public string particleName;
   public Sprite structureImage;
   public Sprite formulaImage;
   [TextArea]
   public string descriptionText;
   public Sprite originImage;
   public Sprite effectImage;
}
