#pragma once
class GameManager
{

public:
	static int score;
	static int health;

	static void AddScore();
	static void AddHealth();
	static void DecreaseHealth();
};



