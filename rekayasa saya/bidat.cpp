#include<iostream>
using namespace std;
int main()
{
    char naa[25], nab[25], kota[30], agama[10], hobi[20], jl[20], ds[25], kcmt[25], kab[30], jk[20] ,bln[10];
    //semi Karakter Karena Pake Nomer integer tidak dapat dibatasi!
    char nis[9], tgl[2], thn[4], no[3], hp[12], rt[2], rw[3];
    //Memulai Segalanya!
    cout<< "================ Masukkan Biodata Anda! ================"<<endl;
    cout<< "Nama Depan  :";cin>>naa;
    cout<< "Nama Belakang  :";cin>>nab;
    cout<< "NIS Sekolah  :";cin>>nis;
    cout<< "Kota Kelahiran  :";cin>>kota;
    cout<< "Tanggal Lahir  :";cin>>tgl;
    cout<< "Bulan Lahir  :";cin>>bln;
    cout<< "Tahun Lahir  :";cin>>thn;
    cout<< "Jenis Kelamin  :";cin>>jk;
    cout<< "Agama  :";cin>>agama;
    cout<< "No. Telepon  :";cin>>hp;
    cout<< "Hobi  :";cin>>hobi;
    cout<< "====(Alamat)================================="<<endl;
    cout<< "Jalan  :";cin>>jl;
    cout<< "No. Rumah  :";cin>>no;
    cout<< "RT  :";cin>>rt;
    cout<< "RW  :";cin>>rw;
    cout<< "desa  :";cin>>ds;
    cout<< "Kecamatan  :";cin>>kcmt;
    cout<< "Kabupaten  :";cin>>kab;
    cout<< "====================(BIODATA DIRI SAYA ADALAH)====================";
    cout<< "Nis :" <<nis<<endl;
    cout<< "Nama :" <<naa <<" " <<nab<<endl;
    cout<< "TTL :" <<kota <<"," <<tgl <<"";
    cout<< " " <<bln <<" " <<thn <<endl;
    cout<< "Jenis Kelamin :" <<jk<<endl;
    cout<< "Agama :" <<agama<<endl;
    cout<< "Hobby :" <<hobi<<endl;
    cout<< "Alamat :" <<"Jalan " <<jl <<" No." <<no <<" RT/RW:" <<rt <<"/" <<rw <<"  Desa "<<ds <<" Kecamatan " <<kcmt <<"-" <<kab<<endl;
    cout<< "No Telepon :" <<hp<<endl;
}
