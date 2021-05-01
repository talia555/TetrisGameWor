#pragma once
#include "game.h"
#include "utils.h"
#include "Tetrimino.h"

int board::pointToPrint =1;

void main()
{
	//Game game;
	//game.runGame();

	
	while (true) {
		Tetrimino t;
		for (int i = 0; i < t.getCols(); i++)
			cout << t[i];
		cout << endl;
	}
}