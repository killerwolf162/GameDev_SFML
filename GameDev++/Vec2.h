#pragma once
#include <math.h>
#include <SFML/System/Vector2.hpp>

class Vec2
{
public:

	Vec2();
	Vec2(float x, float y);

	sf::Vector2f ConvertVector2();

	static float DotProduct(Vec2 vector1, Vec2 vector2);

	static Vec2 AddVec2(Vec2 vector1, Vec2 vector2);

	static Vec2 SubtractVec2(Vec2 vector1, Vec2 vector2);

	static float Vec2Lenght(Vec2 Vec2);

	static Vec2 UnitVector(Vec2 Vec2);

	static Vec2 ScaleVec2(Vec2 vector2, int scalar);

	float x;
	float y;

private:

};

