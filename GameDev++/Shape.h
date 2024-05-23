#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Vec2.h"


class Shape : public sf::Transformable
{
private:
	

public:
	Shape();
	virtual void SetPosition(sf::Vector2f position);
	virtual float area();	
    virtual void draw(sf::RenderWindow& window);
	
};

