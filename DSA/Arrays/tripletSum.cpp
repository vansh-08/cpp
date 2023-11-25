//Count the number of triplets whose sum is equal to the given value x.qw3

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int x = 8, count = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}