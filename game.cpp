#include"game.h"
#include"board.h"
#include"point.h"



void Game::runGame()
{
	bool END = false;
	while (END == false)
	{
		teris()
		board taliab(23, 45);
		 board taliab(23,45).runBoard();
		point().runPoint();
		checkBoardPlace();
		END = checkEndGame();
	}
	cout << "GAME OVER";
	exit(-1);
}

bool Game::checkEndGame()
{
	board b;
	
	for (int i = 0; i <b.width; i++)
	{
		if (b.board1[0][i] != ' ')
			return true;

		if (b.board2[0][i] != ' ')
			return true;

	}
}
