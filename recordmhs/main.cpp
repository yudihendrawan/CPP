#include <iostream>
using namespace std;

struct mahasiswa{
    char NIM[8];
    char nama[20];
    int nilai;
};
typedef mahasiswa LarikMhs[10];
LarikMhs mhs;

void banyakData(int& n){
    cout << "banyak data : ";
    cin >> n;
};

void inputMahasiswa(LarikMhs& Mhs, int n){
    for (int i = 0; i < n; i++){
    cout << "Masukkan data mahasiswa ke - " << (i+1) << endl;
    cout << "NIM   : ";
    cin >> Mhs[i].NIM; 
    cout << "Nama  : ";
    cin >> Mhs[i].nama;
    cout << "Nilai : ";
    cin >> Mhs[i].nilai;
    }
};

void cetakMahasiswa (LarikMhs Mhs, int n){
    cout << "Data Mahasiswa" << endl;
    for(int i=0; i<n; i++){
        cout << Mhs[i].NIM << "|" << Mhs[i].nama << "|" << Mhs[i].nilai << endl;
    }
};

int main(){

    LarikMhs mhs;
    int n;
    banyakData(n);
    inputMahasiswa(mhs, n);
    cetakMahasiswa(mhs, n);
    return 0;
    
}