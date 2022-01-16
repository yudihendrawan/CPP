#include <iostream>

using namespace std;

int daftar(char cari){
    char nama[2][9] = {{'y','u','d','i'},{'h','e','n','d','r','a','w','a','n'}};
    int ketemu;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 9; j++){
            cout << nama[i][j];
            
        }
        cout <<endl;
    }
    cout << "Masukkan huruf yang ingin di ketahui urutan indexnya : ";
    cin >> cari;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 9; j++){
            if (nama[i][j] == cari){
                cout << "Huruf yang dicari berada pada index : "<< "[" << i <<"]" << ", dan ["<< j <<"], ";
            }
        }

    }   
    cout << endl;
    return cari;
}
int main(){

    char input;

    daftar(input);
    
    return 0;
}