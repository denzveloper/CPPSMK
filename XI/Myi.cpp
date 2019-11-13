//Prrogram Pertama Ane Choy!!
#include<iostream>
using namespace std;
int main()
{
int menu,ang1,ang2,hasil;
char qq;
    cout<<"Program Ini Menggunakan Bahasa Pemrograman C++"<<"\a \a \a \a"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"Penghitungan Angka Saya"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"    MAIN        ___           |    |"<<endl;
    cout<<"    _     _    |     |-   |   |    |"<<endl;
    cout<<"   | |   | |   |___  | |  |   |    |"<<endl;
    cout<<"  |   | |   |  |     |  | |    ---- "<<endl;
    cout<<" |     |     |  ---  |   -|         "<<endl;
    cout<<" "<<endl;
    cout<<"PROGRAM INI:"<<endl;
    cout<<"============================================="<<endl;
    cout<<"1. Pertambahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Pembagian"<<endl;
    cout<<"4. Perkalian"<<endl;
    cout<<"5. Perbandingan Angka"<<endl;
    cout<<"6. Hitung Luas Persegi"<<endl;
    cout<<"7. Hitung Luas Persegi Panjang"<<endl;
    cout<<"8. Hitung Luas Segitiga"<<endl;
    cout<<"9. Hitung Luas Lingkaran"<<endl<<endl;
    cout<<"0. Keluar Program Ini!"<<endl;
    cout<<"=============================================="<<endl;
    cin>>menu;
    if (menu==1)
    {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Tambah-Tambahan"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"    .           ."<<endl;
        cout<<"   /|    |     /|"<<endl;
        cout<<"    |  --|--    |"<<endl;
        cout<<"   ---   |     ---"<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Angka Kesatu: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Angka Kedua: "<<endl;cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=ang1+ang2;
        cout<< ang1;
        cout<< " + " <<ang2;
        cout<< " = " <<hasil <<endl;
        cout<<"Hasilnya adalah.... " <<hasil <<endl;
        cin>>qq;
    }
    else if (menu==2)
    {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Pengurangan"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"    .         ."<<endl;
        cout<<"   /|        /|"<<endl;
        cout<<"    |  ----   |"<<endl;
        cout<<"   ---       ---"<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Angka Kesatu: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Angka Kedua: "<<endl;cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=ang1-ang2;
        cout<< ang1;
        cout<< " - " <<ang2;
        cout<< " = " <<hasil <<endl;
        cout<<"Hasilnya adalah.... " <<hasil <<endl;
        cin>>qq;
    }
    else if (menu==3)
    {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Pembagian!!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"    .         ."<<endl;
        cout<<"   /|    |   /|"<<endl;
        cout<<"    |         |"<<endl;
        cout<<"   ---   |   ---"<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Angka Kesatu: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Angka Kedua: "<<endl;cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=ang1/ang2;
        cout<< ang1;
        cout<< " : " <<ang2;
        cout<< " = " <<hasil <<endl;
        cout<<"Hasilnya adalah.... " <<hasil <<endl;
        cin>>qq;
    }
    else if (menu==4)
    {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Perkalian!!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"    .   |   |   ."<<endl;
        cout<<"   /|     |    /|"<<endl;
        cout<<"    |    | |    |"<<endl;
        cout<<"   ---  |   |  ---"<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Angka Kesatu: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Angka Kedua: "<<endl; cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=ang1*ang2;
        cout<< ang1;
        cout<< " * " <<ang2;
        cout<< " = " <<hasil <<endl;
        cout<< "Hasilnya Adalah... " <<hasil <<endl;
        cin>>qq;
    }
    else if (menu==5)
    {
        cout<< "                                        "<<endl;
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
        if (ang1==ang2)
        {
            cout<< "========================================"<<endl;
            cout<< "Angka Kesatu Sama Dengan Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Dan " <<ang2;
            cout<< " Sama Besar.";
            cin>>qq;
        }
        else if (ang1>ang2)
        {
            cout<< "========================================"<<endl;
            cout<<"Angka Kesatu Lebih Besar Dari Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Lebih Dari " <<ang2;
            cout<< ".";
            cin>>qq;
        }
        else if (ang1<ang2)
        {
            cout<< "========================================"<<endl;
            cout<<"Angka Kesatu Kurang Dari Angka Kedua"<<endl;
            cout<< "Karena " <<ang1;
            cout<< " Kurang Dari " <<ang2;
            cout<< ".";
            cin>>qq;
        }
        else
        {
            cout<< "========================================"<<endl;
            cout<<"Maaf!! Kami Binggung!!"<<endl;
            cin>>qq;
        }
    }
        else if (menu==6)
        {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Hitung Luas Persegi!!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<" ======="<<endl;
        cout<<"|       |"<<endl;
        cout<<"|       |"<<endl;
        cout<<" ======="<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Sisi Persegi: "<<endl;cin>>ang1;
        hasil=ang1*ang1;
        cout<< ang1;
        cout<< " * " <<ang1;
        cout<< " = " <<hasil <<endl;
        cout<< "Luasnya Adalah... " <<hasil <<endl;
        cin>>qq;
        }
        else if (menu==7)
        {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Hitung Luas Persegi Panjang!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<" =============== "<<endl;
        cout<<"|               |"<<endl;
        cout<<"|               |"<<endl;
        cout<<" ==============="<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Panjang Persegi: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Lebar Persegi: "<<endl;cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=ang1*ang2;
        cout<< ang1;
        cout<< " * " <<ang2;
        cout<< " = " <<hasil <<endl;
        cout<< "Luasnya Adalah... " <<hasil <<endl;
        cin>>qq;
        }
        else if (menu==8)
        {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Hitung Luas Segitiga!!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"      |   "<<endl;
        cout<<"    |    |  "<<endl;
        cout<<"  |        |"<<endl;
        cout<<" ------------ "<<endl;
        cout<<" "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Alas: "<<endl;cin>>ang1;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Tinggi: "<<endl;cin>>ang2;
        cout<<"=============================="<<endl;
        hasil=(ang1*ang2)/2;
        cout<< " ( " <<ang1;
        cout<< " * " <<ang2;
        cout<< " ) : 2 = " <<hasil <<endl;
        cout<< "Luasnya Adalah... " <<hasil <<endl;
        cin>>qq;
        }
		else if (menu==9)
        {
        cout<< "                                        "<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Program Hitung Luas Lingkaran!!"<<endl;
        cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"    O   "<<endl;
        cout<<"=============================="<<endl;
        cout<<"Masukkan Jari-Jari!"<<endl;cin>>ang1;
        hasil=(22*ang1*ang1)/7;
        cout<< "22 : 7 ( " <<ang1;
        cout<< " * " <<ang1;
        cout<< " ) = " <<hasil <<endl;
        cout<< "Luasnya Adalah... " <<hasil <<endl;
        cin>>qq;
        }
        else if(menu==0)
        {
        cout<< "========================================"<<endl;
        cout<< "Metu!!"<<endl;
        cout<< "Program Wis Metu..  Pragat!"<<endl;
        cout<< "Bye!!"<<endl;
        return 0;
        }
		else
		{
        cout<< "========================================"<<endl;
        cout<< "Maaf Menu '" <<menu;
        cout<<"' Belum Tersedia!!"<<endl;
        cout<< "Silahkan Coba Lagi Nanti!"<<endl;
        cin>>qq;
        return main();
        }
    cout<<endl<<endl<<endl;
    return main();
}
