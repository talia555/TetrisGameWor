#pragma once
#include "board.h"
#include "utils.h"


void board::runBoard()
{
	void creatboard();
	void printFrame();
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
				matrix[i][j].setPoint(i, j);
		}
	}
}
