#include<iostream>
using namespace std;
int main()
{
    string fnam;
    int kkm,nis;
    if (kkm<1)
    {
    cout<<"Program KKM"<<endl;
    cout<<"Nilai KKMnya(0-100): "; cin>>kkm;
    cout<<endl;
        if(kkm<1)
        {
        cout<< "Nilai KKM: "<<kkm <<" Tidak Boleh!!"<<endl;
        cout<< "NILAI TIDAK VALID!"<<endl<<endl<<endl;
        return 0;
        }
        else
        {
        return main();
        }
    else
    {
        cout<<"=============================================="<<endl;
        cout<<"Nama Siswa:"; cin>>fnam;
        cout<<endl;
        cout<<"Nilai Siswa(0-100):"; cin>>nis;
        cout<<"=============================================="<<endl;
        if (nis>100)
        {
            cout<<"Nilai Tidak Valid!"<<endl;
            cout<<"Hanya Boleh 0 hingga 100"<<endl<<endl<<endl;
            return main();
        }
        else if (nis>=kkm)
        {
            cout<<"Siswa: "<<fnam<<endl;
            cout<<"LULUS dengan nilai: "<<nis <<" Serta KKMnya adalah: " <<kkm<<endl<<endl<<endl;
            return main();
        }
        else
        {
            cout<<"Siswa: "<<fnam<<endl;
            cout<<"TIDAK TUNTAS dengan nilai: "<<nis <<" Karena KKMnya adalah: " <<kkm<<endl<<endl<<endl;
            return main();
        }

    }
    }
}
