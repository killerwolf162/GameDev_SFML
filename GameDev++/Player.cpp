#include "Player.h"
#include <iostream>
#include <SFML/Window/Keyboard.hpp>

Player::Player()
{
}

Player::Player(int w, int h)
{
	this->width = w;
	this->height = h;
}

float Player::Area()
{
	return width * height;
}

void Player::SetSize(int w, int h)
{
	width = w;
	height = h;
}

void Player::Draw(sf::RenderWindow& window)
{
	Vec2 vector = Vec2(width, height);
	shape.setSize(vector.ConvertVector2());
	shape.setFillColor(sf::Color::Blue);
	window.draw(shape);
}

void Player::SetPosition(int xPos, int yPos)
{
	this->xPos = xPos;
	this->yPos = yPos;
	Vec2 vector = Vec2(xPos, yPos);
	shape.setPosition(vector.ConvertVector2());
}

void Player::Move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		moveForce = Vec2::AddVec2(moveForce, left);
		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		moveForce = Vec2::AddVec2(moveForce, right);
	}
	/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		moveForce = Vec2::AddVec2(moveForce, up);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		moveForce = Vec2::AddVec2(moveForce, down);
	}*/
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		if (moveForce.x > 0)
		{
			moveForce = Vec2::SubtractVec2(moveForce, brakeForceX);
		}
		if (moveForce.x < 0)
		{
			moveForce = Vec2::AddVec2(moveForce, brakeForceX);
		}
		/*if (moveForce.yPos > 0)
		{
			moveForce = Vec2::SubtractVec2(moveForce, brakeForcey);
		}
		if (moveForce.yPos < 0)
		{
			moveForce = Vec2::AddVec2(moveForce, brakeForcey);
		}*/
	}

	if (moveForce.x > 0)
	{
		moveForce = Vec2::SubtractVec2(moveForce, frictionForceX);
	}
	if (moveForce.x < 0)
	{
		moveForce = Vec2::AddVec2(moveForce, frictionForceX);
	}
	/*if (moveForce.yPos > 0)
	{
		moveForce = Vec2::SubtractVec2(moveForce, frictionForceY);
	}
	if (moveForce.y < 0)
	{
		moveForce = Vec2::AddVec2(moveForce, frictionForceY);
	}*/

	if (xPos < 0 || xPos > screenSizeX - width)
	{
		moveForce.x *= -1;
	}
	/*if (yPos < 0 || yPos > screenSizeY - height)
	{
		moveForce.y = -moveForce.y;
	}*/


	Vec2 currentPos = Vec2(xPos, yPos);
	Vec2 moveTo = Vec2::AddVec2(currentPos, moveForce);

	this->xPos = moveTo.x;
	this->yPos = moveTo.y;

	shape.setPosition(moveTo.ConvertVector2());
}