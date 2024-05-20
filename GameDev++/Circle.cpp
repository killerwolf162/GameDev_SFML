#define _USE_MATH_DEFINES
#include <iostream>
#include "Circle.h"


Circle::Circle(int r, int pC)
{
	radius = r;
	pointCount = pC;
}

float Circle::area()
{
	return M_PI * radius * radius;
}

void Circle::draw(sf::RenderWindow& window)
{
	sf::CircleShape circle = sf::CircleShape(radius, pointCount);
	window.draw(circle);
}
