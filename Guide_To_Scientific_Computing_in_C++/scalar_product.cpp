//Pass dynamically allocated arrays for scalar product
#include <iostream>

using namespace std;

int scalar_product(int* a1, int* a2){
    int scalar_pr = 0;
    for(int i = 0;i<10;i++){
        scalar_pr = scalar_pr+a1[i]*a2[i];
    }
    return scalar_pr;
}

int main()
{
    
    int* a1 = new int[10];
    int* a2 = new int[10];
    for(int i = 0;i<10;i++){
        a1[i] = 2*i;
        a2[i] = 5*i;
    }
    int scalar_pr = scalar_product(a1,a2);
    
    cout<<scalar_pr;
    
    //Never forget to release the dynamically allocated memory
    delete[] a1;
    delete[] a2;
    return 0;
}