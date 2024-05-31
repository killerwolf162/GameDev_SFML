#pragma once
#include "Circle.h"

class Enemy : public Circle
{
public:
	Enemy();
	void move();


private:
	int movement_speed;
	float radius;
	int x_pos;
	int y_pos;


};

