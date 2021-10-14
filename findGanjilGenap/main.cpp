#include <iostream>
using namespace std;

int main (){

    int n, a [60];

    cout << "Masukkan jumlah angka yang diinginkan : ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "Masukkan angka ke - " << i << " : ";
        cin >> a [i];
    }
    cout << a [i];     


    return 0;
}