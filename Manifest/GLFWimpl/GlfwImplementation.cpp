#include "pch.h"

#include "GlfwImplementation.h"

namespace Manifest
{
	void GlfwImplementation::Init()
	{
		if (glfwInit() == GL_FALSE)
			std::cout << "ERROR: GLFW failed to init" << std::endl;
		
	}
	void GlfwImplementation::CreateWindow(int width, int height, const std::string& name)
	{
		mWindow = glfwCreateWindow(width, height, name.c_str(), NULL, NULL);
		glfwMakeContextCurrent(mWindow);

		glfwSetWindowUserPointer(mWindow, &mCallbacks);

		glfwSetKeyCallback(mWindow, [](
			GLFWwindow* window, int key, int scancode, int action, int mods) {
				if (action == GLFW_PRESS || action == GLFW_REPEAT)
				{
					CallbackFunctions* callbacks{ (CallbackFunctions *)glfwGetWindowUserPointer(window) };
					
					KeyPressedEvent event{ key };
					callbacks->KeyPressedCallback(event);
				}
			});
	}
	void GlfwImplementation::SwapBuffers()
	{
		glfwSwapBuffers(mWindow);
	}
	void GlfwImplementation::PollEvents()
	{
		glfwPollEvents();
	}
	int GlfwImplementation::GetWindowWidth() const
	{
		int width{ 0 };
		int height{ 0 };
		glfwGetWindowSize(mWindow, &width, &height);
		return width;
	}
	int GlfwImplementation::GetWindowHeight() const
	{
		int width{ 0 };
		int height{ 0 };
		glfwGetWindowSize(mWindow, &width, &height);
		return height;
	}
	void GlfwImplementation::SetKeyPressedCallback(std::function<void(KeyPressedEvent&)> func)
	{
		mCallbacks.KeyPressedCallback = func;
	}
}

