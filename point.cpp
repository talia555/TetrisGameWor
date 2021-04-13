#pragma once
#include "point.h"








void point::move()
{
	direction();
	x += dirX;
	y += dirY;
	if (y > high-1)
		y = high-1;
	if (x > width-1)
		x = width-1;

}


void point::direction()
{
	char c = DOWN;
	
	while (_kbhit())
		 c = _getch();
	
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

	//yes, very nice you are a vary smart girl


}



void point::erase()
{
	figure = ' ';
	gotoxy(x, y);
	cout << figure;
	gotoxy(x, y);

}
void point::draw()
{
	figure = '*';
	gotoxy(x, y);
	cout << figure;
	gotoxy(x, y);
}

void point::reset()
{
	x = 10;
	y = 0;
	figure = '*';
	dirX = 0;
	dirY = 0;
}