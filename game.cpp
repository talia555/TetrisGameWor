#include"game.h"
#include"board.h"
#include"point.h"



void Game::runGame()
{
	bool END = false;
	while (END == false)
	{
		checkBoardPlace();
		END = checkEndGame();
	}
	cout << "GAME OVER";
}

bool Game::checkEndGame()
{
	
	
	for (int i = 0; i <b1.width; i++)
	{
		if (b1.getBoard(0,i).!isEmpty())
			return true;

		if (b2.getBoard(0, i).!isEmpty())
			return true;

	}
}
