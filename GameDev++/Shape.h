#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Vector2.h"


class Shape
{
private:
    //sf::VertexArray    m_vertices;         //!< Vertex array containing the fill geometry
    //sf::VertexArray    m_outlineVertices;  //!< Vertex array containing the outline geometry
    //sf::Sprite         m_sprite;

    //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:
	Shape();
	virtual float area();	
    virtual void draw(sf::RenderWindow& window);
};

