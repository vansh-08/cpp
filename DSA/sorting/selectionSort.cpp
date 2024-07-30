// "Repeatedly(until array is sorted) find min element in unsorted array & place it at beginning"

/*
time complexity -> O(n^2) always in both worst and best case...
space complexity -> O(1)...
Maximum Swaps -> O(n)...

Selection sort is an unstable sorting algorithm...
*/


#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(v[i],v[min_idx]);
        }
    }
    return;
}
int main(){
    vector<int> v ={50,40,30,20,10};
    selectionSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=n-1;i>0;i--){
//         int max_idx = i;
//         for(int j=i-1;j>=0;j--){
//             if(v[j]>v[max_idx]){
//                 max_idx = j;
//             }
//         }
//         if(max_idx!=n-i){
//             swap(v[i],v[max_idx]);
//         }
//     }
//     return;
// }
// int main(){
//     vector<int> vec = {50,30,20,10,40};
//     selectionSort(vec);
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }



// selectionSort
// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min_idx]){
//                 min_idx = j;
//             }
//         }
//         if(min_idx!=i){
//             swap(v[i],v[min_idx]);
//         }
//     }
//     return;
// }
// int main(){
//     vector<int> vec = {30, 50, 10, 20};
//     selectionSort(vec);
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }