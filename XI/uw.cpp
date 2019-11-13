#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    system("color 8a");
    system("cls");
    string cd, jufi,jefi;
    int hg, bedi, bdisk, bayar, udis, abyr, kmb;
    cout<<"Masukkan kode CD FILM : ";cin>>cd;
    if (cd=="CD-01"){
    jufi="Misteri Kegagalan Cinta";
    jefi="Legenda";
    hg=100000;
    }
    else if (cd=="CD-02"){
    jufi="Tomy And Jefry";
    jefi="Cartoon";
    hg=50000;
    }
    else if (cd=="CD-03"){
    jufi="Mahabarata";
    jefi="Melankolis";
    hg=35000;
    }
    else{
        cout<<"Tidak ada dalam daftar"<<endl;
        return main();
    }
    cout<<"Jenis Film : " <<jefi<<endl;
    cout<<"Judul Film : " <<jufi<<endl;
    cout<<"Harga Film : " <<hg <<" / Keping CD"<<endl<<endl;
    cout<<"Banyaknya Pembelian CD : ";cin>>bedi;
    if (bedi>=4){
        bdisk=5;
        cout<<"Anda dapat diskon: 5%"<<endl;
        udis=(hg*bedi)*bdisk/100;
    }
    else{
        udis=0;
    }
    bayar=(hg*bedi)-udis;
    cout<<"Anda harus membayar : " <<bayar <<endl;
    cout<<"Anda membayar dengan Uang sebesar: ";cin>>abyr;
    kmb=abyr-bayar;
    if (kmb>=0){
    cout<<"Kembalian Anda sebesar "<<kmb;
    }
    else{
    cout<<endl<<"Anda Tidak Boleh Ngutang!!!";
    system("msg * Anda Tidak Boleh Ngutang Disini!!!");
    }
    system("pause>nul");
    return main();
}
