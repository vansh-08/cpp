/*
time complexity of bubble sort -> O(n^2)
space complexity of bubble sort -> O(1)
bubble sort is a stable sorting algorithm
stable sorting algorithm is one which does not chage order of same elements(as in bubbleSort we do not swap same elements)
and unstable sorting algorithm is one where order or position of same elements also changes     */

// Repeatedly swap two adjacent elements if in wrong order..
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubbleSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}


    // {30, 10, 40, 20, 50}
/* here n = 5
i will iterate from 0 to 4
j will iterate from 
    when i = 0 -> 0, 1, 2, 3, 4
    when i = 1 -> 0, 1, 2, 3
    when i = 2 -> 0, 1, 2
    when i = 3 -> 0, 1
    when i = 4 -> 0
*/


// #include<iostream>
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int> &v){
//     int s = v.size();
//     for(int i=0;i<s;i++){
//         bool flag = false;
//         for(int j=0;j<s-i-1;j++){
//             if(v[j]>v[j+1]){
//                  flag = true;
//                  swap(v[j],v[j+1]);
//              }
//         }
//          if(!flag) break;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter n: "; cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter arr: ";
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//     }
//     bubbleSort(arr);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n;i++){
//         bool flag = false;
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//                 flag = true;
//             }
//         }
//         if(!flag) break;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter size: "; cin>>n;
//     vector<int> v(n);
//     cout<<"Enter array: ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bubbleSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }





//bubbleSort
// #include<iostream>
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int> &vec){
//     int n = vec.size();
//     for(int i=0;i<n-1;i++){
//         bool flag = false;
//         for(int j=0;j<n-i-1;j++){     // 40 30 10 20
//             if(vec[j]>vec[j+1]){
//                 swap(vec[j],vec[j+1]);
//                 flag = true;
//             }
//         }
//         if(!flag) break;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter n: "; cin>>n;
//     vector<int> v(n);
//     cout<<"Enter vector: ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bubbleSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }