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
	int screenSizeX = 1000;
	int screenSizeY = 800;

	sf::RenderWindow window(sf::VideoMode(screenSizeX, screenSizeY), "SFML works!");

	window.setFramerateLimit(30);

	Player player(50, 50);
	player.screenSizeX = screenSizeX;
	player.screenSizeY = screenSizeY;
	player.SetPosition(screenSizeX/2 - player.width/2 , screenSizeY - 2*player.height);

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