#include<iostream>
#include<windows.h>
/*Program Saya Juga Donk*/
using namespace std;
int main()
{
    system("title BUATAN SAYA");
    system("color 8a");
    system("cls");
    /*Diatas Pemanggilan Windows.h*/
    int nilai;
    cout<< "Masukkan Bilangan Bulat:"; cin>>nilai;
    cout<< "==============================================";
    if (nilai > 0){
        cout<<"Nilai Yang Anda Masukkan Adalah Bilangan Bulat Positif";
    }
    else if (nilai < 0){
        cout<<"Nilai Yang Anda Masukkan Adalah Bilangan Bulat Negatif";
    }
    else if (nilai = 0){
        cout<<"Nilai Yang Anda Masukkan Adalah Nol, Tidak Masuk Keduanya!";
    }
    else{
    cout<<"Bukan Termasuk Apa-apa!";
    }
    cout<<endl<<endl;
    system("pause");
    return main();
}
