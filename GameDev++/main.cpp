#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vec2.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 600), "SFML works!");
	Circle circle(100);
	Rectangle rect(1, 1);

	Vec2 a(100, 100);
	Vec2 b(-5, 5);

	Vec2 c = Vec2::AddVec2(a, b);

	std::cout << circle.area() << std::endl;
	std::cout << rect.area() << std::endl;
	std::cout << a.Vec2Lenght(a) << std::endl;
	std::cout << "(" << c.x_pos << "," << c.y_pos << ")" << std::endl;

	circle.setPosition(100, 200);



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();

		rect.SetSize(Vec2(100,100));

		circle.draw(window);
		rect.draw(window);

		circle.SetPosition(sf::Vector2f(100.00f, 100.00f));
		rect.SetPosition(Vec2(100.00f, 400.00f));

		window.display();
	}

	return 0;


}