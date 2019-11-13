#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    string jk;
    system("cls");
    system("color d5");
    cout<<"Sebutkan Kode Jenis Kelamin Anda (L/P) : ";cin>>jk;
    if (jk=="L")
    {
        cout<<"Anda Adalah Laki-Laki";
    }
    if (jk=="l")
    {
        cout<<"Anda Adalah Laki-Laki";
    }
    if (jk=="p")
    {
        cout<<"Anda Adalah Perempuan";
    }
    if (jk=="P")
    {
        cout<<"Anda Adalah Perempuan";
    }
    system("pause>nul");
    return main();
}
