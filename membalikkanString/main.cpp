#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    string str;
    
    cout << "Masukkan kata yang ingin di balik : ";
    getline(cin, str);

    cout << "Kata sebelum dibalik adalah : " << str << endl;

    reverse (str.begin(), str.end());

    cout << str << endl;



    return 0;
}