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
	float Area();
	void SetSize(int w, int h);
	virtual void Draw(sf::RenderWindow& window);
	void SetPosition(int xPos, int yPos);

};

