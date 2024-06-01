#define _USE_MATH_DEFINES
#include "Vec2.h"

Vec2::Vec2()
{
}

Vec2::Vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

sf::Vector2f Vec2::ConvertVector2()
{
	return sf::Vector2f(x, y);
}

float Vec2::DotProduct(Vec2 vector_1, Vec2 vector_2)
{
	float dot_x = vector_1.x * vector_2.y;
	float dot_y = (vector_1.x * vector_2.y);

	return dot_x + dot_y;
}

Vec2 Vec2::AddVec2(Vec2 vector_1, Vec2 vector_2)
{
	float new_x = vector_1.x + vector_2.x;
	float new_y = vector_1.y + vector_2.y;


	return Vec2(new_x, new_y);
}

Vec2 Vec2::SubtractVec2(Vec2 vector_1, Vec2 vector_2)
{
	float new_x = vector_1.x - vector_2.x;
	float new_y = vector_1.y - vector_2.y;


	return Vec2(new_x, new_y);
}

float Vec2::Vec2Lenght(Vec2 Vec2)
{
	float length = sqrt(pow(Vec2.x, 2) + pow(Vec2.y, 2));

	return length;
}

Vec2 Vec2::UnitVector(Vec2 Vect2)
{
	float length = Vec2Lenght(Vect2);

	float norm_x = Vect2.x/length;
	float norm_y = Vect2.y / length;

	return Vec2(norm_x, norm_y);
}

Vec2 Vec2::ScaleVec2(Vec2 vector2, int scalar)
{
	return Vec2(vector2.x*scalar, vector2.y*scalar);
}
