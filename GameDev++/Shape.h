#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Vec2.h"


class Shape : public sf::Transformable
{
private:
	

public:
	Shape();

	Vec2 up = Vec2(0, -2);
	Vec2 down = Vec2(0, 2);
	Vec2 right = Vec2(2, 0);
	Vec2 left = Vec2(-2, 0);

	int screenSizeX;
	int screenSizeY;
	int xPos;
	int yPos;


	virtual void SetPosition(sf::Vector2f position);
	virtual float Area();	
    virtual void Draw(sf::RenderWindow& window);
	
};

