/**
 * A rotated sorted array is a sorted array on which rotation operation has been performed some number of times. Given a rotated sorted array, find the index of the minimum element in the array. Follow 0-based indexing.
 * It is guaranteed that all the elements in the array are unique.
 * Input:
 * Array = [3, 4, 5, 1, 2]
 * Output:
 * 3
*/

#include<iostream>
#include<vector>
using namespace std;
int findMinimumInSortedRotated(vector<int> &input){
    /**
     * Time: O(logn)
     * Space: O(1)
    */
    if(input.size() == 1) return 0;
    int lo = 0, hi = input.size()-1;
    if(input[lo] < input[hi]){  // sorted array
        return lo;
    }
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(input[mid] > input[mid+1]) return mid + 1;
        if(input[mid] < input[mid-1]) return mid;
        if(input[mid] > input[lo]){
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}
int main(){
    // vector<int> input = {3, 4, 5, 1, 2};
    // int min_idx = findMinimumInSortedRotated(input);
    // cout<<min_idx<<endl;

    int n;
    cin>>n;
    std::vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<findMinimumInSortedRotated(input)<<endl;
    return 0;
}




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
//         if(input[mid-1] > input[mid]) return mid;
//         if(input[mid] > input[lo]) lo = mid+1;
//         else hi = mid-1;
//     }
//     return -1;
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
//     cout<<min_id(input)<<endl;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// // 3,4,5,1,2
// int min_id(vector<int> input){
//     if(input.size() == 1) return 0;
//     int lo = 0, hi = input.size()-1;
//     if(input[hi] > input[lo]) return 0;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(input[mid] > input[mid+1]) return mid+1;
//         if(input[mid] < input[mid-1]) return mid;
//         if(input[mid] > input[lo]) lo = mid+1;
//         else hi = mid-1;
//     }
//     return -1;
// }
// int main(){
//     vector<int> input;
//     int n;
//     cout<<"Enter size of sorted rotated array: ";
//     cin>>n;
//     cout<<"Enter sorted rotated array: ";
//     for(int i=0;i<n;i++){
//         int x; 
//         cin>>x;
//         input.push_back(x);
//     }
//     cout<<min_id(input)<<endl;
//     return 0;
// }
