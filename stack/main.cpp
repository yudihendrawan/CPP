#include <iostream>

using namespace std;

int maksimal = 5;
int top = 0;
string dataKarakter[5];


void cekMemori(){
    if (top != maksimal){
        if (top != 0){
            cout << "Data penuh?  : Tidak" << endl;
            cout << "Data Kosong? : Tidak" << endl;
            }else if(top == 0){
            cout << "Data penuh?  : Tidak" << endl;
            cout << "Data Kosong? : Ya" << endl;
        }
    }else if (top == maksimal){
        cout << "Data penuh?  : Ya" << endl;
        cout << "Data Kosong? : Tidak" << endl;
    }
}

string pushArray(string data){
    string kata;

    cout <<"Masukkan karakter yang ingin di simpan: ";
    cin >> kata;
    if( top == maksimal ){
        cout << "\nMaaf, data sudah penuh" << endl << endl;
    }else{
        dataKarakter[top]=kata;
        top++;
    }
    return kata;
}

void popArray(){
    if( top == 0 ){
        cout << "\nDatanya sudah kosong" << endl << endl;
    }else{
        dataKarakter[top - 1]= " ";
        top--;
    }
}

void displayData(){
    cout << "Data stack array: " << endl;
    for ( int i = maksimal - 1; i >= 0; i-- ){
        if (dataKarakter[i] != " "){
            cout << "Data: " << dataKarakter[i] << endl;
        }else if (dataKarakter[i] == " "){
            cout << "Data: " << dataKarakter[i+1] << endl;
        }
    }
    cout << endl << endl;
}
int pilihan(){
    int pil;
    
    system("clear");
    cout << "Daftar pilihan" << endl;
    cout << "1. Push Data ke dalam memori" << endl;
    cout << "2. Pop Data dari dalam memori" << endl;
    cout << "3. Exit" << endl;
    cout << "Masukkan pilihan menu (1-3): ";
    cin >> pil;
    return pil;
    
}   
    


int main(){

    int pilih = pilihan();
    string karakter;
    char lanjut;

    
    while(pilih != 3){
    switch(pilih){
        case 1:
            pushArray(karakter);
            displayData();
            cekMemori();
        break;
        case 2:
            popArray();
            displayData();
            cekMemori();
        break;
        default:
        cout << "Pilihan tidak ditemukan, coba kembali" << endl;
        }

    is_Lanjut:
        cout <<"Lanjutkan?(y/n): ";
        cin >>  lanjut;
        if ((lanjut == 'y' || (lanjut == 'Y'))){
            pilih = pilihan();
        }else if ((lanjut == 'n' || (lanjut == 'N'))){
            break;
        }else{
            goto is_Lanjut;
        }
    }
     
    return 0;
}