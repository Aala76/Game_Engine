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
		std::cout << "Manifest running..." << std::endl;


		mGameWindow.CreateWindow(800, 600, "test");
		
		Renderer::Init();

		

		//Shaders
		Manifest::Shader myShader;
		myShader.Load("C:/Users/midor/Desktop/MyGame/Manifest/Assets/Shader/myVertexShader.glsl",
			"C:/Users/midor/Desktop/MyGame/Manifest/Assets/Shader/myFragmentShader.glsl");
		myShader.SetVec2IntUniform("screenSize",
			mGameWindow.GetWindowWidth(),
			mGameWindow.GetWindowHeight());

		//Texture
		Manifest::Sprite fish;
		fish.LoadImage("C:/Users/midor/Desktop/MyGame/Manifest/Assets/Texture/koshka.png");

		while (true)
		{
			Renderer::ClearFrame();

			OnUpdate();

			Renderer::Draw(fish, 100, 50, fish.GetWidth(), fish.GetHeight(), myShader);

			mGameWindow.SwapBuffers();

			mGameWindow.PollEvents();
		}
		Renderer::ShutDown();
	}

	void ManifestApp::OnUpdate()
	{

	}

	ManifestApp::ManifestApp()
	{
	}

}