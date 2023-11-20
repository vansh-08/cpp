//calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int idx=0;idx<size;idx++){
        sum += arr[idx];
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl<<sum;
    return 0;
}