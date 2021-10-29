#include "manifest.h"

//Entry point 

class MyGameApp : public Manifest::ManifestApp
{
	void OnUpdate() override
	{

	}
};

START_MANIFEST_GAME(MyGameApp);