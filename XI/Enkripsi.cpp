#include<iostream>
//Program Alfabet Atau Numeric Ke Kode morse
using namespace std;
int main()
{
    string a;
    cout<<"Program Enkripsi [BETA] v.0.0.1"<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Masukkan Sebuah Karakter atau tekan '?' Untuk Bantuan!"<<endl;
    cout<<"Tekan '#' Untuk Keluar Program"<<endl;
    cin>>a;
    cout<<"=~'";
    if (a=="?")
    {
        cout<<"Isi Satu Huruf Per Huruf"<<endl;
        cout<<"Dengan Huruf Kecil(non-kapital)"<<endl;
        cout<<"Made By G-TECH BD (Dendy Octavian-Denzveloper)"<<endl;
    }
    else if (a=="a")
    {
        
        cout<<"Q"<<endl<<endl;
    }
    else if (a=="b")
    {
        
        cout<<"W"<<endl<<endl;
    }
    else if (a=="c")
    {
        
        cout<<"E"<<endl<<endl;
    }
    else if (a=="d")
    {
        
        cout<<"R"<<endl<<endl;
    }
    else if (a=="e")
    {
        
        cout<<"T"<<endl<<endl;
    }
    else if (a=="f")
    {
        
        cout<<"Y"<<endl<<endl;
    }
    else if (a=="g")
    {
        
        cout<<"U"<<endl<<endl;
    }
    else if (a=="h")
    {
        
        cout<<"I"<<endl<<endl;
    }
    else if (a=="i")
    {
        
        cout<<"O"<<endl<<endl;
    }
    else if (a=="j")
    {
        
        cout<<"P"<<endl<<endl;
    }
    else if (a=="k")
    {
        
        cout<<"A"<<endl<<endl;
    }
    else if (a=="l")
    {
        
        cout<<"S"<<endl<<endl;
    }
    else if (a=="m")
    {
        
        cout<<"D"<<endl<<endl;
    }
    else if (a=="n")
    {
        
        cout<<"F"<<endl<<endl;
    }
    else if (a=="o")
    {
        
        cout<<"G"<<endl<<endl;
    }
    else if (a=="p")
    {
        
        cout<<"H"<<endl<<endl;
    }
    else if (a=="q")
    {
        
        cout<<"J"<<endl<<endl;
    }
    else if (a=="r")
    {
        
        cout<<"K"<<endl<<endl;
    }
    else if (a=="s")
    {
        
        cout<<"L"<<endl<<endl;
    }
    else if (a=="t")
    {
        
        cout<<"Z"<<endl<<endl;
    }
    else if (a=="u")
    {
        
        cout<<"X"<<endl<<endl;
    }
    else if (a=="v")
    {
        
        cout<<"C"<<endl<<endl;
    }
    else if (a=="w")
    {
        
        cout<<"V"<<endl<<endl;
    }
    else if (a=="x")
    {
        
        cout<<"B"<<endl<<endl;
    }
    else if (a=="y")
    {
        
        cout<<"N"<<endl<<endl;
    }
    else if(a=="z")
    {
        
        cout<<"M"<<endl<<endl;
    }
    //=====================================================
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
