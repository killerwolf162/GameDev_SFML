#define _USE_MATH_DEFINES
#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	x = x;
	y = y;
}

float Vector2::DotProduct(Vector2 vector_1, Vector2 vector_2)
{
	float dot_x = vector_1.x * vector_2.y;
	float dot_y = (vector_1.x * vector_2.y);

	return dot_x + dot_y;
}

Vector2 Vector2::AddVector2(Vector2 vector_1, Vector2 vector_2)
{
	float new_x = vector_1.x + vector_2.x;
	float new_y = vector_1.y + vector_2.y;


	return Vector2(new_x, new_y);
}

Vector2 Vector2::SubtractVector2(Vector2 vector_1, Vector2 vector_2)
{
	float new_x = vector_1.x - vector_2.x;
	float new_y = vector_1.y - vector_2.y;


	return Vector2(new_x, new_y);
}

float Vector2::Vector2Lenght(Vector2 vector2)
{
	float length = sqrt(pow(vector2.x, 2) + pow(vector2.y, 2));

	return length;
}

Vector2 Vector2::UnitVector(Vector2 vector2)
{
	float length = Vector2Lenght(vector2);

	float norm_x = vector2.x/length;
	float norm_y = vector2.y / length;

	return Vector2(norm_x, norm_y);
}