#pragma once
#include "utils.h"


class Game
{
	point point;
public:
	void runGame();
	void checkBoardPlace();
	bool checkEndGame();
};