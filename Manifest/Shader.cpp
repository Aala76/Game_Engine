#include "pch.h"
#include "Shader.h"
#include "OpenGLimpl/OpenGLShader.h"


namespace Manifest
{
	Shader::Shader()
	{
#ifdef MANIFEST_OPENGL
		mShader = std::unique_ptr<ShaderImplementation>{ new OpenGLShader };
#else
		#only_OpenGL_is_implemented_at_the_moment

#endif

	}

	void Shader::Load(const std::string& vertexFile, const std::string& fragmentFile)
	{
		mShader->Load(vertexFile, fragmentFile);
	}

	void Shader::SetVec2IntUniform(const std::string& unifName, int first, int second)
	{
		mShader->SetVec2IntUniform(unifName, first, second);
	}

	void Shader::Use()
	{
		mShader->Use();
	}

}