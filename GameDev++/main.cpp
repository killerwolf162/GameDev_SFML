#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vec2.h"
#include "Player.h"

int main()
{
	int screen_size_x = 1000;
	int screen_size_y = 800;

	sf::RenderWindow window(sf::VideoMode(screen_size_x, screen_size_y), "SFML works!");

	window.setFramerateLimit(30);

	Player player(50, 50);
	player.screen_size_x = screen_size_x;
	player.screen_size_y = screen_size_y;
	player.SetPosition(screen_size_x/2 - player.width/2 , screen_size_y - 2*player.height);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();		

		player.draw(window);
		player.Move();
		window.display();
	}

	return 0;


}