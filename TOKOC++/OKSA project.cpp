#include <iostream>
using namespace std;
int main()
{
string nama_barang, kasir, hari;
int harga_total, jumlah_barang, harga, bayar, membery, diskon, kembalian,sblm,no;
cout << "SELAMAT DATANG DI TOKO HUTANG HARAP BAYAR" << endl;
cout << "---------->Selamat Berbelanja<-----------" << endl;
cout << "==============================================" << endl;
cout << "Kasir : " << endl;
cin >> kasir;
cout << "==============================================" << endl;
cout << "Hari : " << endl;
cin >> hari;
cout << "==============================================" << endl;
cout << "Nama Barang : " << endl;
cin >> nama_barang;
cout << "==============================================" << endl;
cout << "Harga Barang :Rp. " << endl;
cin >> harga;
cout << "==============================================" << endl;
cout << "Jumlah Pembelian : " << endl;
cin >> jumlah_barang;
cout << "==============================================" << endl;
harga_total = harga * jumlah_barang;
cout << "Harga Total Sebelum Diskon :Rp. " << harga_total << endl;
if ( harga_total >= 100000 )
{
diskon = harga_total * 10/100;
cout << "Diskon :Rp. " << diskon << endl;
} else if ( harga_total < 100000 )
{
diskon = harga_total * 5/100;
cout << "Diskon :Rp. " << diskon << endl;
}
cout << "==============================================" << endl;
sblm = harga_total - diskon;
cout << "harga setelah diskon :Rp." << sblm << endl;
cout << "==============================================" << endl;
cout << "Pembayaran :Rp. " << endl;
cin >> bayar;
cout << "==============================================" << endl;
kembalian = bayar - sblm;
cout << "Kembalian :Rp. " << kembalian << endl;
cout << "==============================================" << endl;
cout << "Anda Telah Berbelanja Di kasir " << kasir << " Pada Hari " << hari << " Dengan diskon " << diskon << endl;
cout << "==============================================" << endl;
cout << "Terimakasih Anda Sudah Berbelanja" << endl;
cout << "==============================================" << endl;
cin>> no;
return 0;
}
