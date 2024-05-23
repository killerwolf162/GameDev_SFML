#pragma once
#include "MathUtil.h"
#include <math.h>

class Vec2
{
public:

	Vec2(float x, float y);

	static float DotProduct(Vec2 vector_1, Vec2 vector_2);

	static Vec2 AddVec2(Vec2 vector_1, Vec2 vector_2);

	static Vec2 SubtractVec2(Vec2 vector_1, Vec2 vector_2);

	static float Vec2Lenght(Vec2 Vec2);

	static Vec2 UnitVector(Vec2 Vec2);

	float x_pos;
	float y_pos;


private:

};

