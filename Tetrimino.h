#ifndef __TETRIMINO_H
#define __TTRIMINO_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

class Tetrimino
{
	char *tetrimino;
	int rows;
	int cols;

public:
	Tetrimino()
	{
		srand(time(0));
		int temp = (rand()%7)+1;
		int i;
		switch (temp)
		{
		case 1:
			tetrimino = new char[4]{'*','*' ,'*' ,'*' };
			rows = 1;
			cols = 4;
			break;
		case2:

			break;
		case3:

			break;
		case4:

			break;
		case5:

			break;
		case6:

			break;
		case7:

			break;
		}
	}

	int getRows() { return rows; }
	int getCols() { return cols; }
	operator char* () { return tetrimino; }

	//// operator cout
	
};






#endif // !__TETRINO_H
