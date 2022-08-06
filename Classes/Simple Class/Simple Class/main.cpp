//
//  main.cpp
//  Simple Class
//
//  Created by Animesh Rastogi.
//

#include <iostream>
#include<cmath>
using namespace std;

class array_op{
  
    int arr[10];
public:
    
    //Constructor - overriding the default constructor
    array_op(int arr[]){
        for(int i =0;i<10;i++){
            this->arr[i] =arr[i];
        }
    }
    
    //Function to calculate the sum of array
    int sum_array(){
        int sum = 0;
        for(int i =0;i<10;i++){
            sum+=arr[i];
        }
        return sum;
    }
    
    //Function to calculate the average of array
    double average_array(){
        double avr = 0;
        for(int i =0;i<10;i++){
            avr+=arr[i];
        }
        avr = avr/10;
        return avr;
    }
    
    //Function to calculate the L-2 norm of array
    double norm_array(){
        double norm = 0;
        for(int i =0;i<10;i++){
            norm+=arr[i]^2;
        }
        norm = sqrt(norm);
        return norm;
    }
    
    //Friend function to calculate the maximum number of the array - can access private members of the class
    friend int max_array(const array_op& arrobj){
        
        int max = arrobj.arr[0];
        for(int i =1;i<10;i++){
            if(max < arrobj.arr[i])
                max = arrobj.arr[i];
        }
        return max;
    }

};

int main(int argc, const char * argv[]) {

    int arr[10];
    for(int i =0;i<10;i++){
        arr[i] = i;
    }
    array_op arr1(arr);
    cout<<arr1.norm_array()<<"\n";
    
    //Calling the friend function
    //Friend function is NOT a member of class
    cout<<max_array(arr1)<<"\n";
    return 0;
}
