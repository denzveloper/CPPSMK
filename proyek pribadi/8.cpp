#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char nama[50];
    cout<<"Masukkan Nama Lengkap Anda: ";
    cin.getline(nama,sizeof(nama));
    cout<<"Nama Anda Adalah: "<<nama;
}
