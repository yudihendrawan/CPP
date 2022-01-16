#include <iostream>
using namespace std;

<<<<<<< HEAD
int bilangan(int input){
    

    cout << "Masukkan angka yang akan di cek: ";
    cin >> input;

    if(input >= 0){
=======
int main(){

    int angka;

    cout << "Masukkan angka yang akan di cek: ";
    cin >> angka;

    if(angka >= 0){
>>>>>>> 195316ac0a77d728f545767c07cee97b09fe9641
        cout << "Angka yang dimasukkan adalah positif" << endl; 
    }
    else 
        cout << "Angka yang dimasukkan adalah negatif" << endl;

<<<<<<< HEAD
    return input;
}

int main(){

    int angka;
    bilangan(angka);
=======

>>>>>>> 195316ac0a77d728f545767c07cee97b09fe9641
    return 0;
}