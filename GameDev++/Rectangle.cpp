#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}

float Rectangle::area()
{
	return width * height;
}

void Rectangle::draw()
{
	std::cout << " drawing rectangle " << std::endl;
}

