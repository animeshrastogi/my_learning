/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void binary_search(vector<int> vec, int search){
    
    int low = 0;
    int high = vec.size()-1;
    int mid = (low + high)/2;
    if(vec[mid] == search){
        cout<<"Found at index "<< mid<<"\n";
        return;
    }
    
    while(low<=high){
        mid = (low + high)/2;
        if(vec[mid]>search){
            high = mid - 1;
        }
        else if(vec[mid] < search){
            low = mid+1;
        }
        else{
             cout<<"Found at index "<< mid<<"\n";
            return;
        }
    }
    cout<<"Not found";
    
}

int main()
{
   vector<int> vec = {1,5,9,11};
   binary_search(vec,5);

    return 0;
}