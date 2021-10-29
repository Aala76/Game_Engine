#include "pch.h"
#include "ManifestApp.h"


namespace Manifest
{
	void ManifestApp::Run()
	{
		std::cout << "Manifest running..." << std::endl;

		while (true)
		{
			OnUpdate();
		}
	}

	void ManifestApp::OnUpdate()
	{

	}

	ManifestApp::ManifestApp()
	{

	}




}