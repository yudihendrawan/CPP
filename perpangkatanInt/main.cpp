#include <iostream>
using namespace std;

int main (){

    int angka, pangkat, temp = 1;

    cout << "Masukkan angka pertama: ";
    cin >> angka;
    cout << "Masukkan pangkat nya: ";
    cin >> pangkat;

        for (int i = 1; i <= pangkat; i++){
       
        temp = temp * angka;
        }
        cout << temp;
        
    return 0;
}