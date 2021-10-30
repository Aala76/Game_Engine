#include "pch.h"
#include "ManifestApp.h"

#include "GLFW/glfw3.h"


namespace Manifest
{
	void ManifestApp::Run()
	{
		std::cout << "Manifest running..." << std::endl;

		GLFWwindow* window;

		glfwInit();

		window = glfwCreateWindow(800, 600, "test", NULL, NULL);


		while (true)
		{
			OnUpdate();

			glfwSwapBuffers(window);
			glfwPollEvents();
		}
	}

	void ManifestApp::OnUpdate()
	{

	}

	ManifestApp::ManifestApp()
	{

	}

}