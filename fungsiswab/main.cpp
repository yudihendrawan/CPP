#include <iostream>
using namespace std;

void input_kata(string input){
 
 string kata1, kata2, temp;

    cout << "Masukkan kata pertama : ";
    cin >> kata1;
    cout << "Masukkan kata kedua : ";
    cin >> kata2;

    cout << "\nkata Pertama adalah " << kata1 << " dan kata kedua adalah " << kata2 << endl;
    temp = kata1; 
    kata1 = kata2;
    kata2 = temp;

    cout << "katanya setelah di tukar" << endl;
    cout << "Kata pertama menjadi "<< kata1 << " dan kata keduanya adalah " << kata2 <<endl;

}

int main(){
   
    string input;

    cout << "Program Menukar 2 kata" << endl << endl;

    input_kata(input);
    

    return 0;   
}