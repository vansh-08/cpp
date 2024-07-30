/*
Insertion Sort(time complexity) -> O(n^2) in worst case
                -> Omega(n) in best case
space complexity -> O(1)

Insertion Sort is a Stable Sorting Algorithm...

Application of Insertion Sorting Algorithm 
    it is used where array is almost sorted or have few unsorted elements...
*/

// Repeatedly take elements from unsorted sub array and insert in sorted subarray...
#include<iostream>
#include<vector>
using namespace std;
// {0,5,0,3,4,2};j
void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=1;i<n;i++){
        int current_ele = v[i];
        //find the correct position for our current element
        int j=i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        //insert current element
        v[j+1]=current_ele;
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
    insertionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;
    return 0;
}




// #include<iostream>
// #include<vector>
// using namespace std;
// void insertionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=1;i<n;i++){
//         int current_ele = v[i];
//         int j = i-1;
//         while(j>=0 && v[j]>current_ele){
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1] = current_ele;
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     insertionSort(vec);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     } cout<<endl;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void insertionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=1;i<n;i++){
//         int current_ele = v[i];
//         int j = i-1;
//         while(j>=0 && v[j]>current_ele){
//             v[j+1] = v[j];
//             j--;
//         }
//         v[j+1] = current_ele;
//     }
//     return;
// }
// int main(){
//     vector<int> vec = {22,41,53,15,52};
//     insertionSort(vec);
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// void insertionSort(vector<int> &v){
//     int n=v.size();
//     for(int i=1;i<n;i++){
//         int current_ele = v[i];
//         int j=i-1;
//         while(j>=0 && v[j]>current_ele){
//             v[j+1] = v[j];
//             j--;
//         }
//         v[j+1] = current_ele;
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
//     insertionSort(vec);
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }