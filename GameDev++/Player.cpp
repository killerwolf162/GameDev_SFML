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

void Player::draw(sf::RenderWindow& window)
{
	Vec2 vector = Vec2(width, height);
	shape.setSize(vector.ConvertVector2());
	shape.setFillColor(sf::Color::Blue);
	window.draw(shape);
}

void Player::SetPosition(int x_pos, int y_pos)
{
	this->x_pos = x_pos;
	this->y_pos = y_pos;
	Vec2 vector = Vec2(x_pos, y_pos);
	shape.setPosition(vector.ConvertVector2());
}

void Player::Move()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		move_force = Vec2::AddVec2(move_force, left);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		move_force = Vec2::AddVec2(move_force, right);
	}
	/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		move_force = Vec2::AddVec2(move_force, up);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		move_force = Vec2::AddVec2(move_force, down);
	}*/
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		if (move_force.x_pos > 0)
		{
			move_force.x_pos = move_force.x_pos - brake_force;
		}
		if (move_force.x_pos < 0)
		{
			move_force.x_pos = move_force.x_pos + brake_force;
		}
		/*if (move_force.y_pos > 0)
		{
			move_force.y_pos = move_force.y_pos - brake_force;
		}
		if (move_force.y_pos < 0)
		{
			move_force.y_pos = move_force.y_pos + brake_force;
		}*/
	}

	if (move_force.x_pos > 0)
	{
		move_force.x_pos = move_force.x_pos - resistance;
	}
	if (move_force.x_pos < 0)
	{
		move_force.x_pos = move_force.x_pos + resistance;
	}
	/*if (move_force.y_pos > 0)
	{
		move_force.y_pos = move_force.y_pos - resistance;
	}
	if (move_force.y_pos < 0)
	{
		move_force.y_pos = move_force.y_pos + resistance;
	}*/

	if (x_pos < 0 || x_pos > screen_size_x - width)
	{
		move_force.x_pos = -move_force.x_pos;
	}
	/*if (y_pos < 0 || y_pos > screen_size_y - height)
	{
		move_force.y_pos = -move_force.y_pos;
	}*/

	Vec2 current_pos = Vec2(x_pos, y_pos);
	Vec2 movement = Vec2(move_force.x_pos, move_force.y_pos);
	Vec2 move_to = Vec2::AddVec2(current_pos, movement);

	this->x_pos = move_to.x_pos;
	this->y_pos = move_to.y_pos;

	shape.setPosition(move_to.ConvertVector2());
}