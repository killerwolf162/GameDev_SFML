#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Vec2.h"


class Shape : public sf::Transformable
{
private:
	

public:
	Shape();

	Vec2 up = Vec2(0, 1);
	Vec2 down = Vec2(0, -1);
	Vec2 right = Vec2(1, 0);
	Vec2 left = Vec2(-1, 0);

	virtual void SetPosition(sf::Vector2f position);
	virtual float area();	
    virtual void draw(sf::RenderWindow& window);
	
};

