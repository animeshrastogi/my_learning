/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

//Time complexity - O(n)
void linear_search(vector<int> vec, int num){
    
    int index = 0;
    for(auto it = vec.begin();it!=vec.end();++it){
        if(*it == num){
            cout<<"The number is present at index "<<index<<"\n";
            return;
        }
        ++index;
    }
    if(index == vec.size()){
        cout<<"The number is not present ";
    }
    
}

int main()
{
    
    vector<int> vec = {1,2,3,4,5};
    linear_search(vec,6);
    return 0;
}
