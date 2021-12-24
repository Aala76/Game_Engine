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
	std::vector<Unit> mViruses;
	int mFrameCounter;
	Manifest::Shader mShader;
};