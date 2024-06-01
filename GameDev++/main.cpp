#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vec2.h"
#include "Player.h"
#include "Enemy.h"

int main()
{
	int screenSizeX = 1000;
	int screenSizeY = 800;

	sf::RenderWindow window(sf::VideoMode(screenSizeX, screenSizeY), "SFML works!");

	window.setFramerateLimit(30);

	Player player(50, 50);

	std::vector<Enemy> enemies;
	auto it = enemies.begin();

	for (int i = 0; i < 10; i++)
	{
		Enemy enemy(25, 30);
		enemy.screenSizeX = screenSizeX;
		enemy.screenSizeY = screenSizeY;
		enemy.SetPosition(std::rand() % 1000, -i*100);

		enemies.push_back(enemy);
	}
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


		if (enemies.size() > 1)
		{
			for (it = enemies.begin(); it != enemies.end(); it++)
			{
				if (it->isOffScreen() == true)
				{
					it = enemies.erase(it);
				}
				else
				{
					it->Draw(window);
					it->Move();
				}
			}
		}

		if (enemies.size() < 5)
		{
			Enemy enemy(25, 30);
			enemy.screenSizeX = screenSizeX;
			enemy.screenSizeY = screenSizeY;
			enemy.SetPosition(std::rand() % 1000, -100);

			enemies.push_back(enemy);
		}
		

		std::cout << enemies.size() << std::endl;

		player.Draw(window);
		player.Move();
		window.display();
	}

	return 0;


}