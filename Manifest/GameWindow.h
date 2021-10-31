#pragma once

#include "ManifestUtils.h"
#include "WindowImplementation.h"

namespace Manifest
{
	class MANIFEST_API GameWindow
	{
	public:
		GameWindow();
		void CreateWindow(int width, int height, const std::string & name);
		void SwapBuffers();
		void PollEvents();
		int GetWindowWidth();
		int GetWindowHeight();
	private:
		WindowImplementation* mWindow;

	};

}

