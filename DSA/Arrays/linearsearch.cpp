#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,9,18,11,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 11;
    for(int idx=0;idx<size;idx++){
        if(arr[idx] == x){
            cout<<idx;
            exit(0);
        }
    }
    cout<<-1;
    return 0;
}