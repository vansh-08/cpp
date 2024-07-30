/**
 * Given an array of integers 'a' that is sorted in non-decreasing order. Find the first and last position of the given 'target' element in the sorted array. Follow 0-based indexing.
 * If 'target' is not found in the array, return [-1,-1].
 * Input: 
 * Array = [1, 2, 3, 3, 3, 5, 11] , target = 3
 * Output:
 * [2,4]
*/
//lowerbound is the smallest possible value
// and upperbound is the largest possible value...

    // Solution by Sanket Sir...
#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> &input, int target) { // first index >= target
    /**
    * Time: O(logn)
    * Space: O(1)   
    */
    int lo = 0, hi = input.size()-1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(input[mid] >= target){
            ans = mid;
            hi = mid - 1;
        } else{
            lo = mid + 1;
        }   
    }
    return ans;
}
int upperbound(vector<int> &input, int target) { // first index >= target
    /**
    * Time: O(logn)
    * Space: O(1)
    */
    int lo = 0, hi = input.size()-1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(input[mid] > target){
            ans = mid;
            hi = mid - 1; // discard right
        } else {
            lo = mid + 1;
        }   
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cin>>target;
    vector<int> result;
    int lb = lowerbound(input, target);
    if(input[lb] != target) {
        result.push_back(-1);
        result.push_back(-1);
    } else {
        int ub = upperbound(input, target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}



    // adding the idea by Sanket Sir...
    // Time Complexity -> O(logn)
    // Space Complexity -> O(1)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,3,3,5,11};
//     int target = 3;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int lo = 0, hi = n-1, fi, la;
//     int idx = fi = la = -1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] >= target){
//             hi = mid-1;
//             if(arr[mid] == target) fi = mid;
//         }
//         else lo = mid+1;
//     }
//     lo = 0, hi = n-1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] <= target){
//             lo = mid+1;
//             if(arr[mid] == target) la = mid;
//         }
//         else hi = mid-1;
//     }
//     cout<<fi<<" "<<la<<endl;
//     return 0;
// } 


    // my solution bruteforce + binary added
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,3,3,5,11};
//     int target = 3;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int lo = 0, hi = n-1;
//     int idx = -1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid] == target){
//             idx = mid;
//             break;
//         }
//         else if(arr[mid] < target) lo = mid+1;
//         else hi = mid-1;
//     }
//     int la;
//     int fi = la = idx;
//     for(int i=idx;i>0;i--){
//         if(arr[i] != arr[idx]){
//             fi = i+1;
//             break;
//         }
//     }
//         for(int i=idx;i<n-1;i++){
//         if(arr[i] != arr[idx]){
//             la = i-1;
//             break;
//         }
//     }
//     cout<<fi<<" "<<la<<endl;

//     return 0;
// } 



// #include<iostream>
// #include<vector>
// using namespace std;
// int lowerbound(vector<int> &input, int target){
//     int lo = 0, hi = input.size()-1;
//     int ans = -1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(input[mid] >= target){
//             ans = mid;
//             hi = mid-1;
//         } else lo = mid+1;
//     }
//     return ans;
// }
// int upperbound(vector<int> &input, int target){
//     int lo = 0, hi = input.size()-1;
//     int ans = -1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(input[mid] > target){
//             ans = mid;
//             hi = mid-1;
//         } else {
//             lo = mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> input;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         input.push_back(x);
//     }
//     int target;
//     cin>>target;
//     vector<int> result;
//     int lb = lowerbound(input, target);
//     if(input[lb] != target){
//         result.push_back(-1);
//         result.push_back(-1);
//     } else{
//         int ub = upperbound(input, target);
//         result.push_back(lb);
//         result.push_back(ub-1);
//     }
//     cout<<result[0]<<" "<<result[1]<<endl;
//     return 0;
// }