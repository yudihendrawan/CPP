#include <iostream>

using namespace std;

int main (){

    char a, b, temp;

    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    cout << "Angka Pertama adalah " << a << " dan angka kedua adalah " << b << endl;

    temp = a; 
    a = b;
    b = temp;

    cout << "Angka setelah di swab adalah, angka pertama " << a << " dan angka keduanya adalah " << b <<endl;


    return 0;
}