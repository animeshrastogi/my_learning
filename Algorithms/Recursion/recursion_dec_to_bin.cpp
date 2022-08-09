/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string dec_to_bin(int n){
    if(n==0)
    return "0";
    else if(n==1)
    return "1";
    else
    return dec_to_bin(n/2) + to_string(n%2);
}
int main()
{
    cout<<dec_to_bin(13);

    return 0;
}