#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	
	float radius;
	sf::CircleShape shape;

public:
	Circle();
	Circle(int radius);
	float Area();
	void Draw(sf::RenderWindow& window);
	void SetPosition(int xPos, int yPos);
};