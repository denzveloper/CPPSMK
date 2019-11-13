#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    system ("color 5f");
    system ("cls");
    string kd;
    int jd, jb, jh, hb, by, kb;
    cout<<"masukkan kode barang         :";cin>>kd;
    if (kd=="A01")
    {
        cout<<"nama barangnya adalah    : minuman ringan";cout<<endl;
    }
    else if ("kd==A02")
    {
        cout<<"nama barangnya adalah    : makanan ringan";cout<<endl;
    }
    else if ("kd==A03")
    {
        cout<<"nama barangnya adalah    : snack hoky";cout<<endl;
    }
    else
    {
        cout<<"kode belum terdaftar!";cout<<endl;
    }
    cout<<"harga barangnya              :";cin>>hb;cout<<endl;
    cout<<"jumblah barang               :";cin>>jb;cout<<endl;
    if (jb>=10)
    {
        jd=(hb*jb)*10/100;
        jh=(hb*jb)-jd;

    }
    else
    {
        jd=0;
        jh=(hb*jb)-jd;
    }
    cout<<"jumlah harga                 :"<<jh;cout<<endl;
    cout<<"jumlah bayar                 :";cin>>by;cout<<endl;
    kb=by-jh;
    cout<<"jumlah kembalian             :"<<kb;;cout<<endl;
    return 0;

}
