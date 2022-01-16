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
        float tugas1,tugas2,tugas3,akhir_tugas;
        cout<< " Masukkan Nilai Tugas 1 : "<<endl;
        cin>>tugas1;
        tugas1 = 0.5*tugas1;
        cout<< " Masukkan Nilai Tugas 2 : "<<endl;
        cin>>tugas2;
        tugas2 = 0.5*tugas2;
        cout<< " Masukkan Nilai Tugas 3 : "<<endl;
        cin>>tugas3;
        tugas3 = 0.5*tugas3;
        akhir_tugas = tugas1+tugas2+tugas3;
        cout<< " Nilai Akhir Tugas : "<<akhir_tugas<<endl;
        break;
        
        case 4 :
        double x,y,z,jumlah_nilai ;
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
	    if (jumlah_nilai>=85&&jumlah_nilai<=90)
	    {
	    	cout<< " Grade nilai : A " << endl;
            cout<< " Sangat Memuaskan "<<endl;
	    }
	    else if (jumlah_nilai>=79&&jumlah_nilai<=84)
	    {
	    	cout<< "Grade nilai : B " <<endl;
            cout<< " Memuaskan "<<endl;
	    }
	    else if (jumlah_nilai>=73&&jumlah_nilai<=78)
	    {
	    	cout<< " Grade nilai : C " <<endl ;
            cout<< " Cukup Memuaskan " <<endl ;
	    }
	    else if (jumlah_nilai>=67&&jumlah_nilai<=72)
	    {
	    	cout<< " Grade nilai : D " <<endl ;
            cout<< " Kurang Memuaskan " <<endl;
	    }
	    else if (jumlah_nilai>=61&&jumlah_nilai<=66)
	    {
	    	cout<< " Grade nilai : E " <<endl ;
            cout<< " Sangat Kurang Memuaskan "<<endl;
	    }
        break;

        default: cout<< "Pilihan Yang Anda Masukkan Tidak ada ";
        }
 return 0 ;   
}