#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include "point.h"
constexpr int ESC = 27;
using namespace std;

class board
{
	int width = 30, high = 20;
	point** myBoard1;
	point** myBoard2;

public:
	board(int _width, int _high)
	{
		width = _width;
		high = _high;
		myBoard = new point*[width];
		for(int i=0)

	}

	enum { width = 30, high = 20, minX = 1, minY = 1, LEFT = 'j', RIGHT = 'l', DOWN = 'm', space = 40 };
	


	void runBoard();
	void creatboard1();
	void creatboard2();
	void printFrame1();
	void printFrame2();
};