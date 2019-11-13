#include<iostream>
//Program Morse Ke ALFABET/Numberic
using namespace std;
int main()
{
    string a;
    cout<<"Program Konverter Morse Ke teks Biasa."<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Masukkan Sebuah Kode Morse atau tekan '?' Untuk Bantuan!"<<endl;
    cout<<"Tekan '#' Untuk Keluar Program"<<endl;
    cin>>a;
    cout<<"============================================================"<<endl;
    if (a=="?")
    {
        cout<<"Isi Satu Huruf Per Huruf"<<endl;
        cout<<"Dengan . sebagai Kode Beep Pendek"<<endl;
        cout<<"Dan - Sebagai Kode Beep Panjang"<<endl<<endl;
    }
    else if (a==".-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"A"<<endl<<endl;
    }
    else if (a=="-...")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"B"<<endl<<endl;
    }
    else if (a=="-.-.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"C"<<endl<<endl;
    }
    else if (a=="-..")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"D"<<endl<<endl;
    }
    else if (a==".")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"E"<<endl<<endl;
    }
    else if (a=="..-.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"F"<<endl<<endl;
    }
    else if (a=="--.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"G"<<endl<<endl;
    }
    else if (a=="....")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"H"<<endl<<endl;
    }
    else if (a=="..")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"I"<<endl<<endl;
    }
    else if (a==".---")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"J"<<endl<<endl;
    }
    else if (a=="-.-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"K"<<endl<<endl;
    }
    else if (a==".-..")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"L"<<endl<<endl;
    }
    else if (a=="--")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"M"<<endl<<endl;
    }
    else if (a=="-.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"N"<<endl<<endl;
    }
    else if (a=="---")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"O"<<endl<<endl;
    }
    else if (a==".--.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"P"<<endl<<endl;
    }
    else if (a=="--.-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"Q"<<endl<<endl;
    }
    else if (a==".-.")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"R"<<endl<<endl;
    }
    else if (a=="...")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"S"<<endl<<endl;
    }
    else if (a=="-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"T"<<endl<<endl;
    }
    else if (a=="..-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"U"<<endl<<endl;
    }
    else if (a=="...-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"V"<<endl<<endl;
    }
    else if (a==".--")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"W"<<endl<<endl;
    }
    else if (a=="-..-")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"X"<<endl<<endl;
    }
    else if (a=="-.--")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"Y"<<endl<<endl;
    }
    else if(a=="--..")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"Z"<<endl<<endl;
    }
    else if(a==".----")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"1"<<endl<<endl;
    }
    else if(a=="..---")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"2"<<endl<<endl;
    }
    else if(a=="...--")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"3"<<endl<<endl;
    }
    else if(a=="....-")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"4"<<endl<<endl;
    }
    else if(a==".....")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"5"<<endl<<endl;
    }
    else if(a=="-....")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"6"<<endl<<endl;
    }
    else if(a=="--...")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"7"<<endl<<endl;
    }
    else if(a=="---..")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"8"<<endl<<endl;
    }
    else if(a=="----.")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"9"<<endl<<endl;
    }
    else if(a=="-----")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"0"<<endl<<endl;
    }
    else if(a=="#")
    {
        return 0;
    }
    else
    {
        cout<<"Kode Morse Tak Diketahui!"<<endl<<endl;
    }
return main();
}
