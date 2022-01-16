#include <iostream>
using namespace std;

int bilangan(int input){
    

    cout << "Masukkan angka yang akan di cek: ";
    cin >> input;

    if(input >= 0){
        cout << "Angka yang dimasukkan adalah positif" << endl; 
    }
    else 
        cout << "Angka yang dimasukkan adalah negatif" << endl;

    return input;
}

int main(){

    int angka;
    bilangan(angka);
    return 0;
}