#pragma once
#include "Shape.h"
#include "Vec2.h"


class Rectangle : public Shape
{
private: 
	sf::RectangleShape shape;
	int width;
	int height;
	
public:
	Rectangle();
	Rectangle(int w, int h);
	float area();
	void SetSize(int w, int h);
	virtual void draw(sf::RenderWindow& window);
	void SetPosition(int x_pos, int y_pos);

};

