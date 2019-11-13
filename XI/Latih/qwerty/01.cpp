#include <iostream>
using namespace std;
int main ()
{
    string kd;
    cout <<"masukkan kode barang=";cin>>kd;
    if (kd=="AQ1" )
        cout <<"makanan ringan ";
    else if (kd=="AQ2")
        cout <<"minuman ringan";
    else if (kd=="AQ3")
    cout <<"snack hoky";
    else
        cout <<"maaf kode tersebut belum di inputkan";
    return 0;
}
