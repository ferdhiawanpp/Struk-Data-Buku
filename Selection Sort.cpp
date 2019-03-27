#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main ( )
{
	int data [] = { 7, 3, 9, 2, 5}; 
	int tmp;
 
    cout<<"\tSELECTION SORT\n\n";
    cout << "Data yang akan di urutkan \t:";
    for( int i = 0; i < 5; i++)
    cout << data[i] << " ";
	cout << endl;
		for (int i = 0; i < 5 -1; i++)
		for (int j = i+1; j < 5; j++)
            if (data[i] > data[j])
               {
                 tmp = data[i];
                 data[i] = data[j];
                 data[j] = tmp;
               }
 
	cout<<"\nData yang telah di urutkan \t:";
	for( int i = 0; i < 5; i++)
	cout << data[i] << " ";
	cout << endl;
getch();
return 0;
}