#pragma once
#include "utils.h"


class point
{
	int x,y;
	char figure;  //somtimes ' ' sometimes '*'

public:
	point(int _x, int _y, char _figure=' ',int color=3)
	{
		x = _x;
		y = _y;
		_figure = figure;
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

	char getFigure()
	{
		return figure;
	}

	void erase(point& p);
	void draw(point& p);
	void direction();
	void move();
	void runPoint(point& p);

	
	
};



	

	void runPoint(int x, int y);

	void draw(int x, int y);
	void erase(int x, int y);
	bool checksettle(int x, int y);
	void putFeatureBoard();
};

