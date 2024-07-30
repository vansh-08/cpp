/*
Given a mountain array 'a' of length greater than 3, return the index 'i' such that arr[0] < arr[1] < ... < arr[i-1] < arr[i] > arr[i+1] > ... > arr[arr.length-1]. This index is known as the peak index.

Input:
Array = [0,4,1,0]
Output:
1
*/

#include<iostream>
#include<vector>
using namespace std;

int peakInMountainArray(vector<int> &input){
    int lo = 1, hi = input.size() - 1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo) / 2;
        if(input[mid] > input[mid-1]){
            // inc
            ans = max(ans, mid);
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> input;
    input = {0,4,1,0};
    cout<<peakInMountainArray(input)<<endl;
}