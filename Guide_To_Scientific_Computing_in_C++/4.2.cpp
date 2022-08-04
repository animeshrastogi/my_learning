
#include <iostream>

using namespace std;

int main()
{
    int i = 10;
    int j = 100;
    int* p_i = &i;
    int* p_j = &j;
    *p_i = *p_i+*p_j;
    *p_j = *p_i - *p_j;
    *p_i =  *p_i - *p_j;
    
    cout<<i<<"\n"<<j;

    return 0;
}