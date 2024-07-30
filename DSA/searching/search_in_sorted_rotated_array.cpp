/**
 * Given the rotated sorted array of integers, which contains distince elements, and an integer target, return the index of target if it is in the array. Otherwise return -1.
 * Input:
 * Array = [3, 4, 5, 1, 2], target = 4
 * Output:
 * 1
*/

#include<iostream>
#include<vector>
using namespace std;
int binarySearchSortedRotated(vector<int> &input, int target){
    // Time: O(logn)
    // Space: O(1)
    int lo = 0, hi = input.size()-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(input[mid] == target) return mid;
        if(input[mid] >= input[lo]){
            if(target >= input[lo] and target <= input[mid]){
                hi = mid-1;
            } else{
                lo = mid+1;
            }
        } else{
            if(target >= input[mid] and target <= input[hi]){
                lo = mid+1;
            } else{
                hi = mid-1;
            }
        }
    }
    return -1;
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
    cout<<binarySearchSortedRotated(input, target)<<endl;
    return 0;
}





// Solution with time complexity O(logn) and space complexity O(1)
// but we are checking every element two times in below solution therefore above solution by is more optimised...
// #include<iostream>
// #include<vector>
// using namespace std;
// int min_id(vector<int> input){
//     if(input.size() == 1) return 0;
//     int lo = 0, hi = input.size()-1;
//     if(input[lo] < input[hi]) return lo;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(input[mid+1] < input[mid]) return mid+1;
//         if(input[mid] < input[mid-1]) return mid;
//         if(input[mid] > input[lo]) lo = mid+1;
//         else hi = mid-1;
//     }
//     return -1;
// }
// int BinaryRecSearch(vector<int> input, int target, int lo, int hi){
//     if(lo > hi) return -1;
//     int mid = lo + (hi-lo)/2;
//     if(input[mid] == target) return mid;
//     else if(input[mid] < target) return BinaryRecSearch(input, target, mid+1, hi);
//     else BinaryRecSearch(input, target, lo, mid-1);
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
//     int min = min_id(input);
//     if(input[min] == target) cout<<min<<endl;
//     int a = BinaryRecSearch(input, target, 0, min);
//     int b = BinaryRecSearch(input, target, min+1, input.size()-1);
//     if(input[a] == target) cout<<a<<endl;
//     else cout<<b<<endl;
//     return 0;
// }