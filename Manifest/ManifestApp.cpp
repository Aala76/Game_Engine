#include "pch.h"
#include "ManifestApp.h"
#include "Renderer.h"
#include "Sprite.h"
#include "Shader.h"

#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include "glad/glad.h"

#include "stb_image.h"

namespace Manifest
{
	void ManifestApp::Run()
	{
		MANIFEST_LOG("Manifest app is running...");

		mTimeOfNextFrame = std::chrono::steady_clock::now() + mFrameDuration;

		while (true)
		{
			Renderer::ClearFrame();

			OnUpdate();
			
			std::this_thread::sleep_until(mTimeOfNextFrame);
			
			mGameWindow.SwapBuffers();

			mGameWindow.PollEvents();

			mTimeOfNextFrame += mFrameDuration;

		}
		Renderer::ShutDown();
	}

	void ManifestApp::OnUpdate()
	{

	}

	void ManifestApp::OnKeyPressed(KeyPressedEvent& event)
	{
		MANIFEST_LOG(event.GetKeyCode());
	}

	int ManifestApp::GetGameWindowWidth() const
	{
		return mGameWindow.GetWindowWidth();
	}

	int ManifestApp::GetGameWindowHeight() const
	{
		return mGameWindow.GetWindowHeight();
	}

	ManifestApp::ManifestApp()
	{
		mGameWindow.CreateWindow(800, 800, "Game");

		mGameWindow.SetKeyPressedCallback([this](KeyPressedEvent& event) {
			OnKeyPressed(event);
			});

		Renderer::Init();
	}

}