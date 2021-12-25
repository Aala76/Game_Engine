#pragma once
#include "Manifest.h"
#include "Unit.h"
#include <vector>

class MyGameApp : public Manifest::ManifestApp
{	
public:	
	MyGameApp();
	virtual void OnUpdate() override;
	virtual void OnKeyPressed(Manifest::KeyPressedEvent& event) override;

private:
	Unit mHero;
	Unit mCat;
	Unit mBackground;
	std::vector<Unit> mViruses;
	std::vector<Unit> mInfected;
	std::vector<Unit> mHearts;
	int mFrameCounter;
	Manifest::Shader mShader;
	
};