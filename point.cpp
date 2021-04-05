#pragma once
#include "point.h"



bool  point::checksettle(int x, int y)
{
	if (board[y + 1][x] != ' ')
		return true;
	else
		return false;

}
void point::putFeatureBoard()
{
	board[y][x] = figure;
}

void point::runPoint(point& p)
{
	cout.flush();
	int i, iter = 30;

	while (!_kbhit() || getchar() != ESC)
	{
		for (int i = 0; i < iter; i++)
		{
			if (_kbhit())
			{
				move();
				draw(p);
			}

			cout.flush();
		}
		if (!_kbhit())
		{
			setY(++y);
			draw(p);
		}
		erase(p);
	}
}




void point::move()
{
	direction();
	x += dirX;
	y += dirY;
	if (y > high)
		y = high;
	if (x > width)
		x = width;

}


void point::direction()
{
	char c = _getch();

	switch (c)
	{
	case LEFT:
		dirX = -1;
		dirY = 0;
		break;
	case RIGHT:
		dirX = 1;
		dirY = 0;
		break;
	case DOWN:
		dirY = 1;
		dirX = 0;
		break;
	}

}




