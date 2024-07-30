/**
 * Search element in rotated sorted array with duplicate elements. Return 1 if the element is found, else return 0.
 * Input:
 * [0,0,0,1,1,1,2,0,0,0], target = 2
 * Output:
 * 1
*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int search(vector<int> input, int target){
//     // Time: O(logn) can be O(n) in worst worst case if first and last element are same for a great length...
//     // Space: O(1)
//     int lo = 0, hi = input.size()-1;
//     if(input[lo] == target) return 1;
//     else if(input[hi] == target) return 1;
//     else if(input[lo] == input[hi]){
//         lo++;
//         hi--;
//     }
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(input[mid] == target) return 1;
//         if(input[mid] >= input[lo]){
//             if(target >= input[lo] and target <= input[mid]){
//                 hi = mid-1;
//             } else{
//                 lo = mid+1;
//             }
//         } else{
//             if(target >= input[mid] and target <= input[hi]){
//                 lo = mid+1;
//             } else{
//                 hi = mid-1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     vector<int> input = {0,0,0,1,1,1,2,0,0,0};
//     int target = 2;
//     cout<<search(input, target)<<endl;
//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;
// 0,0,0,1,1,1,2,0,0,0
int sear(vector<int> input, int target){
    int lo = 0, hi = input.size()-1, count = 0;
    if(input[lo] == target) return lo;
    if(input[hi] == target) return hi;
    if(input[lo] == input[hi]){
        lo++;
        hi--;
        count++;
    }   //  3,4,5,1,2
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(input[mid] == target) return mid+count;
        if(input[mid+1] < input[mid]) return mid+1+count;
        if(input[mid-1] > input[mid]) return mid+count;
        if(input[mid] > input[lo]) hi = mid+1;
        else lo = mid-1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of duplicate sorted rotated array: ";
    cin>>n;
    vector<int> input;
    cout<<"Enter duplicate sorted rotated array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cout<<"Enter element to be searched: ";
    cin>>target;
    int idx = sear(input, target);
    cout<<"index of given element in given duplicate sorted rotated array is: "<<idx<<endl;
    return 0;
}