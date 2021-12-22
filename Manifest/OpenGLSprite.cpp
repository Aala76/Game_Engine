#include "pch.h"
#include "OpenGLSprite.h"
#include "stb_image.h"

namespace Manifest {
	OpenGLSprite::OpenGLSprite(){}
	OpenGLSprite::OpenGLSprite(const std::string& pictureFile)
	{
		LoadImage(pictureFile);
	}
	OpenGLSprite::~OpenGLSprite()
	{
		if (mImage != nullptr)
			stbi_image_free(mImage);
	}
	void OpenGLSprite::LoadImage(const std::string& pictureFile)
	{
		if (mImage != nullptr)
			stbi_image_free(mImage);

		int numChannels{ 0 };
		stbi_set_flip_vertically_on_load(true);
		mImage = stbi_load(pictureFile.c_str(), &mWidth, &mHeight, &numChannels, 0);
	}
	unsigned char* OpenGLSprite::GetDataPointer() const
	{
		return mImage;
	}
	int OpenGLSprite::GetWidth() const
	{
		return mWidth;
	}
	int OpenGLSprite::GetHeigt() const
	{
		return mHeight;
	}
}