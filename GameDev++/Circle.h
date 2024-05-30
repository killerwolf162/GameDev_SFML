#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	
	float radius;
	sf::CircleShape shape;

public:
	Circle(int radius);
	float area();
	void draw(sf::RenderWindow& window);
	void SetPosition(int x_pos, int y_pos);
};