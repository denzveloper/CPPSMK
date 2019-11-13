#include<iostream>
#include<windows.h>
//Menggunakan If Else
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
        cout<<"Tenik Komputer Dan Jaringan";
    }
    else if (n=="TSM"){
        cout<<"Teknik Sepeda Motor";
    }
    else if (n=="TOI"){
        cout<<"Teknik Otomasi Industri";
    }
    else if (n=="TGB"){
        cout<<"Teknik Gambar Bangunan";
    }
    else if (n=="TKR"){
        cout<<"Teknik Kendaraan Ringan";
    }
    else if (n=="EP"){
        cout<<"Ekonomi Perbankan";
    }
    else{
    cout<<"Maaf, Jurusan Belum Terdaftar/Tersedia!";
    }
    cout<<endl<<endl;
    system("pause");
    return main();
}
