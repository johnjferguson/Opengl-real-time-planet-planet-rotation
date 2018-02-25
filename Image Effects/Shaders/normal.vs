#version 410 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aTexCoord;

out vec2 TexCoord;
uniform mat4 srt;

void main()
{
	gl_Position = vec4(aPos, 1.0) * srt;
	TexCoord = vec2(aTexCoord.x, aTexCoord.y);
}
