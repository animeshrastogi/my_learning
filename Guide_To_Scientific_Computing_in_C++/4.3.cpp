
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for(int j = 0; j<10000000000; j++){
        double* a1 = new double [3];
        double* a2 = new double [3];
        for(int i = 0; i<3;i++){
            a1[i] = (double)(i);
            a2[i] = 2*i;
        }
        
        delete[] a1;
        delete[] a2;
}
    cout<<"Hello";
    return 0;
}
