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

// deklarasi variabel struct
mahasiswa mhs[3];
for (int i = 0; i < 3; i++) {
    //mengisi data
    cout << "isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "isikan data umur : ";
    cin >> mhs[i].umur;
    cin.ignore(); // untuk membersihkan buffer setelah membaca umur
}
