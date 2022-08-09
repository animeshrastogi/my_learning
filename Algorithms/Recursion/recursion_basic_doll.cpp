//Basic program for recursion
//Open the dolls

#include <iostream>
using namespace std;
int return_dolls(int doll){
    if(doll == 1) {
        cout<<"All dolls are opened";
        return 1;
    }
    else {
        cout<<doll<<" ";
        return_dolls(doll-1);
    }
    
}
int main()
{
    int doll = 100;
    return_dolls(doll);
    return 0;
}
