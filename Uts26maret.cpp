#include<iostream>
using namespace std;
int main ()
{

    int sabun,sapu,teh,lampu,harga1,harga2,harga3,harga4,total1,total2,keterangan,setelahdiskon,kembalian,pembayaran;
    cout << "==========Selamat Datang Di Toko Harap Antri==========" << endl;
    cout << "======Berikut Daftar Nama Barang Dagangan Kami========" << endl;
    cout << "Sabun Brush = 45000" << endl;
    cin >> sabun;
    cout << "Lampu Phillips 2000w 1x pakai = 30000" << endl;
    cin >> lampu;
    harga1 = sabun * 45000;
    harga4 = lampu * 30000;
    total1 = sabun + lampu;
    total2 = harga1 + harga4;
    if (total2 >= 100000)
    keterangan = total2 * 10/100;
    else if (total2 <= 100000)
    keterangan = total2 * 5/100;
    setelahdiskon = total2 - keterangan;
    cout << "Jumlah Total : " << total1 << endl;
    cout << "Total Harga : " << total2 << endl;
    cout << "Discount : " << keterangan << endl;
    cout << "Total Setelah Diskon : " << setelahdiskon << endl;
    cout << "Pembayaran : " << endl;
    cin >> pembayaran;
    kembalian = pembayaran - setelahdiskon;
    cout << "Kembalian : " << kembalian << endl;
    return 0;
}
