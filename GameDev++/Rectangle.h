#pragma once
#include "Shape.h"
#include "Vec2.h"


class Rectangle : public Shape
{
private: 
	sf::RectangleShape shape;
	sf::Vector2f size;
	int width;
	int height;
	
public:
	Rectangle(int w, int h);
	float area();
	void SetSize(Vec2 size);
	virtual void draw(sf::RenderWindow& window);
	void SetPosition(Vec2 position);

};

