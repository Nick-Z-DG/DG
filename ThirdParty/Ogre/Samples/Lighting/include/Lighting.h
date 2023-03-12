#ifndef __Lighting_H__
#define __Lighting_H__

#include "SdkSample.h"
#include "OgreBillboard.h"

using namespace Ogre;
using namespace OgreBites;

class _OgreSampleClassExport Sample_Lighting : public SdkSample, public RenderObjectListener
{
    static const uint8 cPriorityMain = 50;
    static const uint8 cPriorityQuery = 51;
    static const uint8 cPriorityLights = 55;

public:

    Sample_Lighting()
    {
        mInfo["Title"] = "Lighting";
        mInfo["Description"] = "Shows OGRE's lighting support. Also demonstrates "
            "usage of occlusion queries and automatic time-relative behaviour "
            "using billboards and controllers.";
        mInfo["Thumbnail"] = "thumb_lighting.png";
        mInfo["Category"] = "Lighting";
    }

    bool frameRenderingQueued(const FrameEvent& evt)
    {
        return SdkSample::frameRenderingQueued(evt);   // don't forget the parent class updates!
    }

protected:

    void setupContent()
    {
        // Set our camera to orbit around the origin at a suitable distance
        mCameraMan->setStyle(CS_ORBIT);
        mCameraMan->setYawPitchDist(Radian(0), Radian(0), 400);

		if (mTrayMgr)
			mTrayMgr->showCursor();

		ColourValue clr = GetBackgroundColour();
		mViewport->setBackgroundColour(clr);

        //setupLights();
    }

    void setupLights()
    {
		mSceneMgr->setAmbientLight(ColourValue(0.5, 0.5, 0.5));  // Dim ambient lighting

		// add a bright light above the scene
		Light* light = mSceneMgr->createLight();
		light->setType(Light::LT_POINT);
		light->setDiffuseColour(ColourValue(0.5, 0.5, 0.5));
		light->setPosition(-10, 500, 1000);
		light->setSpecularColour(ColourValue::White);
    }

    // Event raised when render single object started.
    virtual void notifyRenderSingleObject(Renderable* rend, const Pass* pass, const AutoParamDataSource* source, 
            const LightList* pLightList, bool suppressRenderStateChanges)
    {
    }

    void cleanupContent()
    {
    }

public:

	virtual ColourValue GetBackgroundColour()
	{
		return ColourValue(0.8f, 1.0f, 0.8f);
	}

	void SetBackgroundColour(ColourValue clr)
	{
		mViewport->setBackgroundColour(clr);
	}
};

#endif
