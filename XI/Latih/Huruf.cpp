#include<iostream>
//Program Alfabet Atau Numeric Ke Kode morse
using namespace std;
int main()
{
    string a;
    cout<<"Program Konverter Teks Ke Morse."<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Masukkan Sebuah Karakter atau tekan '?' Untuk Bantuan!"<<endl;
    cout<<"Tekan '#' Untuk Keluar Program"<<endl;
    cin>>a;
    cout<<"============================================================"<<endl;
    if (a=="?")
    {
        cout<<"Isi Satu Huruf Per Huruf"<<endl;
        cout<<"Dengan Huruf Kecil(non-kapital)"<<endl;
        cout<<"Dan gunakan Enkode ASCI dan Bukan Termasuk Tanda Baca"<<endl<<endl;
    }
    else if (a=="a")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".-"<<endl<<endl;
    }
    else if (a=="b")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-..."<<endl<<endl;
    }
    else if (a=="c")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-.-."<<endl<<endl;
    }
    else if (a=="d")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-.."<<endl<<endl;
    }
    else if (a=="e")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"."<<endl<<endl;
    }
    else if (a=="f")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"..-."<<endl<<endl;
    }
    else if (a=="g")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"--."<<endl<<endl;
    }
    else if (a=="h")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"...."<<endl<<endl;
    }
    else if (a=="i")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".."<<endl<<endl;
    }
    else if (a=="j")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".---"<<endl<<endl;
    }
    else if (a=="k")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-.-"<<endl<<endl;
    }
    else if (a=="l")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".-.."<<endl<<endl;
    }
    else if (a=="m")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"--"<<endl<<endl;
    }
    else if (a=="n")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-."<<endl<<endl;
    }
    else if (a=="o")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"---"<<endl<<endl;
    }
    else if (a=="p")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".--."<<endl<<endl;
    }
    else if (a=="q")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"--.-"<<endl<<endl;
    }
    else if (a=="r")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".-."<<endl<<endl;
    }
    else if (a=="s")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"..."<<endl<<endl;
    }
    else if (a=="t")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-"<<endl<<endl;
    }
    else if (a=="u")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"..-"<<endl<<endl;
    }
    else if (a=="v")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"...-"<<endl<<endl;
    }
    else if (a=="w")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<".--"<<endl<<endl;
    }
    else if (a=="x")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-..-"<<endl<<endl;
    }
    else if (a=="y")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"-.--"<<endl<<endl;
    }
    else if(a=="z")
    {
        cout<<"Huruf Yang Terdeteksi:"<<endl;
        cout<<"--.."<<endl<<endl;
    }
    else if(a=="1")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<".----"<<endl<<endl;
    }
    else if(a=="2")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"..---"<<endl<<endl;
    }
    else if(a=="3")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"...--"<<endl<<endl;
    }
    else if(a=="4")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"....-"<<endl<<endl;
    }
    else if(a=="5")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"....."<<endl<<endl;
    }
    else if(a=="6")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"-...."<<endl<<endl;
    }
    else if(a=="7")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"--..."<<endl<<endl;
    }
    else if(a=="8")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"---.."<<endl<<endl;
    }
    else if(a=="9")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"----."<<endl<<endl;
    }
    else if(a=="0")
    {
        cout<<"Angka Yang Terdeteksi:"<<endl;
        cout<<"-----"<<endl<<endl;
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
