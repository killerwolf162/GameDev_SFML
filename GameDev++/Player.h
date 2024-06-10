#pragma once
#include "Rectangle.h"
#include "Vec2.h"

class Player : public Rectangle
{

private:

public:

	sf::RectangleShape shape;
	
	Vec2 moveForce = Vec2(0, 0);
	Vec2 brakeForceX = Vec2(5, 0);
	Vec2 frictionForceX = Vec2(0.3, 0);
	Vec2 brakeForceY = Vec2(0, 5);
	Vec2 frictionForceY = Vec2(0, 0.3);

	int width;
	int height;

	Player();
	Player(int w, int h);
	void Move();
	float Area();
	void SetSize(int w, int h);
	virtual void Draw(sf::RenderWindow& window);
	void SetPosition(int xPos, int yPos);
};

