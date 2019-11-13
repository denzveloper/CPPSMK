#include"global.h" //header files, function prototypes, & classes

void setcolor(unsigned short color)
{
 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(hCon,color);
}

int main()
{
C.I = 1;
setcolor(C.I); // changes the color
 printf("color: %d\n", C.I); // prints the color ID

cout << " ______     _______    _         ______\n";
cout << "|  ____|   |  ___  |  | |       |  ____|\n";
cout << "| |        |  | |  |  | |       | |\n";
cout << "| |____    |  ---  |  | |____   | |____   _\n";
cout << "|______|   |__| |__|  |______|  |______| |_|\n";
C.exit = 1;
while(C.exit == 1) //Decides whether to exit program or reloop
{
cout << "   Welcome to Silentsharp's C++ Calc" <<endl;

MENU();




		switch (C.menu) //A switch statement that chooses the math option
		{
		case 0:
			EXIT();
			break;
		case 1:
			cout << "Masukkan dua angka yang ingin Dijumlah:" << endl;
			cout << ">";
			cin  >> C.num1;
			cout << ">";
			cin  >> C.num2;
			C.equal = C.num1+C.num2;
			cout << "answer = " << C.equal<<endl;
			system("pause");
			RorQ();
			break;
		case 2:
			cout << "Masukkan dua angka yang ingin dikurangi:" << endl;
			cout << ">";
			cin  >> C.num1;
			cout << ">";
			cin  >> C.num2;
			C.equal = C.num1-C.num2;
			cout << "answer = " << C.equal<<endl;
			system("pause");
			RorQ();
			break;
		case 3:
			cout << "Masukkan dua angka yang ingin dikali:" << endl;
			cout << ">";
			cin  >> C.num1;
			cout << ">";
			cin  >> C.num2;
			C.equal = C.num1*C.num2;
			cout << "answer = " << C.equal<<endl;
			system("pause");
			RorQ();
			break;
		case 4:
			cout << "Masukkan dua angka yang ingin dibagi:" << endl;
			cout << ">";
			cin  >> C.num1;
			cout << ">";
			cin  >> C.num2;
			if C.num=0{
                cout << "Tidak Dapat Dibagi Dengan Nol!";
			}
			else{
			C.equal = C.num1/C.num2;
			cout << "answer = " << C.equal<<endl;
			}
			system("pause");
			RorQ();
			break;
		case 5:
			cout << "Enter a number to find its absolute value:" << endl;
			cout << ">";
			cin  >> C.num1;
			C.equal = abs(C.num1);
			cout << "answer = " << C.equal<<endl;
			system("pause");
			RorQ();
			break;
		case 6:
			cout << "Enter a number to find its square root:" << endl;
			cout << ">";
			cin  >> C.num3;
			C.equal1 = sqrt(C.num3);
			cout << "answer = " << C.equal1<<endl;
			system("pause");
			RorQ();
			break;
		case 7:
			cout << "Enter two numbers (ex. 25 of 75 = 33.33%)" << endl;
			cout << ">";
			cin  >> C.per1;
			cout << ">";
			cin  >> C.per2;
			C.equal2 = (C.per1 / C.per2) * 100;
			cout << "answer = " << C.equal2 << "%"<<endl;
			system("pause");
			RorQ();
			break;
		case 8:
			cout << "Enter a number to find its cos:" << endl;
			cout << ">";
			cin  >> C.num3;
			C.equal1 = cos(C.num3);
			cout << "answer = " << C.equal1<<endl;
			system("pause");
			RorQ();
			break;
		case 9:
			cout << "Enter a number to find its square root:" << endl;
			cout << ">";
			cin  >> C.num3;
			C.equal1 = sin(C.num3);
			cout << "answer = " << C.equal1<<endl;
			system("pause");
			RorQ();
			break;
		case 10:
			cout << "Enter a polygon number upto eight" <<endl;
			cout << ">";
			cin  >> C.num1;
			    if(C.num1 == 1)
					cout  << "Does not exist" <<endl;
		   else if(C.num1 == 2)
					cout  << "Does not exist" <<endl;
		   else if(C.num1 == 3)
					cout  << "TRIANGLE" <<endl;
		   else if(C.num1 == 4)
					cout  << "SQUARE" <<endl;
		   else if(C.num1 == 5)
					cout  << "PENTAGON" <<endl;
		   else if(C.num1 == 6)
					cout  << "HEXAGON" <<endl;
		   else if(C.num1 == 7)
					cout  << "Does not exist" <<endl;
		   else if(C.num1 == 8)
					cout  << "OCTAGON" <<endl;
		      else
				    cout << "I'm sorry but thats more than eight\n";
			system("pause");
			break;
		case 11:
			cout << "___________________ABOUT CALC________________" << endl;
			cout << "CALC was created by Denzveloper Copyright 2014" <<endl;
			cout << "                C++ VERSION 1.0" << endl;
			cout << "               dandyoctavian@gmail.com" << endl;
			cout << "______________________________________________" <<endl;
			system("pause");
			break;
		default:
			cout << "Maaf, Pilihan Tidak Tersedia!" <<endl;
			RorQ();
			break;
	}
clrscr();
}
	return 0;
}

void MENU() //Gives user the choice of what math option to make
{
	cout << "\tMENU\n";
	cout << "\"0\"  EXIT"<<endl;			//Exits program
	cout << "\"1\"  add" <<endl;			//Adds two numbers
	cout << "\"2\"  subtract"<<endl;		//Subtracts two numbers
	cout << "\"3\"  multiply"<<endl;		//Multiplys two numbers
	cout << "\"4\"  divide"<<endl;			//Divides two numbers
	cout << "\"5\"  absolute value" <<endl;	//Finds the absolute value of a number
	cout << "\"6\"  square root" <<endl;	//Finds the square root of a number
	cout << "\"7\"  percent of" <<endl;		//Finds the percent of a number out of a number
	cout << "\"8\"  cos" <<endl;			//Finds the cos of a number
	cout << "\"9\"  sin" <<endl;			//Finds the sin of a number
	cout << "\"10\" polygons" <<endl;		//Tells user what the polygon is by the number of sides
	cout << "\"11\" ABOUT" <<endl;			//About the program
	cout << ">";
	cin  >> C.menu;
	clrscr();
}

void RorQ() //Gives user the option to restart or quit
{
	C.exitRorQ = 1;
	while(C.exitRorQ == 1)
	{
	clrscr();
	cout << "(r) restart or (q) quit" <<endl;
	cout << ">";
			cin  >> C.rq[1];

			if (C.rq[1] == 'r')
					C.exitRorQ = 0;
			else if (C.rq[1] == 'q')
			{
				C.exitRorQ = 0;
				EXIT();
			}
			else
				cout << "Pilihan Tidak Tersedia... Silahkan Pilih Kembali!" << endl;
	}
}

void EXIT() //Sets variable C.exit to exit loop
{
C.exit = 0;
}

void clrscr() //Clears the screen
{
    COORD coordScreen = { 0, 0 };
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, TEXT(' '), dwConSize, coordScreen, &cCharsWritten);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
    SetConsoleCursorPosition(hConsole, coordScreen);
}
