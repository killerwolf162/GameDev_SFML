#pragma once
#include "MathUtil.h"
#include <math.h>
#include <SFML/Graphics.hpp>

class Vec2
{
public:

	Vec2(float x, float y);

	sf::Vector2f ConvertVector2();

	static float DotProduct(Vec2 vector_1, Vec2 vector_2);

	static Vec2 AddVec2(Vec2 vector_1, Vec2 vector_2);

	static Vec2 SubtractVec2(Vec2 vector_1, Vec2 vector_2);

	static float Vec2Lenght(Vec2 Vec2);

	static Vec2 UnitVector(Vec2 Vec2);

	float x_pos;
	float y_pos;


private:

};

