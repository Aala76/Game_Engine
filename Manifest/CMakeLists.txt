set(SOURCE_FILES 
	ManifestApp.cpp 
	GameWindow.cpp 
	GLFWimpl/GlfwImplementation.cpp 
	Renderer.cpp 
	Shader.cpp 	
	Sprite.cpp
	Events.cpp 
	OpenGLimpl/OpenGLRenderer.cpp 
	OpenGLimpl/OpenGLShader.cpp 
	OpenGLimpl/OpenGLSprite.cpp
)

set(HEADER_FILES 
	Manifest.h 
	ManifestApp.h 
	ManifestUtils.h 
	WindowImplementation.h 
	GameWindow.h 
	GLFWimpl/GlfwImplementation.h 
	Renderer.h 
	RendererImplementation.h 
	Shader.h 
	ShaderImplementation.h 
	Sprite.h 
	SpriteImplementation.h 
	Events.h
	KeyCodes.h
	OpenGLimpl/OpenGLRenderer.h 
	OpenGLimpl/OpenGLShader.h 
	OpenGLimpl/OpenGLSprite.h
)

add_library(manifest_lib SHARED ${SOURCE_FILES} ${HEADER_FILES})

target_precompile_headers(manifest_lib PRIVATE pch.h)

add_definitions(-DMANIFEST_LIB)

target_link_libraries(manifest_lib glfw glad stbi)

include_directories(../glfw/include)
include_directories(../Manifest)
include_directories(../glad/include)
include_directories(../stbi)