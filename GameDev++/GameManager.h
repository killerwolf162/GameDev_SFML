#pragma once
class GameManager
{

public:
	static int score;
	static int health;

	static void addScore();
	static void addHealth();
	static void decreaseHealth();
	static void gameOver();
};



