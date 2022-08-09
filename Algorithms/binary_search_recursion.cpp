/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;


void binary_search(vector<int> vec, int search, int low, int high){
    
    int mid = (low+high)/2;
    
    if(vec[mid]==search){
        cout<<"Found at index "<< mid<<"\n";
        return;
    }
    
    if(low>high){
        cout<<"Not found\n";
        return;
    }
    
    if(search>vec[mid]){
        low = mid+1;
        binary_search(vec,search,low,high);
    }
    else{
        high = mid-1;
        binary_search(vec,search,low,high);
    }
    
    
}
int main()
{
    vector<int> vec = {1,5,7,9};
    binary_search(vec,-9,0,vec.size()-1);
    
    return 0;
}