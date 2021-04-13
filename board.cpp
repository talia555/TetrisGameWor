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
	printBoard(pointToPrint);
	pointToPrint = 40;
}

void board::printBoard(int x)
{
	gotoxy(x, 1);
	for (int i = 0; i < high; i++)
	{
		gotoxy(x, i);
		for (int j = 0; j <width; j++)
		{
			cout << matrix[i][j];
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
	
		// matrix[p.getY() + 1][p.getX()] == '*';
	while (!_kbhit() || getchar() != ESC)
	{


		while (matrix[p.getY()][p.getX()].isEmpty() && p.getY() != high-1)
		{
			if (canPutSquer(p))
				break;

			p.move();
			p.draw();
			Sleep(300);
			p.erase();
			cout.flush();

		}

		matrix[p.getY()][p.getX()].setFigure('*');
		p.reset();

		printBoard(1);
	}


}

bool board::canPutSquer(point p) {return matrix[p.getY() + 1][p.getX()] == '*'; }