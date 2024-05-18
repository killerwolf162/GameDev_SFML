#define _USE_MATH_DEFINES
#include <iostream>
#include "Circle.h"
#include <math.h>

Circle::Circle(float r, std::size_t pC)
{
	radius = r;
	pointCount = pC;
}

float Circle::area()
{
	return M_PI * radius * radius;
}



//void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
//{
//	target.draw(m_sprite, states);
//	//std::cout << " drawing circle " << std::endl;
//}