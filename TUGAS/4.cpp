#include<dendy.h>
using namespace std;
int main()
{
    system("Color 8a");
    system("Title Program Siapa Remed?");
    system("cls");
    int nilai;
    cout<<"Masukkan Nilai Siswa: ";cin>>nilai;
    if (nilai>100){
        cout<<"Nilai Tidak Valid!\n";
    }
    else if (nilai >= 75){
        cout<<"Selamat, \"Anda Lulus\"!"<<endl;
        cout<<"\a ";
    }
    else{
        cout<<"Maaf, Anda Belum Lulus! \n";
        cout<<"Anda Harus Remedial \a\a";
    }
    system("pause>nul");
    return main();
}
