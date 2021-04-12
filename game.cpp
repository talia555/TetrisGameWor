#pragma once
#include"game.h"




void Game::runGame()
{
	bool END = false;
	
	while (END == false)
	{
		point start(10, 0, '*');
		b1.runPoint(start);
		
		checkBoardPlace();
		END = checkEndGame();
	}
	cout << "GAME OVER";
}

bool Game::checkEndGame()
{
	
	
	for (int i = 1; i <width-1; i++)
	{
		if (!(b1[0][i].isEmpty()))
			return true;

		if (!(b2[0][i].isEmpty()))
			return true;

	}

}


void Game::checkBoardPlace() 
{
	//To do
}