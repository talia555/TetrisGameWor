#pragma once
#include "game.h"
#include "utils.h"
#include "Tetrimino.h"

int board::pointToPrint =1;

void main()
{
	Game game;
	game.runGame();

	
	/*while (true) {
		Tetrimino t;
		for (int i = 0; i < t.getRows(); i++)
		{
			cout << endl;
			for (int j = 0; j < t.getCols(); j++)
				cout << t[i][j];
		}
		Sleep(1000);
		cout << endl;

	}*/
}