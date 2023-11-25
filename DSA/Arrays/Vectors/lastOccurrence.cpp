//Find the last occurence of an element x in a given array.
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }

//     int x;
//     cout<<"Enter x: ";
//     cin>>x;

//     int occurence = -1;
//     for(int i=0;i<v.size();i++){
//         if(v[i] == x){
//             occurence = i;
//         }
//     }
//     cout<<occurence<<endl;

//     return 0;
// }



// Direct Method (iterate from behind) -->>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i] == x){
            cout<<i;
            exit(0);
        }
    }

    return 0;
}