#ifndef __TETRIMINO_H
#define __TTRIMINO_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#pragma warning( disable : C26495)

using namespace std;

class Tetrimino
{
	char** tetrimino;
	int rows;
	int cols;

public:
	Tetrimino(): tetrimino(nullptr), rows(0), cols(0)
	{
		srand(time(0));
		int temp = (rand()%7)+1;
		int i;
		switch (temp)
		{
		case 1:
			tetrimino = new char* [1];
			tetrimino[0]= new char[4]{(char)223, (char)223, (char)223, (char)223 };
			rows = 1;
			cols = 4;
			break;
		case 2:
			tetrimino = new char* [2];
			tetrimino[0] = new char[3]{ (char)220,' ',' '};
			tetrimino[1] = new char[3]{ (char)223u,(char)223u,(char)223u };
			rows = 2;
			cols = 3;
			break;
		case 3:
			tetrimino = new char* [2];
			tetrimino[0] = new char[3]{ ' ',' ',(char)220};
			tetrimino[1] = new char[3]{ (char)223u,(char)223u,(char)223u};
			rows = 2;
			cols = 3;
			break;
		case 4:
			tetrimino = new char* [2];
			tetrimino[0] = new char[2]{ (char)220,(char)220};
			tetrimino[1] = new char[2]{ (char)223u,(char)223u};
			rows = 2;
			cols = 2;
			break;
		case 5:
			tetrimino = new char* [2];
			tetrimino[0] = new char[3]{ ' ',(char)220,(char)220 };
			tetrimino[1] = new char[3]{ (char)223u,(char)223u,' ' };
			rows = 2;
			cols = 3;
			break;
		case 6:
			tetrimino = new char* [2];
			tetrimino[0] = new char[3]{ ' ',(char)220,' ' };
			tetrimino[1] = new char[3]{ (char)223u,(char)223u,(char)223u };
			rows = 2;
			cols = 3;
			break;
		case 7:
			tetrimino = new char* [2];
			tetrimino[0] = new char[3]{ (char)220,(char)220,' ' };
			tetrimino[1] = new char[3]{ ' ',(char)223u,(char)223u };
			rows = 2;
			cols = 3;
			break;
		}
	}

	int getRows() { return rows; }
	int getCols() { return cols; }
	operator char** () { return tetrimino; }

	//// runPoint should get tetrimino instead

	friend ostream& operator<<(ostream& os, const Tetrimino& t)
	{
	
		for (int i = 0; i < t.rows; i++)
		{
			cout << endl;
			for (int j = 0; j < t.cols; j++)
				os << t.tetrimino[i][j];
		}
		return os;
	}
	
};






#endif // !__TETRINO_H
