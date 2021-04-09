#pragma once
#include "board.h"
#include "utils.h"
#include "point.h" // The rest
board:: board()
{
	matrix = new point * [width];
	for (int i = 0; i < width; i++)
		matrix[i] = new point[high];//to check if it is working and init the points (x,y)
	runBoard();
}

void board::runBoard()
{
	void creatboard();
//	void printFrame();
}

void board::printFrame(int x)
{
	gotoxy(x, 0);
	for (int i = 0; i < high; i++)
	{
		gotoxy(x, i);
		for (int j = 0; j < width; j++)
		{
			cout << matrix[i][j];          //we will biuld oprtator printer
		}
		cout << endl;
	}
}

void board::creatboard()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == (high - 1))
			{
				matrix[i][j].setPoint(i, j,'_');
			}
			else if (j == 0 || j == (width - 1))
			{
				matrix[i][j].setPoint(i, j, '|');

			}
			else
				matrix[i][j].setPoint(i, j, ' ');
		}
	}
}


ostream& operator<<(ostream& os, const board& _board)
{
	int i, j;
	for (i = 0; i < high; i++)
		for (j = 0; j < width; j++)
			os << _board[i][j].getFigure();
	return os;
}