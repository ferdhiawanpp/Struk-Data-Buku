#include <iostream>

using namespace std;

int main ()
{
    int input[10] = {23,24,12,23,25,23,24,16,17,24};
    int search,tot=0;
    int dex[10];

    cout << "Masukan Data yang ingin dicari : ";
    cin >> search;

    for (int i=0; i<10; i++)
    {
        if (input[i] == search)
        {
            dex[tot]=i;
            tot=tot+1;

        }
    }
    cout << "Total data : "<<tot<<endl;
    cout << "Indeks ke - ";

    for (int j=0; j<tot ; j++)
    {
            cout << dex[j]<<" ";
    }
    return 0;
}