#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	
	float radius;
	int pointCount;

public:
	Circle(int radius, int pointCount);
	float area();
	void draw(sf::RenderWindow& window);

};