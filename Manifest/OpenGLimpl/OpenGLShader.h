#pragma once
#include "ShaderImplementation.h"

namespace Manifest
{
	class OpenGLShader : public ShaderImplementation
	{
	public: 
		virtual void Load(const std::string& vertexFile, const std::string& fragmentFile) override;
		virtual void SetVec2IntUniform(const std::string& unifName, int first, int second) override;
		virtual void Use() override;
	
	private:
		unsigned int mShaderProgram{ 0 };
	};
}