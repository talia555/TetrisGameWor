#pragma once
#include "utils.h"
#include "board.h"
#include "point.h"

class Game
{
	board b1,b2;
	
	//menu m;
public:
	Game(): b1(), b2(){}
	
	void runGame();
	void checkBoardPlace();
	bool checkEndGame();
};