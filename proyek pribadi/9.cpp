#include<iostream>
#include<windows.h>
using namespace std;
/*
My First Application
*/
int main()
{
 system("cls");
 system("title Biografi");
 char a[30], b[40], tmpt[40], tgl[15], jk[1], kls[15];
 cout <<"==========(INPUTKAN BIODGRAFI ANDA)==========" <<endl;
 cout <<"Masukkan Nama Depan               : "; cin>>a;
 cout <<"Masukkan Nama Belakang            : "; cin>>b;
 cout <<"Masukkan Tempat Lahir             : "; cin>>tmpt;
 cout <<"Masukkan Tanggal Lahir(DD-MM-YYYY): "; cin>>tgl;
 cout <<"Masukkan Jenis Kelamin Anda (L/P) : "; cin>>jk;
 cout <<"Masukkan Kelas Anda Sekarang      : "; cin>>kls;
 system("cls");
 cout <<"Nama Anda           : " <<a <<" " <<b <<endl;
 cout <<"Jenis Kelamin       : " <<jk <<endl;
 cout <<"Tempat Tanggal Lahir: " <<tmpt <<"," <<tgl <<endl;
 cout <<"Kelas Anda          : " <<kls <<endl;
 return 0;
}
