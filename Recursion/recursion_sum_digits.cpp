/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int sum_digit(int n){
    
    if(n<=0){
        return 0;
    }
    else{
        return n%10 + sum_digit(n/10);
    }
}
int main()
{
    cout<<sum_digit(70);

    return 0;
}