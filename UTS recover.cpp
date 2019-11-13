#include <iostream>
using namespace std;
int main()

{
    string nama_barang;
    int harga, diskon, total_harga, bayar, kembalian;

    cout << "==========Selamat Datang Di Toko Harap Antri==========" << endl;
    cout << "======Selamat Berbelanja========" << endl;
//nama barangnya
    cout << "Nama Barang :" << endl;
    cin >> nama_barang;

//harga setiap barangnya
    cout << "Harga :Rp. " << endl;
    cin >> harga;

//logika diskonnya
    if (harga >= 100000)
        {diskon = harga * 10/100;
            cout << "Diskon =Rp. " << diskon << endl;
            }
    else if (harga < 100000)
        {diskon = harga * 5/100;
            cout << "Diskon =Rp. " << diskon << endl;
        }

//total harga
    total_harga = harga - diskon;
    cout << "Total Harga :Rp. " << total_harga << endl;

//pembayarannya
    cout << "Bayar :Rp. ";
    cin >> bayar;

//kembaliannya
    kembalian = bayar - total_harga;
    cout << "Kembalian :Rp. " << kembalian << endl;
    return 0;
}
