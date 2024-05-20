#pragma once
#include "MathUtil.h"
#include <math.h>

class Vector2
{
public:

	Vector2(float x, float y);

	static float DotProduct(Vector2 vector_1, Vector2 vector_2);

	static Vector2 AddVector2(Vector2 vector_1, Vector2 vector_2);

	static Vector2 SubtractVector2(Vector2 vector_1, Vector2 vector_2);

	static float Vector2Lenght(Vector2 vector2);

	static Vector2 UnitVector(Vector2 vector2);

	float x;
	float y;


private:

};

