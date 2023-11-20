// find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,44,54,23,56,16};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int idx=0;idx<size;idx++){
        if(arr[idx]>max) max = arr[idx];
    }
    cout<<max;
    return 0;
}