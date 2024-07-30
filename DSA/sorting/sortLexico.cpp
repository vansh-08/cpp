/*
Given an array of numbers of the fruits; you are supposed to sort it in lexicographical order using the selection sort

input: ["papaya","lime","watermelon","apple","mango","kiwi"]
output: ["apple","kiwi","lime","mango","papaya","watermelon"]
*/
// Selection Sort -> Repeatedly find min element in unsorted array and place it at beginning...
/* In this question we use some built-in string functions
strcmp(arr1,arr2)-> 0(equal)
>0(arr1>arr2)
<0(arr1<arr2)
strcpy -> copy
*/
// time complexity of below solution -> O(n^2) and space complexity -> O(1)...
#include<iostream>
#include<string.h>
using namespace std;
void selectionSort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        //finding the min element
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index], fruit[j]) > 0){
                min_index = j;
            }
        }
        //place the min element at the beginning
        if(i != min_index){
            swap(fruit[i], fruit[min_index]);
        }
    }
    return;
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(fruit)/sizeof(fruit[0]);
    selectionSort(fruit, n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    } cout<<endl;
    return 0;
}




//Selection Sort Algorithm for integer array =>
// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min_idx]){
//                 min_idx = j;
//             }
//         }
//         if(min_idx != i){
//             swap(v[i],v[min_idx]);
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<int> vec(n);
//     cout<<"Enter array: ";
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     selectionSort(vec);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }