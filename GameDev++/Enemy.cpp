#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(int radius, int pointCount)
{
	this->radius = radius;
	this->pointCount = pointCount;
}

bool Enemy::IsOffScreen()
{
	if (yPos > screenSizeY + 20)
	{
		return true;
	}
	else
		return false;
}


float Enemy::Area()
{
	return M_PI * radius * radius;
}

void Enemy::Draw(sf::RenderWindow& window)
{
	shape.setRadius(radius);
	shape.setFillColor(sf::Color::Red);
	window.draw(shape);
}

void Enemy::SetRadius(int r)
{
	this->radius = r;
}

void Enemy::SetPointCount(int pointCount)
{
	shape.setPointCount(pointCount);
}

void Enemy::SetPosition(int xPos, int yPos)
{
	this->xPos = xPos;
	this->yPos = yPos;
	Vec2 vector = Vec2(xPos, yPos);
	shape.setPosition(vector.ConvertVector2());
}

void Enemy::Move()
{
	
	if (moveForce.x > 0) // only apply horizontal friction when enemy is moving horizontaly
	{
		moveForce = Vec2::SubtractVec2(moveForce, frictionForceX);
	}
	if (moveForce.x < 0)
	{
		moveForce = Vec2::AddVec2(moveForce, frictionForceX);
	}
	
	if (xPos < 0 || xPos > screenSizeX - 2*radius) // gives force impulse when enemy hits border
	{
		if (xPos < 0)
		{
			int addRandomVelocityX = std::rand() % 10 + 15;
			moveForce.x /= 2;
			moveForce.x += -addRandomVelocityX;
		}
		if (xPos > screenSizeX - 2 * radius)
		{
			int addRandomVelocityX = std::rand() % 10 + 15;
			moveForce.x /= 2;
			moveForce.x += addRandomVelocityX;
		}
		moveForce.x *= -1;
	}

	Vec2 currentPos = Vec2(xPos, yPos);
	Vec2 moveTo = Vec2::AddVec2(currentPos, moveForce);

	this->xPos = moveTo.x;
	this->yPos = moveTo.y;

	shape.setPosition(moveTo.ConvertVector2());
}
