#include<iostream>
#include<windows.h>
//Menggunakan tanpa Else
/*Program Saya Juga Donk*/
using namespace std;
int main()
{
    system("title Jurusan Jamblang");
    system("color 8a");
    system("cls");
    /*Diatas Pemanggilan Windows.h*/
    string n;
    cout<< "Masukkan Kelas Keakhlian (Dengan Huruf Kapital!)  :  "; cin>>n;
    cout<< "=============================================="<<endl;
    if (n=="TKJ"){
        cout<<"Tenik Komputer Jaringan";
    }
   if (n=="TSM"){
        cout<<"Teknik Sepeda Motor";
    }
    if (n=="TOI"){
        cout<<"Teknik Otomasi Industri";
    }
    if (n=="TGB"){
        cout<<"Teknik Gambar Bangunan";
    }
    if (n=="TKR"){
        cout<<"Teknik Kendaraan Ringan";
    }
    if (n=="EP"){
        cout<<"Ekonomi Perbankan";
    }
    cout<<endl<<endl;
    system("pause");
    return main();
}
