#include "pch.h"

#include "GlfwImplementation.h"

namespace Manifest
{
	void GlfwImplementation::Init()
	{
		glfwInit();
		
	}
	void GlfwImplementation::CreateWindow(int width, int height, const std::string& name)
	{
		mWindow = glfwCreateWindow(width, height, name.c_str(), NULL, NULL);
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
}

