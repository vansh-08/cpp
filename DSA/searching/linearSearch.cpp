#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target) return i;
    }
    return -1;
}
int main(){
    int arr[] = {3,4,32,5,6,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    cout<<linearSearch(arr, n, target)<<endl;
}