#include <iostream>
using namespace std;
int main()
{
    int bilangan;

    cout << "Masukkan Sebuah Bilangan Bulat (0-10) : ";
    cin >> bilangan;
    if (bilangan == 1)
    cout << "One" << endl;
    else

    switch (bilangan) {
        case 0:
                cout << "Zero" << endl;
                break;
        case 1:
                cout << "One" << endl;
                break;
        case 2:
                cout << "Two" << endl;
                break;
        case 3:
                cout << "Three" << endl;
                break;
        case 4:
                cout << "Four" << endl;
                break;
        case 5:
                cout << "Five" << endl;
                break;
         case 6:
                cout << "Six" << endl;
                break;
        case 7:
                cout << "Seven" << endl;
                break;
         case 8:
                cout << "Eight" << endl;
                break;
         case 9:
                cout << "Nine" << endl;
                break;
         case 10:
                cout << "Ten" << endl;
                break;
        default:
            cout << "Maaf Aja Ane Cuma Bisa Ngitung 0 sampe 10" << endl;
}
return 0;
}
