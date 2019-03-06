#include<iostream>
using namespace std;
struct jeneng{
    float gajit=0;
    int jam=0;
    string nama;
};
jeneng krywn[100];

int main(){
	int gaji =500,jml;

    cout << "============================" << endl;
    cout << "\tProgram Struk\t" << endl;
    cout << "============================" << endl;
    cout<<"Masukan jumlah karyawan : ";
    cin>>jml;

	for(int i=0;i<jml;i++){

        cout<<"Karyawan "<<i+1<<endl;
        cout<<"Jam Kerja:";
        cin>>krywn[i].jam;

        if(krywn[i].jam<=7){
            krywn[i].gajit=krywn[i].jam*gaji;
        }else{
            krywn[i].gajit += 7*gaji;
            krywn[i].gajit +=(krywn[i].jam-7)*(gaji*15);
        }
        cout<<"Jumlah Gaji: "<<krywn[i].gajit<<endl;
	}

}
