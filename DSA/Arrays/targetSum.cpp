//Find the total number of pairs in the array whose sum is equal to the given value x.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int tsum, count = 0;
    cout << "Enter TargeSum: ";
    cin >> tsum;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j] == tsum){
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}