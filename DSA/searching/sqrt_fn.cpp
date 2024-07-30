// Code to find the biggest value whose square is smaller than given value x...

// // //solution by Sanket Sir ->
#include<iostream>
using namespace std;
int sqrt(int x){
    /**
     * Time: O(logx)
     * space: O(1)
    */
    int lo = 1, hi = x;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(mid * mid <= x){
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}
int main(){
    cout<<sqrt(40)<<endl;
    return 0;
}



// My solutions...
// #include<iostream>
// #include<vector>
// using namespace std;
// int dierRec(int arr[], int lo, int hi, int target){
//     if(hi < lo) return -1;
//     int mid = lo + (hi-lo)/2;
//     int mid_sq = arr[mid]*arr[mid];
//     if(mid_sq <= target && arr[mid+1]*arr[mid+1] > target) return mid+1;
//     if(mid_sq > target) return dierRec(arr, lo, mid-1, target);
//     else return dierRec(arr, mid+1, hi, target);
// }
// int dier(int arr[], int lo, int hi, int target){
//     int ans = -1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]*arr[mid] <= target){
//             ans = mid;
//             lo = mid+1;
//         }
//         else if(arr[mid]*arr[mid] > target) hi = mid-1;
//         else lo = mid+1;
//     }
//     return ans+1;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i] = i+1;
//     }
//     cout<<dierRec(arr, 0, n-1, n)<<endl;
//     cout<<dier(arr, 0, n-1, n)<<endl;
//     return 0;
// }
