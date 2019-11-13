#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int ang1, ang2;
    char qq;
        system("color 09");
        system("cls");
        cout<< "=========================================================="<<endl;
        cout<< "Perbandingan 2 Angka"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"   |      ======    ==="<<endl;
        cout<<"  | |      |    =  |   |"<<endl;
        cout<<" |   |     |====      |"<<endl;
        cout<<" |===|     |    =    |"<<endl;
        cout<<" |   |  | ======    O"<<endl;
        cout<< "========================================"<<endl;
        cout<< "Angka Ke 1: "<<endl;cin>>ang1;
        cout<< "========================================"<<endl;
        cout<< "Angka Ke 2: "<<endl;cin>>ang2;
        system("cls");
        if (ang1==ang2)
        {
            cout<< "========================================"<<endl;
            cout<< "Angka Kesatu Sama Dengan Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Dan " <<ang2;
            cout<< " Sama Besar.";
            system("msg * Sama Besar Angkanga!");
            cin>>qq;
        }
        else if (ang1>ang2)
        {
            cout<< "========================================"<<endl;
            cout<<"Angka Kesatu Lebih Besar Dari Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Lebih Dari " <<ang2;
            cout<< ".";
            system("msg * Angka Pertama Lebih Besar!");
            cin>>qq;
        }
        else if (ang1<ang2)
        {
            cout<< "========================================"<<endl;
            cout<<"Angka Kesatu Kurang Dari Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Kurang Dari " <<ang2;
            cout<< ".";
            system("msg * Angka kesatu Lebih Kecil!");
            cin>>qq;
        }
        else
        {
            cout<< "========================================"<<endl;
            cout<<"Maaf!! Kami Binggung!!"<<endl;
            cin>>qq;

        }
        return main();
/*Kembali Keatas Lagi Coy...
Syntaks By Dendy Octavian*/
}
