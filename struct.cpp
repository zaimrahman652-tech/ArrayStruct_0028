#include <iostream>
#using namespace std;

int main() 
{
    // deklarasi variabel struct
    mahasiswa mhs;
    // mrngisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << "isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "isikan data usia : ";
    cin >> mhs.umur;

    cout << "data mahasiwa" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "alamat : " << mhs.alamat << endl;
    cout << "usia : " << mhs.umur << endl;

    return 0;
}