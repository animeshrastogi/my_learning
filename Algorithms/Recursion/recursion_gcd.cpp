/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int gcd_2(int num1, int num2){
    if(num1<=0 || num2<=0)
    return -1;
    int temp;
    if(num1<num2){
    temp=num1;
    num1=num2;
    num2=temp;}
    if(num1%num2==0){
        return num2;
    }
    else
    return gcd_2(num2,num1%num2);
}
int main()
{
    cout<<gcd_2(-1,74);

    return 0;
}