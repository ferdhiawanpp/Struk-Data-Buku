#include <iostream>

using namespace std;

int main()
{
    int i,n[20],j;
    n[0]=0;
    n[1]=1;
    
    cout << "Program Deret Fibonacci\n";
    cout << "Masukkan nilai : ";
    cin >> j;
    cout << endl;


    for(i=2; i<j; i++)
    {
        n[i]=n[i-2]+n[i-1];
    }

    cout << "Bilangannya adalah: ";
    for (i=0; i<j; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}