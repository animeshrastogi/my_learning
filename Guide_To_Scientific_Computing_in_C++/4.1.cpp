//Pointer practise from - 
//https://petcomputacao.ufsc.br/wp-content/uploads/2020/06/2017_Book_GuideToScientificComputingInC.pdf
#include <stdio.h>
#include <iostream>
 
using namespace std;
int main()
{
    int i = 5;
    int* p_j = &i;
    *p_j = *p_j*5;
    int* p_k = new int;
    *p_k = i;
    *p_j = 0;
    
    cout<<i<<"\n"<<*p_j<<"\n"<<*p_k;
    

    return 0;
}
