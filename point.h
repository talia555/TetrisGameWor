#pragma once
#include "utils.h"

class point
{
	int x,y;
	char figure;  //somtimes ' ' sometimes \n

public:
	

	point(int _x=0, int _y=0, char _figure=' ')
	{
		x = _x;
		y = _y;
		_figure = figure;
	}
	
	
};


class point {

	char figure = ' ';
	int x = 1, y =1;
	int dirX = 0;
	int dirY = 0;
public:
	


	point()
	{
		x = 0;
		y = 0;
		figure = ' ';
	}

	point(int _x, int _y, char _figure = '*')
	{
		x = _x;
		y = _y;
		figure = _figure;
	}

	int getX()
	{
		return this->x;
	}

	void setX(int _x)
	{
		x = _x;
	}

	void setY(int _y)
	{
		y = _y;
	}

	int getY()
	{
		return this->y;
	}
	char getBoard1()
	{
		return board1[high][width];
	}

	void setPoint(int _x, int _y, char _figure=' ')
	{
		x = _x;
		y = _y;
		figure = _figure;
	}
	void runPoint(int x, int y);
	void direction();
	void move();
	void draw(int x, int y);
	void erase(int x, int y);
	bool checksettle(int x, int y);
	void putFeatureBoard();
};

