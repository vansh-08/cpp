//Find the second largest element in the given array.
#include<iostream>
#include<climits>
using namespace std;

// int findlargest(int arr[],int size){
//     int max = INT_MIN;
//     int idx = -1;
//     for(int i=0;i<size;i++){
//         if(arr[i] > max){
//             max = arr[i];
//             idx = i;
//         }
//     }
//     return idx;
// }

int secondLargestElement(int array[], int size){
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0;i<size;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i] != max){
            second_max = array[i];
        }
    }
    return second_max;
}


int main(){
    // int array[] = {1,3,5,7,6,1};
    int array[] = {2,3,5,7,6,1,7};
    int size = sizeof(array)/sizeof(array[0]);

    cout << secondLargestElement(array, size) << endl;

    // int imax = findlargest(array,size);
    // int lele = array[imax];
    // for(int i=0;i<size;i++){
    //     if(array[i] == lele){
    //         array[i] = -1;
    //     }
    // }
    // int smax = findlargest(array,size);
    // cout << array[smax] << endl;

    return 0;
}