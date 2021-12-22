#pragma once

#include "pch.h"
#include "Sprite.h"
#include "Shader.h"
#include "RendererImplementation.h"
#include "ManifestUtils.h"

namespace Manifest
{
	class MANIFEST_API Renderer
	{
	public:
		static void Init();
		static void Draw(Sprite& sprite,
			int xPos, int yPos,
			int width, int height, 
			Shader& shader);
		static void ClearFrame();
		static void ShutDown();

	private:
		
		Renderer();
		
		inline static Renderer* mInstance{ nullptr };
		inline static std::unique_ptr<RendererImplementation> mImplementation;

	};
}