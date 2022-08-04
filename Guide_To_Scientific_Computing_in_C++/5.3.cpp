//Swap values using pass by reference
#include <iostream>
using namespace std;

void swap(int&a, int& b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main()
{
    int a, b;
    a = 10;
    b = 1000;
    
    swap(a,b);
    
    cout<<a<<"\n"<<b;

    return 0;
}