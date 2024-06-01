#pragma once
#include "Circle.h"

class Enemy : public Circle
{
private:

public:

	sf::CircleShape shape;

	Vec2 moveForce = Vec2(std::rand() % 5 + 25, std::rand() % 5 + 5);
	Vec2 brakeForceX = Vec2(5, 0);
	Vec2 frictionForceX = Vec2(0.2, 0);
	Vec2 brakeForceY = Vec2(0, 5);
	Vec2 frictionForceY = Vec2(0, 0.2);

	float radius;
	int pointCount;
	int xPos;
	int yPos;
	int screenSizeX;
	int screenSizeY;
	int movementSpeedX = 0;
	int movementSpeedY = 0;

	bool isOffScreen();


	Enemy();
	Enemy(int radius, int pointCount);
	float Area();
	void Draw(sf::RenderWindow& window);
	void SetRadius(int r);
	void SetPointCount(int pointCount);
	void SetPosition(int xPos, int yPos);
	void Move();
};

