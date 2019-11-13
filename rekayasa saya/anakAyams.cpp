#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<< "====================================================================="<<endl;
    cout<< "Program Anak Ayam..."<<endl;
    cout<< "====================================================================="<<endl;
    cout<< "Masukkan Jumlah Anak Ayam: "; cin>>i;
    cout<<endl;
    cout<< "#####################################################################"<<endl;
    if (i>=1)
		{
		    cout<< "Tek-kotek-kotek-kotek..."<<endl<<endl;
            for (i; i > 0 ;)
            {
                cout<< "Anak ayam turun lah.. "<<i<<endl;
                i--;
                cout<< "Mati satu tinggal lah.. "<<i<<endl<<endl<<endl<<endl;
            }
            if (i==0)
            {
                cout<< "Ternyata..."<<endl;
                cout<<"Anak Ayam Mati semua Karena Flu Burung..."<<endl <<"\a \a"<<endl;
                return main();
            }
        }
    else
    {
        cout<<"Anda Bangkrut Donk???!"<<endl <<"\a \a \a"<<endl<<endl;
        return main();
    }
}
