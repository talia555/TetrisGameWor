#pragma once
#include"game.h"




void Game::runGame()
{
	bool END = false;
	while (END == false)
	{
		cout << b1;
		cout << b2;
		checkBoardPlace();
		END = checkEndGame();
	}
	cout << "GAME OVER";
}

bool Game::checkEndGame()
{
	
	
	for (int i = 0; i <b1.getWidth(); i++)
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