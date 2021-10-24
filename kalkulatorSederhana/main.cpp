#include <iostream>
#include <string>
using namespace std;


int main(){

    float angka1, angka2, hasil = 1;
    enum operat{TAMBAH = 1, KURANG, KALI, BAGI, PANGKAT, FINISH};
    int pilihan;
    char is_continue;


    kalkulator:
    cout << "Masukkan angka pertama : ";
    cin >> angka1;

    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << endl;

    cout << "Pilihan operator :" << endl;
    cout << "1 untuk penjumlahan" << endl;
    cout << "2 untuk pengurangan" << endl;
    cout << "3 untuk perkalian" << endl;
    cout << "4 untuk pembagian" << endl;
    cout << "5 untuk perpangkatan" << endl << endl;
    cout << "Masukkan Operator : ";
    cin >> pilihan;

    while (pilihan != FINISH){
        switch(pilihan){
            case TAMBAH:
                    hasil = angka1 + angka2;
                    cout << "Hasil dari penjumlahan " << angka1 << " dan " << angka2 << " adalah : " << hasil; 
                    break;
            case KURANG:
                    hasil = angka1 - angka2;
                    cout << "Hasil dari pengurangan " << angka1 << " dan " << angka2 << " adalah : " << hasil;
                    break;
            case KALI:
                    hasil = angka1 * angka2;
                    cout << "Hasil dari perkalian " << angka1 << " dan " << angka2 << " adalah : " << hasil;
                    break;
            case BAGI:
                    hasil = angka1 / angka2;
                    cout << "Hasil dari pembagian " << angka1 << " dan " << angka2 << " adalah : " << hasil;
                    break;
            case PANGKAT:
                    for (int i = 1; i <= angka2; i++){
                        hasil = hasil * angka1;
                    }
                    cout << "Hasil dari perpangkatan " << angka1 << " pangkat " << angka2 << " adalah: " << hasil;
                    break;
            default :
                    cout << "Pilihan tidak ditemukan" << endl;
                    break;
        }

        label_continue:
        cout << endl;
        cout << "\nLanjutkan ? ";
        cin >> is_continue;

        if ((is_continue == 'Y')  | (is_continue == 'y')){
            goto kalkulator;
        }
        else if ((is_continue == 'N')  | (is_continue == 'n')){
            break;
        }else
            goto label_continue;
    }
    cout << "Selesai.." << endl;
    
    


    return 0;
}