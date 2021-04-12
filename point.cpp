#pragma once
#include "point.h"








void point::move()
{
	direction();
	x += dirX;
	y += dirY;
	if (y > high-2)
		y = high-2;
	if (x > width-2)
		x = width-2;

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



void point::erase()
{
	figure = ' ';
	gotoxy(x, y);
	cout << figure;
}
void point::draw()
{
	figure = '*';
	gotoxy(x, y);
	cout << figure;
}

void point::reset()
{
	x = 10;
	y = 0;
	figure = '*';
	dirX = 0;
	dirY = 0;
}