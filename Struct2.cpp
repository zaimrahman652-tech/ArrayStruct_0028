#include <iostream>
#using namespace std;

struct alamatdetail {
string desa;
string kota;
};

struct mahasiswa {
string nama;
alamatdetail alamat;
};

int main()
{
    //deklarasi variabel struct
    mahasiswa mhs1;
    //mengisi data
    cout << "isikan data nama : ";
    cin >> mhs1.nama;
    cout << "isikan data desa : ";
    cin >> mhs1.alamat.desa;
    cout << "isikan data kota : ";
    cin >> mhs1.alamat.kota;

    cout << "data mahasiswa : " << endl;
    cout << "nama : " << mhs1.nama << endl;
    cout << "desa : " << mhs1.alamat.desa << endl;
    cout << "kota : " << mhs1.alamat.kota << endl;
}
