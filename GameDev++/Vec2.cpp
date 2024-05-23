#define _USE_MATH_DEFINES
#include "Vec2.h"

Vec2::Vec2(float x, float y)
{
	x_pos = x;
	y_pos = y;
}

float Vec2::DotProduct(Vec2 vector_1, Vec2 vector_2)
{
	float dot_x = vector_1.x_pos * vector_2.y_pos;
	float dot_y = (vector_1.x_pos * vector_2.y_pos);

	return dot_x + dot_y;
}

Vec2 Vec2::AddVec2(Vec2 vector_1, Vec2 vector_2)
{
	float new_x = vector_1.x_pos + vector_2.x_pos;
	float new_y = vector_1.y_pos + vector_2.y_pos;


	return Vec2(new_x, new_y);
}

Vec2 Vec2::SubtractVec2(Vec2 vector_1, Vec2 vector_2)
{
	float new_x = vector_1.x_pos - vector_2.x_pos;
	float new_y = vector_1.y_pos - vector_2.y_pos;


	return Vec2(new_x, new_y);
}

float Vec2::Vec2Lenght(Vec2 Vec2)
{
	float length = sqrt(pow(Vec2.x_pos, 2) + pow(Vec2.y_pos, 2));

	return length;
}

Vec2 Vec2::UnitVector(Vec2 Vect2)
{
	float length = Vec2Lenght(Vect2);

	float norm_x = Vect2.x_pos/length;
	float norm_y = Vect2.y_pos / length;

	return Vec2(norm_x, norm_y);
}