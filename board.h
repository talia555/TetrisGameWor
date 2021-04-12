#pragma once
#include <iostream>
#include "utils.h"
using namespace std;

class point;// this how we solve circular include (go to cpp to see the rest)

class board
{
	point** matrix;
	
	
public:
	static int pointToPrint;
	board();
	int getHigh() { return high; }
	int getWidth() { return width; }
	void runBoard();
	void creatboard();
	void printFrame(int x);
	operator point**() const{ return matrix; }

	void runPoint(point p);

	/*bool  checksettle(int x, int y)
	{
	if (!(matrix[y + 1][x].isEmpty()))
		return true;
	else
		return false;

	}
void putFeagureBoard()
{
	matrix[][x] = figure;
}*/

	friend ostream& operator<<(ostream& os, const board& _board);
	
};