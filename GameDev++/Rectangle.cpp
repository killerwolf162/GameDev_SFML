#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int w, int h)
{
	this->width = w;
	this->height = h;
}



void Rectangle::SetSize(Vec2 size)
{
	this->size = size;
	shape.setSize(size.ConvertVector2());
}

float Rectangle::area()
{
	return width * height;
}

void Rectangle::draw(sf::RenderWindow& window)
{
	shape.setSize(sf::Vector2f(width, height));
	window.draw(shape);
}

void Rectangle::SetPosition(Vec2 position)
{
	shape.setPosition(position.ConvertVector2());
}

