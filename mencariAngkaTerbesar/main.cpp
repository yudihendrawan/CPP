#include <iostream>
using namespace std;

int main (){

    int arr [100], angka, max, min, i;

    cout << "Masukkan ukuran max[100]: ";
    cin >> angka;
    cout << "Masukkan " << angka << " elemen array" << endl;

    for (i = 0; i < angka; i++){

        cout << "Elemen array ke- " << i + 1 << " : ";
        cin >> arr [i];
    max = arr [0];
    min = arr[1];
    }
    for (i = 1; i < angka; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        
        else if(min > arr[i]){
            min = arr[i];
        }
    }
<<<<<<< HEAD
    cout << "\nAngka terbesarnya adalah : " << max << endl;
    cout << "Angka Terkecilnya adalah :  " << min << endl;
    
=======

    cout << "\nAngka terbesarnya adalah : " << max << endl;
    cout << "Angka Terkecilnya adalah :  " << min << endl;

>>>>>>> 195316ac0a77d728f545767c07cee97b09fe9641
    return 0;
}