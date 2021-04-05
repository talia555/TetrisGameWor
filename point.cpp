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

void point::runPoint(int x, int y)
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
				gotoxy(getX(), getY());
				draw(getX(), getY());
			}

			cout.flush();
		}
		if (!_kbhit())
		{
			y++;
			setY(y);
			draw(getX(), getY());
		}
		erase(getX(), getY());
	}
}


void point::erase(int x, int y)
{
	gotoxy(x, y);
	cout << " ";
}

void point::draw(int x, int y)
{
	gotoxy(x, y);
	cout << "*";
	Sleep(300);
}


void point::move()
{
	direction();
	x += dirX;
	y += dirY;
	if (y > high)
		y = 0;
	if (x > width)
		x = 0;
	if (x < minX)
		x = width;
	if (y < minY)
		y = width;
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
	default:
		break;
	}

}




