#include <iostream>
using namespace std ;

int main()
{
	int pilihan ;
    cout<< "== Data Mahasiswa ==" <<endl;
    cout<< " [1] Data Nilai UAS " <<endl;
    cout<< " [2] Data Nilai UTS " <<endl;
    cout<< " [3] Data Nilai Tugas " <<endl;
    cout<< " [4] Prediket " <<endl;
    cout<< " Masukan Data Yang Diinginkan : " ;
    cin>> pilihan ;

    switch(pilihan)
    {
        case 1 :
        float uts;
        cout<< " Masukkan Nilai UTS : " <<endl;
        cin>> uts;
        uts = 0.4*uts ;
        cout<< "Nilai UTS nya ialah : "<<uts<<endl;
        break;

        case 2 :
        float uas;
        cout<< " Masukkan Nilai UAS : " <<endl;
        cin>> uas ;
        uas = 0.5*uas;
        cout<< "Nilai UAS nya ialah : "<<uas<<endl;
        break;

        case 3 :
        float tugas1,tugas2,tugas3,tugas_akhir;
        cout<< " Masukkan Nilai tugas 1 : "<<endl;
        cin>>tugas1;
        tugas1 = 0.05*tugas1;
        cout<< " Masukkan Nilai tugas 2 : "<<endl;
        cin>>tugas2;
        tugas2 = 0.05*tugas2;
        cout<< " Masukkan Nilai tugas 3 : "<<endl;
        cin>>tugas3;
        tugas3 = 0.05*tugas3;
        tugas_akhir = tugas1+tugas2+tugas3 ;
        cout>>" Nilai Akhir Tugas : "<<tugas_akhir<<endl;
        break;
        
        case 4 :
        float x,y,z,jumlah_nilai ;
	    cout<< "== Input Data Nilai Mahasiswa ==" <<endl;
	    //meminta user memasukkan data nilai mahasiswa mulai dari uts,uas, dan tugas
	    cout<< "Masukkan Nilai UTS : " ;
	    cin>> x;
	    x = 0.4*x;
	    cout<< "Masukkan Nilai UAS : " ;
	    cin>>y;
	    y = 0.5*y;
	    cout<< "Masukkan Nilai Tugas : " ;
	    cin>>z ;
	    z = 0.1*z;
	    jumlah_nilai = x+y+z ;
	    cout<<"Jumlah Nilai Mahasiswa : " <<jumlah_nilai<< endl ;
	    //setelah dapat jumlah nilai dari mahasiswa maka kita akan dapat menentukan grade nilai dengan percabangan if else
	    if (jumlah_nilai>=85)
	    {
	    	cout<< " Grade nilai : A " << endl;
            cout<< " Sangat Memuaskan "<<endl;
	    }
	    else if (jumlah_nilai<=84)
	    {
	    	cout<< "Grade nilai : B " <<endl;
            cout<< " Memuaskan "<<endl;
	    }
	    else if (jumlah_nilai<=80)
	    {
	    	cout<< " Grade nilai : C " <<endl ;
            cout<< " Cukup Memuaskan " <<endl ;
	    }
	    else if (jumlah_nilai<=75)
	    {
	    	cout<< " Grade nilai : D " <<endl ;
            cout<< " Kurang Memuaskan " <<endl;
	    }
	    else if (jumlah_nilai<=70)
	    {
	    	cout<< " Grade nilai : E " <<endl ;
            cout<< " Sangat Kurang Memuaskan "<<endl;
	    }
        break;

        default: cout<< "Pilihan Yang Anda Masukkan Tidak ada ";
        }
 return 0 ;   
}
#include<iostream>

using namespace std;

int main()
{
    int nilai ;

    cout << "== Grade nilai & prediket Nilai Akhir Mahasiswa =="<<endl;
    cout <<" [1] Range NiLai Akhir 85-90 " << endl;
	cout <<" [2] Range NiLai Akhir 80-84 " << endl; 
    cout <<" [3] Range NiLai Akhir 75-79 " << endl;
    cout <<" [4] Range NiLai Akhir 70-74 " << endl;
    cout <<" [5] Range NiLai Akhir 65-69 " <<endl<< endl; 
	cout <<" Masukkan Nilai Akhir Anda : " ;
    cin>>nilai;
    
    switch (nilai){
    	case 1:
    		cout <<"Grade Nilai : A " << endl;
            cout <<"Prediket : Sangat Memuaskan "<<endl;
    		break;
    	case 2:
    		cout <<"Grade Nilai : B " << endl;
            cout <<"Prediket : Memuaskan "<<endl;
            break;
        case 3:
    		cout <<"Grade Nilai : C " << endl;
            cout <<"Prediket : Cukup Memuaskan "<<endl;
            break;
        case 4:
    		cout <<"Grade Nilai : D " << endl;
            cout <<"Prediket : Kurang Memuaskan "<<endl;
            break;
        case 5:
    		cout <<"Grade Nilai : E " << endl;
            cout <<"Prediket : Sangat Kurang Memuaskan "<<endl;
            break;            
    	default:
    		cout << "ANDA TIDAK LULUS SEMESTER INI,SILAHKAN NGULANG TAHUN DEPAN" << endl;
	}
	
    return 0;
    }
