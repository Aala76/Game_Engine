#pragma once

#include "pch.h"

namespace Manifest
{
	class ShaderImplementation
	{
	public:
		virtual void Load(const std::string& vertexFile, const std::string& fragmentFile) = 0;
		virtual void SetVec2IntUniform(const std::string& unifName, int first, int second) = 0;
		virtual void Use()= 0;
	};

}