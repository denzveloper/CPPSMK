#include<iostream>
using namespace std;
int main()
{
    //Definisi Variabel
    int dec,j,i,bin;
    //End Definition Of Variable
    cout<<"Masukkan Angka Desimal :"; cin>>dec;
    cout<<"Dalam Binernya Maka:";
   while(dec>0)
   {
       bin=dec%2;
       dec=dec/2;
       cout<<bin;
   }
}
