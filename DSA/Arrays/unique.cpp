//Find the unique number in a given array where all the elements are being repeated twice with one value being unique.


// Using Array Manipulation -->>
#include<iostream>
using namespace std;
int main(){
    int array[] = {2,3,1,3,4,5,2,4,1};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i] == array[j]){
                array[i] = array[j] = -1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout << array[i] << endl;
        }
    }
    
    return 0;
}



//      My algo-->>
// #include<iostream>
// using namespace std;
// int unique(int arr[],int size){
//     bool flag;
//     for(int i=0;i<size;i++){
//         flag = false;
//         for(int j=i+1;j<size;j++){
//             if(arr[i] == arr[j]){
//                 flag = true;
//             }
//         }
//         if(flag == false) return i;
//     }
// }


// int main(){
//     int arr[] = {1,2,3,4,1,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int x = unique(arr,size);
//     // bool flag;
//     // for(int i=0;i<size;i++){
//     //     for(int j=i+1;j<size;j++){
//     //         flag = false;
//     //         if(arr[i] == arr[j]){
//     //             flag = true;
//     //             break;
//     //         }
//     //     }
//     //     if(flag == false){
//     //         x = i;
//     //         break;
//     //     }
//     // }
    
//     cout << x << endl;

//     return 0;
// }


// #include<iostream>

// using namespace std;

// class base {

// public:

// void vfunc() {

// cout << "This is base's vfunc().\n";

// } };

// class derived1 : public base {

// public:

// void vfunc() {

// cout << "This is derived1's vfunc().\n";

// }

// };

// class derived2 : public base {

// public:

// void vfunc() {

// cout << "This is derived2's vfunc().\n";

// } };

// int main() {

// base *p, b;

// derived1 d1;

// derived2 d2;

// p = &d2;

// p->vfunc();

// return 0; }


// User
// Qno 1: You are tasked with determining the minimum capacity required for a truck to transport containers from a source to a destination within a given number of days. The containers are represented by an array of weights, where each element of the array corresponds to the weight of a container. The containers are already sorted by weight.
// Write a C++ program that takes the following parameters:
// An array containers representing the weights of containers.
// An integer n indicating the number of containers.
// An integer days representing the maximum number of days allowed for transport.
// Your program should find and output the minimum capacity needed for a truck to transport all containers from the source to the destination within the specified number of days.


// #include <iostream>
// #include <vector>
// using namespace std;
// bool icfs(const vector<int>& con, int n, int day, int capc) {
//     int cd = 1;
//     int cc = 0;

//     for (int i = 0; i < n; ++i) {
//         if (cc + con[i] > capc) {
//             cd++;
//             cc = con[i];
//         } else {
//             cc += con[i];
//         }
//         if (cd > day) {
//             return false;
//         }
//     }
//     return true;
// }
// int findMincapc(const vector<int>& con, int n, int day) {
//     int low = con[0];
//     int high = 0;
//     for (int i = 0; i < n; ++i) {
//         high += con[i];
//     }
//     while (low < high) {
//         int mid = low + (high - low) / 2;

//         if (icfs(con, n, day, mid)) {
//             high = mid;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main() {
//     vector<int> con = {50,55,60,65,70,75,80,85,90};
//     int n = con.size();
//     int day = 5;
//     int mincapc = findMincapc(con, n, day);
//     cout << "Minimum capacity needed for transport: " << mincapc << endl;
//     return 0;
// }
