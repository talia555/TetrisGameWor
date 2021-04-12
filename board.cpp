#pragma once
#include "board.h"
#include "utils.h"
#include "point.h" // The rest


board:: board()
{
	int i, j;
	
	matrix = new point* [high];
	for (i = 0; i < high; i++)
		matrix[i] = new point[width];//to check if it is working and init the points (x,y)
	runBoard();
}

void board::runBoard()
{
	creatboard();
	printFrame(pointToPrint);
	pointToPrint = 40;
}

void board::printFrame(int x)
{
	gotoxy(x, 1);
	for (int i = 0; i < high; i++)
	{
		gotoxy(x, i);
		for (int j = 0; j <width; j++)
		{
			cout << matrix[i][j];        //we will biuld oprtator printer
		}
	}
	cout << endl;

}

void board::creatboard()
{
	for (int i = 0; i < high; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == (high - 1))
			{
				matrix[i][j].setPoint(i, j,'_');
			}
			if ((j == 0) || j == (width - 1))
			{
				matrix[i][j].setPoint(i, j, '|');
			}
			else if(i != (high - 1))
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


void board::runPoint(point p)
{
	cout.flush();
	int i, iter = 30;

	while (!_kbhit() || getchar() != ESC)
	{
		for (int i = 0; i < iter; i++)
		{
			if (_kbhit())
			{
				p.move();
				p.draw();
				Sleep(100);
				p.erase();
			}

			cout.flush();
		}
		if (!_kbhit())
		{
			if (p.getY() < high -1)
			{
				p.incY();
				p.draw();
				Sleep(100);
				p.erase();
			}
			else
			{
				matrix[p.getY()][p.getX()].setFigure('*');
				p.reset();
			}
		
			printFrame(1);

			gotoxy(50, 0);
			cout << matrix[18][p.getX()] << "------------------------";
		}
		
	}
}
