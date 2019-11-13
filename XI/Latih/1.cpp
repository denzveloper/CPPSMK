#include <iostream>
using namespace std;
int main()
{
    int jas,a,ja;
    string des,jasu,jk;
    a= 0;
    cout<< "Siapa Nama Anda? ";cin>>des;
    cout<< "Tanggal Kemerdekaan Indonesia? ";cin>>ja;
    if (ja==17)
    {
        cout<<"Anda benar!"<<endl;
        a++;
    }
    else
    {
        cout<<"Anda Salah!"<<endl;
    }
    cout<< "Kapan tahun Kemerdekaan Indonesia? ";cin>>jas;
    if (jas==1945)
    {
        cout<<"Anda benar!"<<endl;
        a++;
    }
    else
    {
        cout<<"Anda Salah!"<<endl;
    }
        cout<< "Bulan apa Indonesia Merdeka? ";cin>>jasu;
    if (jasu=="agustus")
    {
        cout<<"Anda benar!"<<endl;
        a++;
    }
    else
    {
        cout<<"Anda Salah!"<<endl;
    }
    cout<< "Siapa Nama Proklamator Indonesia? ";cin>>jk;
    if (jk=="soekarno")
    {
        cout<<"Anda benar!"<<endl;
        a++;
    }
    else
    {
        cout<<"Anda Salah!"<<endl;
    }
    cout <<"Selamat, "<<des<<endl;
    cout<<"hasilnya: " <<a;
    cout <<" dari 3 Soal Benar";
    return 0;
}
