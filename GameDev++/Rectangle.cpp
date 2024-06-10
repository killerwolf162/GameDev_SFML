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

float Rectangle::Area()
{
	return width * height;
}

void Rectangle::Draw(sf::RenderWindow& window)
{
	Vec2 vector = Vec2(width,height);
	shape.setSize(vector.ConvertVector2());
	window.draw(shape);
}

void Rectangle::SetPosition(int xPos, int yPos)
{
	Vec2 vector = Vec2(xPos, yPos);
	shape.setPosition(vector.ConvertVector2());
}

