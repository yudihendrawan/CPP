#include <iostream>
using namespace std;

int main (){

    int arr [100], angka, hasil, i;

    cout << "Masukkan ukuran max[100]: ";
    cin >> angka;
    cout << "Masukkan " << angka << " elemen array" << endl;

    for (i = 0; i < angka; i++){

        cout << "Elemen array ke- " << i + 1 << " : ";
        cin >> arr [i];
    hasil = arr [0];
    }
    for (i = 1; i < angka; i++){
        if(hasil < arr[i])
            hasil = arr[i];
    }

    cout << "\nAngka terbesar nya adalah : " << hasil << endl;


    return 0;
}