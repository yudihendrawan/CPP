#include <iostream>
using namespace std;

int main(){

    int angka;

    cout << "Masukkan anka yang akan di cek: ";
    cin >> angka;

    if(angka >= 0){
        cout << "Angka yang dimasukkan adalah positif" << endl; 
    }
    else 
        cout << "Angka yang dimasukkan adalah negatif" << endl;


    return 0;
}