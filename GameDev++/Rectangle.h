#pragma once
#include "Shape.h"


class Rectangle : public Shape
{
private: 
	int width;
	int height;

public:
	Rectangle(int w, int h);
	float area();
	virtual void draw(sf::RenderWindow& window);

};

