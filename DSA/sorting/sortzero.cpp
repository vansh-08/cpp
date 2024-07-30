// Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// O(n^2) solve for O(n)...
// mam wala solution using bubble sort algo...
#include<iostream>
#include<vector>
using namespace std;
// void swapZeroesToEnd(vector<int> &v){
//     int n = v.size();
//     for(int i=n-1;i>=0;i--){
//         int j = 0;
//         bool flag=false;
//         while(j != i){
//             if(v[j]==0 && v[j+1] != 0){
//                 swap(v[j],v[j+1]);
//                 flag = true;
//             }
//             j++;
//         }
//         if(!flag) break;
//     }
//     return;
// }

// {0,5,0,3,4,2};
// Below function using insertion sort with best time complexity for this problem maybe O(n)...
void swapZeroesToEnd(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        if(v[i] == 0){
            for(int j=i;j<n;j++){
                v[j] = v[j+1];
            }
            v[n-1] = 0;
        }
    }
    return;
}
int main(){
    vector<int> vec = {0,5,0,3,4,2};
    int n = vec.size();
    swapZeroesToEnd(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    return 0;
}


// // My Approach(bubble Sort algo)
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZero(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         bool flag = false;
//         if(v[i]==0){
//             for(int j=0;j<n-i-1;j++){
//                 if(v[j]==0){
//                     swap(v[j],v[j+1]);
//                     flag = true;
//                 }
//             }
//             if(!flag) break;
//         }
//     }
//     return;
// }


// using selection sort..
// void sortZero(vector<int> &v){
//     int n = v.size();
    // using selection sort from ending_idx to start..
    // int j = n-1;
    // for(int i=n-1;i>=0;i--){
    //     if(v[i] == 0){
    //         swap(v[i],v[j]);
    //         j--;
    //     }
    // }
    
    // using selection sort from starting_idx to end..
//     int j = n;
//     for(int i=0;i<j;i++){
//         if(v[i] == 0){
//             swap(v[i],v[j-1]);
//             j--;
//         }
//     }
//     return;
// }
// int main(){
//     vector<int> vec = {0,5,0,3,4,2};
//     sortZero(vec);
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }
