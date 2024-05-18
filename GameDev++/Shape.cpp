#include "Shape.h"

Shape::Shape()
{

}

float Shape::area()
{
	return 0;
}

void Shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_vertices, states);
	target.draw(m_outlineVertices, states);
	target.draw(m_sprite, states);
}
