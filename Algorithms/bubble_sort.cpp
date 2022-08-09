/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

//Time Complexity - O(n^2)
//Space Complexity - O(1) - in-place
void bubble_sort(int arr[], int size){
    for(int i = 0;i<size-1;i++){
        for(int j =0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                arr[j]=arr[j+1] + arr[j];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j]-arr[j+1];
            }
        }
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    bubble_sort(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}