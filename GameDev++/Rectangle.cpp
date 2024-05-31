#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int w, int h)
{
	this->width = w;
	this->height = h;
}

void Rectangle::SetSize(int w, int h)
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
	Vec2 vector = Vec2(width,height);
	shape.setSize(vector.ConvertVector2());
	window.draw(shape);
}

void Rectangle::SetPosition(int x_pos, int y_pos)
{
	Vec2 vector = Vec2(x_pos, y_pos);
	shape.setPosition(vector.ConvertVector2());
}

