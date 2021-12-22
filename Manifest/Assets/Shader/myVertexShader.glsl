#version 330 core
layout (location = 0) in vec2 aPos;
layout (location = 1) in vec2 aTexCoord;

out vec2 TexCoords;

uniform ivec2 screenSize;


void main()
{
	gl_Position = vec4(2*aPos.x/screenSize.x - 1, 2*aPos.y/screenSize.y - 1, 0.0, 1.0);
	TexCoords = aTexCoord;
}
