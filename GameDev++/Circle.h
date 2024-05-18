#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	
	float radius;

	std::size_t pointCount;

public:
	Circle(float r, std::size_t pointCount);
	float area();
	//virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};