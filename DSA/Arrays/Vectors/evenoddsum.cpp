//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6};
    int sum = 0;
    for(int i=0;i<v.size();i++){
        if(i%2==0) sum += v[i];
        else sum -= v[i];
    }
    cout << sum << endl;

    return 0;
}