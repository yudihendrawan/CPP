#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

int arr[10];
int i,data,nilai,j, dup;
int a, b, temp;

    cout<<"\nMasukkan Banyak Data [MAKS 10] :";
    cin>>data;
    for(i=1; i<=data; i++){
        input:
     cout<<"Masukkan Nilai Ke"<<i<<" = ";
     cin>>arr[i];
        if(arr[nilai]==arr[i]){ 
            cout << "Duplikasi pada urutan/lokasi array nya pada index ke "<< i << endl;
            cout << "Masukkan input data kembali" << endl;
            temp = a;
            goto input;
        }
        temp = arr[i]; 
        arr[i] = arr[nilai];
        arr[nilai] = temp;
        for (j = temp; j <= data; j++){
            if (temp == arr[j]){
                 temp = a;
                cout << "Duplikasi pada urutan/lokasi array nya pada index ke "<< j << endl;
                cout << "Masukkan input data kembali" << endl;
                goto input;
            }
        }
    }
    for(i=0; i>=data; i--){
        cout << arr[i] << endl;
    }
   return 0;
}