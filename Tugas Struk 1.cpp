#include<iostream>

using namespace std;

struct mhs{
    float tgs,kuis,uts,uas,NA;
    int nim;
    string nama;
};
mhs data[100];

int main(){
    int jml;
    cout << "============================" << endl;
    cout << "\tProgram Struk\t" << endl;
    cout << "============================" << endl;
    cout<<"Masukkan jumlah mahasiswa:";
    cin>>jml;

    for (int i=0;i<jml;i++){
        cout<<"=============\n";
        cout<<"Masukan nama: ";
        cin>>data[i].nama;
        cout<<"Masukan nim: ";
        cin>>data[i].nim;
        cout<<"Masukan nilai tugas: ";
        cin >>data[i].tgs;
        cout<<"Masukan nilai kuis: ";
        cin>>data[i].kuis;
        cout<<"Masukan nilai uts: ";
        cin>>data[i].uts;
        cout<<"Masukan nilai uas: ";
        cin>>data[i].uas;


        data[i].NA = 0.1*data[i].tgs;
        data[i].NA += 0.2*data[i].kuis;
        data[i].NA += 0.3*data[i].uts;
        data[i].NA += 0.4*data[i].uas;
    }


    for(int i=0;i<jml;i++){
        cout<<"Nama : "<<data[i].nama<<endl;
        cout<<"Nim : "<<data[i].nim<<endl;
        cout<<"Nilai akhir : "<<data[i].NA<<"(";
        if(data[i].NA>85)
            cout<<"A";
        else if(data[i].NA<=85&&data[i].NA>70)
            cout<<"B";
        else if(data[i].NA<=70&&data[i].NA>55)
            cout<<"C";
        else if(data[i].NA<=55&&data[i].NA>40)
            cout<<"D";
        else
            cout<<"D";
        cout<<")\n========================\n";
    }

}
