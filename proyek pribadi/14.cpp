#include<iostream>
#include<windows.h>
using namespace std;
//Program Ane...
int main()
{
    int hb,jb,d,jml,byr,disk,by,kmb;
    system("cls");
    system("color 8a");
    string ket, bar,bara;
    //mulai
    cout<<"============================================================"<<endl;
    cout<<"                                   Toko JambaNg"<<endl;
    cout<<"                          Jalan Sepi No.10 Desa Jamban"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"Masukkan Kode Barang (001-010): ";cin>>bar;
    if(bar=="001"){
        bara="Kopi Kapal Tenggelam";
    }
    else if(bar=="002"){
        bara="Ciki Tara";
    }
    else if(bar=="003"){
        bara="Astor";
    }
    else if(bar=="004"){
        bara="Akua Gelas";
    }
    else if(bar=="005"){
        bara="Koka-Kolot";
    }
    else if(bar=="006"){
        bara="Ciki Komot";
    }
    else if(bar=="007"){
        bara="Snack Hocky";
    }
    else if(bar=="008"){
        bara="Makanan Ringan Pedas";
    }
    else if(bar=="009"){
        bara="Biskuli";
    }
    else if(bar=="010"){
        bara="Bayilon";
    }
    else{
        cout<<"Barang Belum Ada...!";
        return 0;
    }
    cout<<"===== " <<bara <<" ====="<<endl;
    cout<<"Masukkan Harga Barang: Rp.";cin>>hb;
    cout<<"Banyaknya Pembelian: ";cin>>jb;
   //iF
    if (jb>=10){
        d=10;
        disk=(hb*jb)/d;
        ket="Anda Dapat Diskon 10%";
    }
    else{
        disk=0;
        ket="Anda Tidak Dapat Diskon";
    }
    //iF seLeSai
    //Hitung-Hitungan
    jml=hb*jb;
    byr=jml-disk;
    //Selesai Ngitung
    cout<<"Nama Barang Yang dibeli: "<<bara<<endl;
    cout<<"Harga Barang Seluruhnya: Rp. "<<jml <<endl;
    cout<<ket<<endl;
    cout<<"Maka Dikurangi diskon sebesar Rp."<<disk <<endl;
    cout<<"Maka Anda Harus Membayar Dengan Harga:"<<endl;
    cout<<"Rp. " <<byr<<endl;
    cout<<"========================================"<<endl;
    cout<<"Anda Membayar Dengan:  Rp.";cin>>by;
    kmb=by-byr;
    if (kmb>=0){
    cout<<"Kembalian Anda Adalah:  Rp." <<kmb;
    }
    else{
        cout<<"Pembayaran Anda Kurang  Rp."<<kmb<<endl;
        cout<<"Anda Tidak Boleh Ngutang!";
    }
    system("pause>nul");
    return main();
}
