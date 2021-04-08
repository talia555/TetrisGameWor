#pragma once
#include "utils.h"


class point
{
	int x,y;
	char figure;  //somtimes ' ' sometimes '*'

public:
<<<<<<< HEAD
	

	point(int _x=0, int _y=0, char _figure=' ')
=======
	point(int _x, int _y, char _figure=' ',int color=3)
>>>>>>> 91253e950cc90c7f351daa39c549cd54aeb86a03
	{
		x = _x;
		y = _y;
		_figure = figure;
	}
<<<<<<< HEAD
	
	
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
=======
>>>>>>> 91253e950cc90c7f351daa39c549cd54aeb86a03

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

<<<<<<< HEAD
	void setPoint(int _x, int _y, char _figure=' ')
	{
		x = _x;
		y = _y;
		figure = _figure;
	}
	void runPoint(int x, int y);
=======
	void erase(point& p);
	void draw(point& p);
>>>>>>> 91253e950cc90c7f351daa39c549cd54aeb86a03
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

