#pragma once
#include "utils.h"


class Game
{
	board b1, b2; 
	menu m;
public:
	Game()
	{
		board b1(22, 28);
		board b2(22, 28);
	}
	void runGame();
	void checkBoardPlace();
	bool checkEndGame();
};