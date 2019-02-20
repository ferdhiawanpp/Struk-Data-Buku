/* Nama		:	Ferdhiawan Perdana Putra
   NIM		:	18050623010
   Prodi	:	D3 Manajemen Informatika */

#include <iostream>
#include <string>
#include <conio.h>
 
using namespace std;
 
struct KTM
{
    long int nim;
    string nama;
    string ttl;
    string kelamin;
    string prodi;
    string agama;
    string status;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku;
};
 
 
 
 
int main()
{
    struct KTM *identitas, kartu;
    kartu.nim = 18050623010;
    kartu.nama = "FERDHIAWAN";
    kartu.ttl = "SURABAYA, 08 - 11 - 1999";
    kartu.kelamin = "LAKI - LAKI";
    kartu.prodi = "MANAJEMEN INFORMATIKA (FAKULTAS TEKNIK)";
    kartu.agama = "ISLAM";
    kartu.status = "BELUM KAWIN";
    kartu.pekerjaan = "MAHASISWA";
    kartu.kewarganegaraan = "WNI";
    kartu.berlaku = "Seumur Hidup";
 
    identitas = &kartu;
 
    cout<<" Nomor Induk Mahasiswa\t\t: " << identitas-> nim << endl;
    cout<<" Nama\t\t\t\t: " << identitas-> nama << endl;
    cout<<" Tempat / Tanggal Lahir\t\t: " << identitas->ttl << endl;
    cout<<" Jenis Kelamin\t\t\t: " << identitas-> kelamin << endl;
    cout<<" Prodi\t\t\t\t: " << identitas-> prodi << endl;
    cout<<" Agama\t\t\t\t: " << identitas-> agama << endl;
    cout<<" Status Perkawinan\t\t: " << identitas-> status << endl;
    cout<<" Pekerjaan\t\t\t: " << identitas-> pekerjaan << endl;
    cout<<" Kewarganegaraan\t\t: " << identitas-> kewarganegaraan << endl;
    cout<<" Berlaku Hingga\t\t\t: " << identitas-> berlaku << endl;
 
    getch();
}