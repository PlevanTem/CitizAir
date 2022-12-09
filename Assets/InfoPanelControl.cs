using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InfoPanelControl : MonoBehaviour
{
    public AirParticle airParticle;
    public Text[] airParticleNameTexts;
    public Image structureSprite;
    public Image formulaSprite;
    public Text descriptionText;



    public Text[] detailedAirParticleNameTexts;
    public Image detailedtructureSprite;
    public Image detailedFormulaSprite;
    public Text detailedDescriptionText;
    public Image detailedSOriginSprite;
    public Image detailedEffectSprite;
    // Start is called before the first frame update
    void Start()
    {
        UpdateInfoPanel();
        UpdateDetailedPanel();
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void UpdateInfoPanel()
    {
        foreach (Text nameText in airParticleNameTexts)
        {
            nameText.text = airParticle.particleName;
        }
        structureSprite.sprite = airParticle.structureImage;
        formulaSprite.sprite = airParticle.formulaImage;
        descriptionText.text = airParticle.descriptionText;
    }
    public void UpdateDetailedPanel()
    {
        foreach (Text nameText in detailedAirParticleNameTexts)
        {
            nameText.text = airParticle.particleName;
        }
        detailedtructureSprite.sprite = airParticle.structureImage;
        detailedFormulaSprite.sprite = airParticle.formulaImage;
        detailedDescriptionText.text = airParticle.descriptionText;
        detailedSOriginSprite.sprite = airParticle.originImage;
        detailedEffectSprite.sprite = airParticle.effectImage;
    }
    public void SetAirParticle(AirParticle airP)
    {
        airParticle=airP;
        UpdateInfoPanel();
        UpdateDetailedPanel();
    }
}
