#include <iostream>

using namespace std;

int daftarIpk (int pil){
    float ipk[] = {3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0}; 
    cout << "Daftar IPK = ";
    for(int i = 0; i<=9; i++){
        cout << ipk[i] << " ";

    }   
    cout << "\nPilih urutan IPK yang ingin di ambil (index = 0-9) : ";
    cin >> pil;
    cout << "IPK yang dipilih adalah = " << ipk[pil] <<endl;  
    return pil;
}

int main(){

    int input;

    daftarIpk(input);

    return 0;
}