#pragma once
#include "Rectangle.h"
#include "Vec2.h"

class Player : public Rectangle
{

private:

public:

	sf::RectangleShape shape;
	
	Vec2 move_force = Vec2(0, 0);

	Vec2 up = Vec2(0,-1);
	Vec2 down = Vec2(0, 1);
	Vec2 right = Vec2(1, 0);
	Vec2 left = Vec2(-1, 0);
	float brake_force = 5;
	float resistance = 0.3;

	int x_pos;
	int y_pos;
	int width;
	int height;
	int x_speed = 5;
	int y_speed = 5;
	int mass;
	int screen_size_x;
	int screen_size_y;

	Player();
	Player(int w, int h);
	void Move();
	float Area();
	void SetSize(int w, int h);
	virtual void draw(sf::RenderWindow& window);
	void SetPosition(int x_pos, int y_pos);
};

