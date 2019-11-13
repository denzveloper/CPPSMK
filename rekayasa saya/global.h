#include <iostream>	//cout & cin function
#include <math.h>		//math functions
#include <windows.h>	//system functions
#include <conio.h>
#include <stdio.h>
using namespace std;

void MENU();		//Decides what math option to execute
void EXIT();		//Gives variable to exit
void RorQ();		//Decides to restart or quit
void clrscr();		//Clears the screen

class variable		//Where variables are stored
{
public:
	int I;
	int menu;		//Variable for deciding the math option
	int exit;		//Variable for deciding whether to exit or reloop
	int exitRorQ;	//Variable for deciding whether to restart or exit
	int num1;		//Variable for a math number for integers
	int num2;		//Variable for a math number for integers
	double num3;	//Variable for a math number for doubles
	int equal;		//Variable for the math answer for integers
	double equal1;	//Variable for the math answer for doubles
	float equal2;	//Variable for the math answer for floats
	char rq[1];		//Variable for 'r' or 'q' (restart or quit)
	float per1;		//Variable for percent number in equation
	float per2;		//Variable for percent number in equation
};
class variable C;	//Assigns class to C
