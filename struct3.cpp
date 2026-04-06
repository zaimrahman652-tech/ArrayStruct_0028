#include <iostream>
#using namespace std;

struct alamatdetail {
string desa;
string kota;
};

struct mahasiswa {
string nama;
int umur;
alamatdetail alamat;
};
mahaiswa mhs1;
//mengisi data
{
cout << "isikan data nama : ";
getline(cin, mhs1.nama);
cout << "isikan data kota : ";
getline(cin, mhs1.alamat.kota);
cout << "isikan data desa : ";
getline(cin, mhs1.alamat.desa);
cout << "isikan data umur : ";
cin >> mhs1.umur;
cout << "data mahasiswa : " << endl;
cout << "nama : " << mhs1.nama << endl;

cout << "kota : " << mhs1.alamat.kota << endl;
cout << "desa : " << mhs1.alamat.desa << endl;
cout << "usia : " << mhs1.umur << endl;
}