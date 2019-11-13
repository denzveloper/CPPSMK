#include<iostream>
using namespace std;
int main()
{
    char a[25];
    char b[25];
    char sek[30];
    char c[25];
    char jk[1];
    int t,bu,tu,nis,nisn;
    cout<< "Program Identitas"<<endl;
    cout<< "================================="<<endl;
    cout<< "Nama Depan: ";
    cin>>a;
    cout<< "Nama Belakang: ";
    cin>>b;
    cout<< "Jenis Kelamin(L/P): ";
    cin>>jk;
    cout<< "Tanggal Lahir(HH) : ";
    cin>>t;
    cout<< "Bulan Lahir(BB): ";
    cin>>bu;
    cout<< "Tahun Lahir(TTTT): ";
    cin>>tu;
    cout<< "Lahir Di: ";
    cin>>c;
    cout<< "Asal Sekolah(Tanpa Spasi!): ";
    cin>>sek;
    cout<< "Nomor Induk Siswa: ";
    cin>>nis;
    cout<< "NISN: ";
    cin>>nisn;
    cout<< "================================"<<endl;
    cout<< "        DATA DIRI ANDA"<<endl;
    cout<< "================================"<<endl;
    cout<< "Nama Lengkap: " <<a;
    cout<< " " <<b <<endl;
    cout<< "Jenis Kelamin: "<<jk<<endl;
    cout<< "TTL: "<<c;
    cout<< ", "<<t;
    cout<< "-"<<bu;
    cout<< "-"<<tu<<endl;
    cout<< "Asal Sekolah: "<<sek<<endl;
    cout<< "Nomor Induk Siswa: "<<nis<<endl;
    cout<< "NISN: "<<nisn;
}
