#define _USE_MATH_DEFINES
#include <iostream>
#include "Circle.h"


Circle::Circle(int radius)
{
	this-> radius = radius;
}

float Circle::area()
{
	return M_PI * radius * radius;
}

void Circle::draw(sf::RenderWindow& window)
{
	shape.setRadius(radius);
	window.draw(shape);
}

void Circle::SetPosition(int x_pos, int y_pos)
{
	Vec2 vector = Vec2(x_pos, y_pos);
	shape.setPosition(vector.ConvertVector2());
}
