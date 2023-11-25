//Count the number of elements strictly greater than value x.
// Strictly Greater means all elements that are greater than but not equal to x (>x) 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    int x,count = 0;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter x: ";
    cin>>x;
    for(int ele:v){
        if(ele>x){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}


// Code To count occurence of next greater element than x
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(6);
//     int x,st,count = 0;
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     cout<<"Enter x: ";
//     cin>>x;
//     for(int ele:v){
//         if(ele>x){
//             st = ele;
//             break;
//         }
//     }
//     for(int ele:v){
//         if(ele == st) count++;
//     }
//     cout<<count;
    
//     return 0;
// }