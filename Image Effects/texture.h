#pragma once
#include "glad.h"
#include "glfw3.h"

// --------------------------------------------------------------------------
// Functions to set up OpenGL buffers for storing textures

struct MyTexture
{
	GLuint textureID;
	GLuint target;
	int width;
	int height;

	// initialize object names to zero (OpenGL reserved value)
	MyTexture();
	void Destroy();
};

bool InitializeTexture(MyTexture* texture, const char* filename, GLuint target = GL_TEXTURE_2D);

// deallocate texture-related objects
void DestroyTexture(MyTexture *texture);