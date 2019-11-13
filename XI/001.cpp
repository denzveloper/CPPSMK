#include<iostream>
#include<windows.h>
using namespace std;
/*[Program Nilai Siswa]*/
int main()
{
    string nb,nabar,cd;
    int hg;
    system ("color 8a");
    system ("cls");
    cout<<"==============================================="<<endl;
    cout<<"=============    -Pembelian Barang-    ============="<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Sebutkan Nama Barang: ";cin>>nb;
    cout<<endl<<endl;
    cout<<"==============================================="<<endl;
    cout<<endl<<endl;
    if (nb=="sapu"){
        nabar="Sapu";
        hg=6000;
        cd="RT1";
    }
    else if (nb=="sekop"){
        nabar="Sekop";
        hg=4000;
        cd="BB1";
    }
    else  if (nb=="komputer"){
        nabar="PC Komputer";
        hg=6000;
        cd="AE1";
    }
     else if (nb=="pel"){
        nabar="Pel Lantai";
        hg=12000;
        cd="RT2";
    }
    else{
        nabar=nb;
        cd="No Avaible!";
        cout<<"Harga Barang: ";cin>>hg;
    }
    cout<<"Nama Barang:  "<<nabar<<endl;
    cout<<"Kode Barang:   "<<cd<<endl;
    cout<<"Harga Barang: "<<hg<<endl<<endl;
    system("pause>nul");
    return main();
}
