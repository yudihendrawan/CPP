#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "masukkan angka : ";
    cin >> n;

    if (n % 2 == 0){
        cout << "Angka tersebut Genap";
    }
    else if (n % 2 != 0){
        cout << "Angka tersebut Ganjil";
    }

    cout << endl;



    return 0;
}