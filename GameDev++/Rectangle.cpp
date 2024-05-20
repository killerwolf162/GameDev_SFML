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

void Rectangle::draw(sf::RenderWindow& window)
{
	sf::RectangleShape rect = sf::RectangleShape(sf::Vector2f(width, height));
	window.draw(rect);
}

