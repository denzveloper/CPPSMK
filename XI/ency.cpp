// Morse code conversion

#include <iostream>
#include <string>
using namespace std;

int main()
{
// Declare variables
string morse;
char repeat;
int i = 0;
int x = 0;

// Create program loop:
do
{

// Prompt user for input:
cout << "Please enter a string of characters or numbers no more than 10 units long:\n";
getline(cin, morse);
// Perform the conversion:

for (i=0; i<=999; i++)
{

if ((morse[i] == 'A') || (morse[i] == 'a'))
{
string converted[x] = " * - ";
}
else if ((morse[i] == 'B') || (morse[i] == 'b'))
{
string converted[x] = " - * * * ";
}
else if ((morse[i] == 'C') || (morse[i] == 'c'))
{
string converted[x] = " - * - * ";
}
else if ((morse[i] == 'D') || (morse[i] == 'd'))
{
string converted[x] = " - * * ";
}
else if ((morse[i] == 'E') || (morse[i] == 'e'))
{
string converted[x] = " * ";
}
else if ((morse[i] == 'F') || (morse[i] == 'f'))
{
string converted[x] = " * * - * ";
}
else if ((morse[i] == 'G') || (morse[i] == 'g'))
{
string converted[x] = " - - * ";
}
else if ((morse[i] == 'H') || (morse[i] == 'h'))
{
string converted[x] = " * * * * ";
}
else if ((morse[i] == 'I') || (morse[i] == 'i'))
{
string converted[x] = " * * ";
}
else if ((morse[i] == 'J') || (morse[i] == 'j'))
{
string converted[x] = " * - - - ";
}
else if ((morse[i] == 'K') || (morse[i] == 'k'))
{
string converted[x] = " - * - ";
}
else if ((morse[i] == 'L') || (morse[i] == 'l'))
{
string converted[x] = " * - * * ";
}
else if ((morse[i] == 'M') || (morse[i] == 'm'))
{
string converted[x] = " - - ";
}
else if ((morse[i] == 'N') || (morse[i] == 'n'))
{
string converted[x] = " - * ";
}
else if ((morse[i] == 'O') || (morse[i] == 'o'))
{
string converted[x] = " - - - ";
}
else if ((morse[i] == 'P') || (morse[i] == 'p'))
{
string converted[x] = " * - - * ";
}
else if ((morse[i] == 'Q') || (morse[i] == 'q'))
{
string converted[x] = " - - * - ";
}
else if ((morse[i] == 'R') || (morse[i] == 'r'))
{
string converted[x] = " * - * ";
}
else if ((morse[i] == 'S') || (morse[i] == 's'))
{
string converted[x] = " * * * ";
}
else if ((morse[i] == 'T') || (morse[i] == 't'))
{
string converted[x] = " - ";
}
else if ((morse[i] == 'U') || (morse[i] == 'u'))
{
string converted[x] = " * * - ";
}
else if ((morse[i] == 'V') || (morse[i] == 'v'))
{
string converted[x] = " * * * - ";
}
else if ((morse[i] == 'W') || (morse[i] == 'w'))
{
string converted[x] = " * - - ";
}
else if ((morse[i] == 'X') || (morse[i] == 'x'))
{
string converted[x] = " - * * - ";
}
else if ((morse[i] == 'Y') || (morse[i] == 'y'))
{
string converted[x] = " - * - - ";
}
else if ((morse[i] == 'Z') || (morse[i] == 'z'))
{
string converted[x] = " - - * * ";
}
else if (morse[i] == '1')
{
string converted[x] = " * - - - - ";
}
else if (morse[i] == '2')
{
string converted[x] = " * * - - - ";
}
else if (morse[i] == '3')
{
string converted[x] = " * * * - - ";
}
else if (morse[i] == '4')
{
string converted[x] = " * * * * - ";
}
else if (morse[i] == '5')
{
string converted[x] = " * * * * * ";
}
else if (morse[i] == '6')
{
string converted[x] = " - * * * * ";
}
else if (morse[i] == '7')
{
string converted[x] = " - - * * * ";
}
else if (morse[i] == '8')
{
string converted[x] = " - - - * * ";
}
else if (morse[i] == '9')
{
string converted[x] = " - - - - * ";
}
else if (morse[i] == '0')
{
string converted[x] = " - - - - - ";
}
else
{
cout << "404 Error::Not Found!.";
}

i += 1;
}


// Print out results:
cout << "\n\n" << morse << " is equal to " <<converted << " in morse code.\n\n\n";
cout << "Would you like to convert anything else, [Y]es or [N]o? ";
cin >> repeat;
cout << "\n\n\n";
} while ((repeat == 'Y') || (repeat == 'y'));


return 0;
}
