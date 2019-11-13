// program akta kelahiran
#include <iostream>
using namespace std;
int main()

{
	char nama[50];
	int tanggal;
	int jam;
	char tempat[50];
	char nama_a[50];
	char nama_b[50];
	cout<< " Masukan nama lengkap : ";cin>>nama;
	cout<< " Masukan tanggal lahir : ";cin>>tanggal;
	cout<< " Lahir pada jam : ";cin>>jam;
	cout<< " lahir di : ";cin>>tempat;
	cout<< " Lahir dari seorang ayah yang bernama : ";cin>>nama_a;
	cout<< " Lahir dari seorang ibu yang bernama : ";cin>>nama_b;
	cout<<nama<<endl;
	cout<<tanggal<<endl;
	cout<<jam<<endl;
	cout<<tempat<<endl;
	cout<<nama_a<<endl;
	cout<<nama_b;

	return 0;
}
