/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


//Time complexity - O(n^2) - two loops
//Space complexity - O(1) - in-line
void selection_sort(int* arr, int size){
    int min, flag, index;
    for(int i=0;i<size-1;i++){
        min = arr[i];
        flag = 0;
        for(int j = i+1;j<size;j++){
            if(min>arr[j]){
                min = arr[j];
                flag = 1;
                index = j;
            }
        }
        if(flag == 1){
            arr[i] = arr[i] + arr[index];
            arr[index] = arr[i] - arr[index];
            arr[i] = arr[i] - arr[index];
        }
    }
}

int main()
{
    int arr[6] = {5,3,1,2,3,4};
    selection_sort(arr,6);
    for(int i = 0; i<6;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}