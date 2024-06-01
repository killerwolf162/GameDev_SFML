#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "GameManager.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vec2.h"
#include "Player.h"
#include "Enemy.h"
#include "MathUtil.h"

int GameManager::health = 5;
int GameManager::score = 0;

int main()
{
	int screenSizeX = 1000;
	int screenSizeY = 800;

	sf::RenderWindow window(sf::VideoMode(screenSizeX, screenSizeY), "SFML works!");

	window.setFramerateLimit(10);

	Player player(50, 50);
	Enemy enemy1(100, 30);
	Enemy enemy2(100, 30);

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

				if (MathUtil::checkForCollision(Vec2(player.xPos, player.yPos), Vec2(it->xPos, it->yPos), player.width / 2, it->radius) == true)
				{
					GameManager::decreaseHealth();
					it = enemies.erase(it);
					std::cout << "Health:" << GameManager::health << std::endl;
				}
				if (it->isOffScreen() == true)
				{
					GameManager::addScore();
					it = enemies.erase(it);
					std::cout << "Score:" << GameManager::score << std::endl;
				}
				else
				{
					it->Draw(window);
					it->Move();
				}
			}
		}

		if (GameManager::health <= 0)
		{
			//window.close();
		}

		if (enemies.size() < 5)
		{
			Enemy enemy(25, 30);
			enemy.screenSizeX = screenSizeX;
			enemy.screenSizeY = screenSizeY;
			enemy.SetPosition(std::rand() % 1000, -100);

			enemies.push_back(enemy);
		}

		player.Draw(window);
		player.Move();

		window.display();
	}

	return 0;


}
