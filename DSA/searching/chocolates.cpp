/*
Problems on Binary Search

You have 'n'(n <= 10^5) boxes of chocolate. Each box contains a[i] (a[i] <= 10000) chocolates. You need to distribute these boxes among 'm' students such that the maximum number of chocolates allocated to a student is minimum.
a. One box will be allocated to exactly one student.
b. All the boxes should be allocated.
c. Each student has to be allocated at least one box.
d. Allotment should be in contiguous order, for instance, a student cannot be allocated box 1 and box 3 skipping box 2.
Calculate and return that minimum possible number.
Assume that it is always possible to distribute the chocolates.

The first line of input will contain the value of n, the number of boxes.
The second line of input will contain the n number denoting the number of chocolates in each box.
The third line will contain the m, number of students.

Input
4
12 34 67 90
2
Output
113
*/

// Time Complexity -> O(n*log(Submission(ai))...
#include<iostream>
#include<vector>
using namespace std;
bool canDistChoco(vector<int> &arr, int mid, int s){
    int n = arr.size();
    int studentsReqd = 1;
    int currSum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > mid){
            return false;
        }
        if(currSum + arr[i] > mid){
            studentsReqd++;
            currSum = arr[i];
            if(studentsReqd > s) return false;
        } else{
            currSum += arr[i];
        }
    }
    return true;
}
int distChoco(vector<int> &arr, int s){
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;
    for(int i=0;i<arr.size();i++){
        hi += arr[i];
    }
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(canDistChoco(arr, mid, s)){
            ans = mid;
            hi = mid-1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int s;
    cin>>s;
    cout<<distChoco(v, s)<<endl;
    return 0;
}
