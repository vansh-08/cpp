#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x; 
    int occurrence = 0;
    cout<<"Enter x: ";
    cin>>x;
    // for(int i=0;i<v.size();i++){
    //     if(v[i] == x){
    //         occurrence++;
    //     }
    // }

    for(int ele:v){
        if(ele == x) occurrence++;
    }
    cout<<occurrence;

    return 0;
}