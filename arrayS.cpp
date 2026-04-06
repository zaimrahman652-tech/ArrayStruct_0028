#include <iostream>
#using namespace std;

int main() 
{
    // deklarasi array di sertai dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //deklarasi array tanpa inisialisasi
    int datamu[5];

    //cara akses (membaca atau mengabil isi array
    cout << "Isi array data kedua: " << dataku[1] << endl;
    //mengisi array
    dataku [1] = 200;
    cout << "Isi array data kedua setelah diubah: " << dataku[1] << endl;

    // mengisi data dengan perintah satu per satu
    cout << "isikan data pertama: ";
    cin >> datamu[0];
    cout << "isikan data kedua: ";
    cin >> datamu[1];
    cout << "isikan data ketiga: ";
    cin >> datamu[2];
    cout << "isikan data keempat: ";
    cin >> datamu[3];
    cout << "isikan data kelima: ";
    cin >> datamu[4];
   


    