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

float Vec2::DotProduct(Vec2 vector1, Vec2 vector2)
{
	float dotX = vector1.x * vector2.y;
	float dotY = (vector1.x * vector2.y);

	return dotX + dotY;
}

Vec2 Vec2::AddVec2(Vec2 vector1, Vec2 vector2)
{
	float newX = vector1.x + vector2.x;
	float newY = vector1.y + vector2.y;


	return Vec2(newX, newY);
}

Vec2 Vec2::SubtractVec2(Vec2 vector1, Vec2 vector2)
{
	float newX = vector1.x - vector2.x;
	float newY = vector1.y - vector2.y;


	return Vec2(newX, newY);
}

float Vec2::Vec2Lenght(Vec2 vector)
{
	float length = sqrt(pow(vector.x, 2) + pow(vector.y, 2));
	if (length < 0)
	{
		length *= -1;
	}

	return length;
}

Vec2 Vec2::UnitVector(Vec2 vector)
{
	float length = Vec2Lenght(vector);

	float norm_x = vector.x/length;
	float norm_y = vector.y / length;

	return Vec2(norm_x, norm_y);
}

Vec2 Vec2::ScaleVec2(Vec2 vector, int scalar)
{
	return Vec2(vector.x*scalar, vector.y*scalar);
}

bool Vec2::CompareVectorComponentX(Vec2 vector1, Vec2 vector2)
{
	if (vector1.x > vector2.x)
	{
		return true;
	}
	if (vector1.x < vector2.x)
	{
		return false;
	}
}
