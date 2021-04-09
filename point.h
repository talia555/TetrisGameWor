#pragma once
#include "utils.h"




class point {

	char figure;
	int x, y;
	int dirX;
	int dirY;
public:
	
	//point() = default;

	point(int _x = 0, int _y = 0, char _figure = ' ')
	{
		x = _x;
		y = _y;
		figure = _figure;
		dirX = 0;
		dirY = 0;
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

	void setPoint(int _x, int _y, char _figure=' ')
	{
		x = _x;
		y = _y;
		figure = _figure;
	}
	
	bool isEmpty() { return figure == ' '; }
	void erase();
	void draw();
	void direction();
	void move();
	void runPoint(point& p);
	operator char() { return figure; }
	friend ostream& operator<<(ostream& os, const point& p)
	{
		os << p.figure;
		return os;
	}

	
};



	




