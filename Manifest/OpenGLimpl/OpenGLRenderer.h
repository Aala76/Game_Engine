#pragma once

#include "RendererImplementation.h"
#include "Shader.h"
#include "Sprite.h"

namespace Manifest
{
	class OpenGLRenderer : public RendererImplementation
	{
	public:
		OpenGLRenderer();
		virtual void Draw(Sprite& sprite,
			int xPos, int yPos,  //bottom left corner of sprite 
			int width, int height,
			Shader& shader) override;
		virtual void ClearFrame() override;
	};
}