#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char kota[45];
    char nam[50];
    char sklh[40];
    char jek;
    int tanglar,bular,tular,nis,nisn;
    cout<< "Program Identitas"<<endl;
    cout<< "================================="<<endl;
    cout<< "Nama Lengkap       : ";
    cin.getline(nam,sizeof(nam));
    cout<<"Jenis Kelamin(L/P) : ";cin>>jek;
    cout<< "Lahir Di           : ";
    cin.getline(kota,sizeof(kota));
    cout<<"Tanggal Lahir      : ";
    cin>>tanglar;
    cout<< "Bulan Lahir        : ";
    cin>>bular;
    cout<< "Tahun Lahir        : ";
    cin>>tular;
    cout<< "Asal Sekolah       : ";
    cin.getline(sklh,sizeof(sklh));
    cout<< "Nomor Induk Siswa  : ";
    cin>>nis;
    cout<< "NISN               : ";
    cin>>nisn;
    cout<< "================================="<<endl;
    cout<< "Nama Lengkap        : "<<nam <<endl;
    cout<< "Jenis Kelamin       : "<<jek<<endl;
    cout<< "TTL                 : "<<kota;
    cout<< ", " <<tanglar;
    cout<< "-"<<bular;
    cout<< "-"<<tular<<endl;
    cout<< "Asal Sekolah        : "<<sklh<<endl;
    cout<< "Nomor Induk Siswa   : "<<nis<<endl;
    cout<< "NISN                : "<<nisn;
    return 0;
}
