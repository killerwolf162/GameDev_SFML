#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	
	float radius;
	sf::CircleShape shape;
	int x;
	int y;

public:
	Circle(int radius);
	float area();
	void draw(sf::RenderWindow& window);
	void SetPosition(sf::Vector2f position);
	

};