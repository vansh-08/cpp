// Check if the given array is sorted or not.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,3,4,6,8,9};
    bool sortedflag = true;
    for(int i=1;i<6;i++){
        if(v[i] <= v[i-1]){
            sortedflag = false;
        }
    }
    cout<<sortedflag<<endl;

    return 0;
}


// My algo's below-->>
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(6);
//     bool flag = true;
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<v.size()-1;i++){
//         if(v[i+1] < v[i]){
//             flag = false; 
//             break;
//         }
//     }
//     if(flag == true) cout<<"Sorted"<<endl;
//     else cout<<"Not Sorted"<<endl;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(6);
//     bool flag = false;
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     for(int i=1;i<v.size();i++){
//         if(v[i] > v[i-1]){
//             flag = true; 
//         }
//         else{
//             flag = false;
//             break;
//         }
//     }
//     if(flag == true) cout<<"Sorted"<<endl;
//     else cout<<"Not Sorted"<<endl;

//     return 0;
// }


