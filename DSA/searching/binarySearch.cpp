// time complexity -> O(log(n))
// space complexity -> O(n)

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &input, int target){
    // Time: O(log n)
    // Space: O(1)
    // define search space
    int lo = 0; // start of the search space
    int hi = input.size() - 1; // end of the search space
    while(lo <= hi){
        // calc midpoint for the search space
        int mid = lo + (hi-lo)/2; // modified mid to tackle overflow
        if(input[mid] == target) return mid;
        else if(input[mid] < target){
            // discard the left of mid
            lo = mid + 1;
        }
        else{
            // discard the right of mid
            hi = mid - 1;
        }
    }
    return -1;
}
int BinaryRecSearch(vector<int> &input, int target, int lo, int hi){
    // Time: O(log n)
    // Space: O(log n)
    if(lo > hi) return -1;
    int mid = lo+(hi-lo)/2;
    if(input[mid] == target) return mid;
    if(input[mid] < target) return BinaryRecSearch(input, target,mid+1,hi);
    return BinaryRecSearch(input, target, lo, mid-1);
}

int main(){
    vector<int> input {2,4,5,7,15,24,45,50};
    int target = 15;
    cout<<BinaryRecSearch(input, target, 0, 7)<<endl;
    // int dires(vector<int> vec, int target);
    // cout<<dires(input, target)<<endl;
    return 0;
}


int dires(vector<int> vec, int target){
    int lo = 0;
    int hi = vec.size()-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(vec[mid] == target) return mid;
        else if(vec[mid] > target){
            hi = mid-1;
        }
        else lo = mid+1;
    }
    return -1;
}







// // binarySearch...
// #include<iostream>
// #include<vector>
// using namespace std;
// int bisearch(vector<int> &he, int target){
//     int lo = 0;
//     int hi = he.size()-1;
//     while(lo <= hi){
//         int mid = lo + (hi-lo)/2;
//         if(he[mid] == target) return mid;
//         else if(he[mid] < target) lo = mid+1;
//         else hi = mid-1;
//     }
//     return -1;
// }
// int main(){
//     vector<int> hehe = {3,4,5,6,7,8,9,10};
//     int target = 8;
//     cout<<bisearch(hehe,target)<<endl;
//     return 0;
// }