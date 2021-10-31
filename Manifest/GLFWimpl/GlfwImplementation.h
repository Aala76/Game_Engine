#pragma once
#include "WindowImplementation.h"
#include "GLFW/glfw3.h"

namespace Manifest
{
	class GlfwImplementation : public WindowImplementation
	{
	public:
		virtual void Init() override;
		virtual void CreateWindow(int width, int height, const std::string& name) override;
		virtual void SwapBuffers() override;
		virtual void PollEvents() override;
		virtual int GetWindowWidth() const override;
		virtual int GetWindowHeight() const override;

	private:
		GLFWwindow* mWindow;

	};

}