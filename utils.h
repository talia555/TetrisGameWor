#pragma once
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <windows.h>
#include <time.h>
constexpr int ESC = 27;
using namespace std;

void gotoxy(int, int); // prototype
void clrscr(); // prototype



enum dementions
{    
	width = 30,
    high = 20, 
    LEFT = 'j',
	RIGHT = 'l',
	DOWN = 'm',
	space = 40
};

enum Color
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGREY = 7,
	DARKGREY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};

