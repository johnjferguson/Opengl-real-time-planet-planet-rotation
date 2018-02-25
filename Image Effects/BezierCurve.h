#pragma once
#include <vector>
#include "MyGeometry.h"


class BezierCurve
{
public:
	BezierCurve() = default;
	BezierCurve(const std::vector<float>& vertices, bool cubic = false);
	void Draw(const GLuint& program) const;
	void SetVertices(const std::vector<float>& vertices, bool cubic = false);
private:
	void InitializeGeometry(const std::vector<float>& vertices);
	glm::mat4 CreateTransMatrix() const;
private:
	MyGeometry geometry;
	std::vector<float> vertices;
	bool isCubic = false;
	float scale = 0.1f;
};