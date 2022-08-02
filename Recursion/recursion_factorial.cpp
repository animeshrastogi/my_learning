/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int factorial(int n){
    if(n==1 || n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    cout<<factorial(10);

    return 0;
}
