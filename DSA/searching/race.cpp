/*
A new racing track for kids is being built in New York with 'n' starting spots. The spots are located along a straight line at positions x1, x2... xn(xi <= 10^9). For each 'i', xi+1 > xi. At a time only 'm' children are allowed to enter the race. Since the race track is for kids, they may run into each other while running. To prevent this, we want to choose the starting spots such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

The first line of input will contain the value of n, the number of starting spots.
The second line of input will contain the n numbers denoting the location of each spot.
The third line will contain the value of m, number of children.

Input
5
1 2 4 8 9
3
Output
3
*/

// Time Complexity -> O(n log(xn - xi))...
#include<iostream>
#include<vector>
using namespace std;
bool canPlaceStudents(vector<int> &pos, int s, int mid){
    int studentsReqd = 1;
    int lastPlaced = pos[0];
    for(int i=1;i<pos.size();i++){
        if(pos[i]-lastPlaced >= mid){
            studentsReqd++;
            lastPlaced = pos[i];
            if(studentsReqd == s){
                return true;
            }
        }
    }
    return false;
}
int race(vector<int> &pos, int s){
    /**
     * Space: O(1)
     * Time: O(nlogn(xn-x1))
    */
    int n = pos.size();
    int lo = 1;
    int ans = -1;
    int hi = pos[n-1] - pos[0];
    while(lo <= hi){
        int mid = lo + (hi-lo) /2;
        if(canPlaceStudents(pos, s, mid)){
            ans = mid;
            lo = mid + 1;
        } else{
            hi = mid - 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> pos;
    while(n--){
        int x;
        cin>>x;
        pos.push_back(x);
    }
    int s;
    cin>>s;
    cout<<race(pos, s)<<endl;
    return 0;
}
