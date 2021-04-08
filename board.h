#include <iostream>

#include "point.h"
constexpr int ESC = 27;
using namespace std;


class board
{
	point** matrix;
	int width;
	int high;
public:

	board(){}
	board(int _width, int _high)
	{
		width = _width;
		high = _high;
		matrix = new point* [width];
		for (int i = 0; i < width; i++)
			matrix[i] = new point(i,high);//to check if it is working and init the points (x,y)

	}

	
	
	point** getBoard() { return matrix; }
	int getHigh() { return high; }
	int getWith() { return width; }
	void runBoard();
	void creatboard();
	void printFrame(int x);
	
};