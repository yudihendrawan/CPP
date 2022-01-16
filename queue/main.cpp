#include <iostream>
#include <string>

using namespace std;
int maksimalArray = 5;
int front = 0;
int back = 0;

string antrian[10];

bool isFull(){
    if (back == maksimalArray){
        return true;
    }else {
        return false;
    }
}

bool isEmpty(){
    if (back == 0){
        return true;
    }else {
        return false;
    }
}

string enqueue(string data){
    string input;
    if (isFull() == true){
        cout << "Antrian sudah penuh" << endl;
    }else {
        if (isEmpty() == true){
            cout << "Masukkan data: ";
            getline(cin, input);
            antrian[0] = input;
            front++;
            back++;
        }else {
            cout << "Masukkan data: ";
            getline(cin, input);
            antrian[back] = input;
            back++ ;
        }
    }
    return input;
}

void dequeue(){
    if (isEmpty()){
        cout << "Antrian masih kosong" << endl;
    }else {
        for (int i = 0; i < back; i++){
            antrian[i] = antrian [i+1];
        }
        back --;
    }
}

void viewData(){
    cout << "Data antrian: " << endl;
    if (isEmpty()){
        cout << "Antrian kosong";
    }else{
        for (int i = 0; i < maksimalArray; i++){
            if ( antrian[i] != ""){
                cout << i + 1 << ". " << antrian[i] << endl;
            }else{
                cout << i + 1 << ". " << endl; 
            }
        }
    }
    cout << endl;
}

int pilihan(){
    int pil;

    system("clear");
    cout << "Daftar pilihan" << endl;
    cout << "1. Enqueue Data ke dalam memori" << endl;
    cout << "2. Denqueue Data dari dalam memori" << endl;
    cout << "3. View Data" << endl;
    cout << "4. Exit" << endl;
    cout << "Masukkan pilihan menu (1-4): ";
    cin >> pil;
    cin.ignore(1, '\n');
    return pil;
}   
    

int main(){

    int pilih = pilihan();
    string kata;
    char lanjut;

    while(pilih != 4){
    switch(pilih){
        case 1:
            enqueue(kata);
            viewData();
        break;
        case 2:
            dequeue();
            viewData();
        break;
        case 3:
            viewData();
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