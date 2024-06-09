#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/window/Keyboard.hpp>
#include <sstream>
#include "GameManager.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Vec2.h"
#include "Player.h"
#include "Enemy.h"
#include "MathUtil.h"

int GameManager::health = 10;
int GameManager::score = 0;

int main()
{
	int screenSizeX = 1200;
	int screenSizeY = 675;

	sf::Text scoreText;
	sf::Text healthText;
	sf::Text endScoreText;
	sf::Font font;

	if (!font.loadFromFile("RetroGaming.ttf"))
	{

	}
	scoreText.setFont(font);
	scoreText.setCharacterSize(20);
	scoreText.setFillColor(sf::Color::Cyan);
	scoreText.setPosition(screenSizeX - 120, 20);

	healthText.setFont(font);
	healthText.setCharacterSize(20);
	healthText.setFillColor(sf::Color::Red);
	healthText.setPosition(0, 20);

	endScoreText.setFont(font);
	endScoreText.setCharacterSize(40);
	endScoreText.setFillColor(sf::Color::Cyan);
	endScoreText.setPosition(screenSizeX/2 -250, screenSizeY/2-100);

	sf::RenderWindow gameWindow(sf::VideoMode(screenSizeX, screenSizeY), "Dodge Ball");

	gameWindow.setFramerateLimit(30);

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
		enemy.SetPosition(std::rand() % 1000, -i * 100);

		enemies.push_back(enemy);
	}
	player.screenSizeX = screenSizeX;
	player.screenSizeY = screenSizeY;
	player.SetPosition(screenSizeX / 2 - player.width / 2, screenSizeY - 2 * player.height);


	while (gameWindow.isOpen())
	{
		sf::Event event;

		while (gameWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				gameWindow.close();
		}

		while (GameManager::health <= 0)
		{
			while (gameWindow.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					gameWindow.close();
			}
			gameWindow.clear();
			auto endScore = std::string("Your final score: ") + std::to_string(GameManager::score);
			endScoreText.setString(endScore);
			gameWindow.draw(endScoreText);
			gameWindow.display();
		}

		gameWindow.clear();


		auto score = std::string("Score: ") + std::to_string(GameManager::score);		
		auto health = std::string("Health: ") + std::to_string(GameManager::health);


		for (it = enemies.begin(); it != enemies.end(); it++)
		{

			if (MathUtil::checkForCollision(Vec2(player.xPos, player.yPos), Vec2(it->xPos, it->yPos), player.width / 2, it->radius) == true)
			{
				GameManager::decreaseHealth();
				it = enemies.erase(it);
			}
			if (it->isOffScreen() == true)
			{
				GameManager::addScore();
				it = enemies.erase(it);
			}
			else
			{
				it->Draw(gameWindow);
				it->Move();
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
		player.Draw(gameWindow);
		player.Move();

		scoreText.setString(score);
		healthText.setString(health);
		gameWindow.draw(scoreText);
		gameWindow.draw(healthText);

		gameWindow.display();
	}

	return 0;
}

