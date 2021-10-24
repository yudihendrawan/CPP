#include <iostream>
using namespace std;

int main (){

    int n;

    cout << "Masukkan jumlah angka yang diinginkan : ";
    cin >> n;

    int a [n];

    for (int i = 1; i <= n; i++){
        cout << "Masukkan angka ke - " << i << " : ";
        cin >> a [i];

    }
    cout << endl;

    cout << "Angka yang dimasukkan adalah : ";
    for (int j = 1; j <= n; j++){    
        cout << a [j] << " ";
    }

    cout << "\nAngka genapnya adalah : ";
    for (int k = 1; k <=n; k++){
        if (a[k] % 2 == 0)
            cout << a[k] << " ";
    }

    cout << "\nAngka ganjilnya adalah : ";
    for (int l = 1; l <= n; l++){
        if (a[l] % 2 != 0)
        cout << a[l] << " ";
    }

    cout << endl;


    return 0;
}






