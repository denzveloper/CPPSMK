#include <iostream>
using namespace std;

int main()

{
    string nama_barang;
    int harga, diskon, total_harga, bayar, kembalian;

    cout << "==========TOKO SERBA ANA==========" << endl;
    cout << "Selamat Datang Dan Selamat Berbelanja" << endl;

    //nama barang
    cout << "Nama Barang : " << endl;
    cin >> nama_barang;

    //harga
    cout << "Harga :Rp. " << endl;
    cin >> harga;

    //diskon
    if (harga >= 100000)
        {
            diskon = harga * 10/100;
            cout << "Diskon :Rp. " << diskon << endl;
            }
    else if (harga < 100000)
        {
            diskon = harga * 5/100;
            cout << "Diskon :Rp. " << diskon << endl;
            }

    //total harga
    total_harga = harga - diskon;
    cout << "Total Harga :Rp. " << total_harga << endl;

    //bayar
    cout << "Bayar :Rp. " << endl;
    cin >> bayar;

    //kembalian
    kembalian = bayar - total_harga;
    cout << "Kembalian :Rp. " << kembalian << endl;

    cout << "Terimakasih Telah Berbelanja Di Toko Kami" << endl;
    return 0;

}
