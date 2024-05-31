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

void Circle::SetPosition(int xPos, int yPos)
{
	Vec2 vector = Vec2(xPos, yPos);
	shape.setPosition(vector.ConvertVector2());
}
