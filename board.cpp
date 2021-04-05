#pragma once
#include "board.h"
#include "utils.h"


void board::runBoard()
{
	void creatboard1();
	void creatboard2();
	void printFrame1();
	void printFrame2();
}

void board::printFrame2()
{
	gotoxy(space, 0);
	for (int i = 0; i < high; i++)
	{
		gotoxy(space, i);
		for (int j = 0; j < width; j++)
		{
			cout << board2[i][j];
		}
		cout << endl;
	}
}


void board::printFrame1()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << board1[i][j];
		}
		cout << endl;
	}
}


void board::creatboard2()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == (high - 1))
			{
				board2[i][j] = '_';
			}

			else if (j == 0 || j == (width - 1))
			{
				board2[i][j] = '|';

			}
			else
				board2[i][j] = ' ';
		}
	}
}



void board::creatboard1()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == (high - 1))
			{
				board1[i][j] = '_';
			}
			else if (j == 0 || j == (width - 1))
			{
				board1[i][j] = '|';

			}
			else
				board1[i][j] = ' ';
		}
	}
}
