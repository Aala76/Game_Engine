#include "pch.h"
#include "ManifestApp.h"

#include "GLFW/glfw3.h"


namespace Manifest
{
	void ManifestApp::Run()
	{
		std::cout << "Manifest running..." << std::endl;


		mGameWindow.CreateWindow(800, 600, "test");


		while (true)
		{
			OnUpdate();

			mGameWindow.SwapBuffers();
			mGameWindow.PollEvents();
		}
	}

	void ManifestApp::OnUpdate()
	{

	}

	ManifestApp::ManifestApp()
	{
	}

}