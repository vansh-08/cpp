// Count sort and radix sort both are complex and advanced sorting algorithms (good problems are made using these algorithms)
// d -> number of digits in max ele
// time complexity -> O(d*n)  [where n is the size of array]
// space complexity -> O(n)

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void countSort(vector<int> &v,int pos){
    // create freq array
    int n = v.size();
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    //cumulative freq
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    //ans array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
void radixSort(vector<int> &v){
    int max_ele = INT_MIN;
    for(auto x:v){
        max_ele=max(x,max_ele);
    }
    for(int pos = 1;max_ele/pos>0;pos*=10){
        countSort(v,pos);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radixSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}