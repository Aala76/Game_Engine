#pragma once

#include "pch.h"

namespace Manifest
{
	class SpriteImplementation
	{
	public:
		virtual void LoadImage(const std::string& pictureFile)= 0;
		virtual int GetWidth() const = 0;
		virtual int GetHeight() const = 0;
		virtual void Bind() = 0;
		virtual ~SpriteImplementation() {};
	};
}