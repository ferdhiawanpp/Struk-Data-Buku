#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void insertion_sort(int arr[], int length);
void print_array(int array[],int size);
 
int main() {
 cout<<"\tINSERTION SORT\n\n";
int array[5]= {5,4,3,2,1};
insertion_sort(array,5);
 getch();
 return 0;
}
 
void insertion_sort(int arr[], int length) {
 int i, j ,tmp;
 
 for (i = 1; i < length; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {
 tmp = arr[j];
 arr[j] = arr[j - 1]; 
 
 arr[j - 1] = tmp;
 j--;
 
 }
 print_array(arr,5);
 }
 }
 
void print_array(int array[], int size){
 
 cout<< "Pengurutan : ";
 int j;
 for (j=0; j<size;j++)
 for (j=0; j<size;j++)
 cout <<" "<< array[j];
 cout << endl;
 }