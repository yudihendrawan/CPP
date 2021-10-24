#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;

    cout << "Masukkan kata : ";
    getline (cin, str);

    cout << "Katanya adalah : " << str << " , Panjang katanya adalah : " << str.size() << endl;




    return 0;
}