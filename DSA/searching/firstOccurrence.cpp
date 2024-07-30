// Find the first occurrence of a given element x, given that the given array is sorted.
// If no occurrence of x is found then return -1

// Code by Sanket Sir
#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> &input, int target) {
    /**
    * Time: O(logn)
    * Space: O(1)
    */
    int lo = 0, hi = input.size()-1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(input[mid] == target){
            ans = mid;
            hi = mid - 1;
        } else if(input[mid] > target){
            hi = mid - 1;
        } else{
            lo = mid + 1;
        }   
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    cout<<firstOccurence(arr, target)<<"\n";
}


// Code by Vansh Sharma
// #include<iostream>
// using namespace std;
// int binarySearchRec(int arr[], int lo, int hi, int target){
//     if(hi<lo) return -1;
//     int mid = lo + (hi-lo)/2;
//     if(arr[mid] == target){
//         int m = mid;
//         while(m >= lo){
//             if(arr[m-1] != arr[m]){
//                 return m;
//             }
//             m--;
//         }
//     }
//     if(arr[mid] < target) binarySearchRec(arr, mid+1, hi, target);
//     else binarySearchRec(arr, lo, mid-1, target);
// }
// int main(){
//     int arr[] = {2,5,5,5,6,6,8,9,9,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 9;
//     cout<<binarySearchRec(arr, 0, n-1, target)<<endl;
//     return 0;
// }
