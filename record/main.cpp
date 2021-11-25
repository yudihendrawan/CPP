#include <iostream>
using namespace std;


struct pelanggan_toko{
    char nama[20][20], alamat[20][20], kelamin[20][20];
    int umur[20], telp[20];
};

pelanggan_toko data;

int main(){

    int jumlah, i;
    cout << "Input data pelanggan" << endl;
    cout << "Jumlah pelanggan            : ";
    cin >> jumlah;
    
    for (i = 1; i <= jumlah; i++){
        cout << "Nama pelanggan toko     : ";
        cin >> data.nama[i];
        cout << "Alamat pelanggan toko   : ";
        cin >> data.alamat[i];
        cout << "Umur pelanggan toko     : ";
        cin >> data.umur[i];
        cout << "Jenis kelamin pelanggan : ";
        cin >> data.kelamin[i];
        cout << "No Telp pelanggan       : ";
        cin >> data.telp[i];
    }
    for (i = 1; 1 <= jumlah; i++){
        cout << "------------------------------------" << endl;
        cout << "Data pelanggan toko     : " << endl;
        cout << "Nama                    : " << data.nama[i] << endl;
        cout << "Alamat                  : " << data.alamat[i] << endl;
        cout << "Umur                    : " << data.umur[i] << endl;
        cout << "Kelamin                 : " << data.kelamin[i] << endl;
        cout << "No. Telp                : " << data.telp[i] << endl;

    }
    return 0;
}