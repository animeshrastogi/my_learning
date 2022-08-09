
#include <iostream>
void insertion_sort(int arr[], int size){
    int temp;
    for(int i = 1;i<size;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
using namespace std;

int main()
{
    int arr[2]={5,2};
    insertion_sort(arr,2);
    for(int i = 0;i<2;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}