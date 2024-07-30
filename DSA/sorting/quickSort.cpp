// Quick Sort and Merge Sort both are very important sorting algorithms...
/*
Quick Sort =>
Time Complexity -> Q(nlog n){Best Case}
                -> O(n^2){Worst Case}
Space Complexity -> O(n)

Need for new ways of partitioning and Randomised Quicksort algorithm
Median pivot -> n log n
Randomised pivot -> n log n
pivot_index = first + rand() % (last-first+1)

is Quick Sort Stable? => Not Stable

Applications of Quick Sort =>
    -> memory is a concern(used where we have less memory as in quick sort we do inplace sorting without using extra space)
    -> inbuilt sorting algorithms
    -> inbuilt sorting function in java is also based on Quick Sort Algorithm...

        Merge Sort     v/s  Quick Sort =>
    -> large datasets       smaller datasets
    -> stable               unstable
    -> linked list          new memory is costly
    (because we cannot access random element in a linked list)
*/



// #include<iostream>
// using namespace std;
// int partition(int arr[], int first, int last){
//     int pivot = arr[last];
//     int i = first-1; //for inserting elements < pivot
//     int j = first; //for finding elements < pivot
//     for(;j<last;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     //now i is pointing to the last element < pivot
//     // correct position for pivot will be -- i+1
//     swap(arr[i+1], arr[last]);
//     return i+1;
// }
// void quickSort(int arr[], int first, int last){
//     // base case
//     if(first>=last){
//         return;
//     }
//     //recursive case
//     int pi = partition(arr,first,last);
//     quickSort(arr,first,pi-1);
//     quickSort(arr,pi+1,last);
// }
// int main(){
//     int arr[] = {20,12,35,16,18,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr, 0, n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int partition(int arr[], int first, int last){
//     int pivot = arr[last];
//     int i = first-1;
//     int j = first;
//     for(;j<last;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[last]);
//     return i+1;
// }
// void quickSort(int arr[], int first, int last){
//     if(first>=last) return;
//     int pi = partition(arr,first,last);
//     quickSort(arr,first,pi-1);
//     quickSort(arr,pi+1,last);
// }
// int main(){
//     int arr[] = {20,12,35,16,18,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int partition(int arr[], int first, int last){
//     int pivot = arr[last];
//     int i = first - 1;
//     int j = first;
//     for(;j<last;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[last]);
//     return i+1;
// }
// void quickSort(int arr[], int first, int last){
//     if(first>=last) return;
//     int pi = partition(arr,first,last);
//     quickSort(arr,first,pi-1);
//     quickSort(arr,pi+1,last);
// }
// int main(){
//     int arr[] = {23,32,12,43,64,63,654,24};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int partition(int arr[], int first, int last){
//     int pivot = arr[last];
//     int i = first-1;
//     for(int j=first;j<last;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[last]);
//     return i+1;
// }
// void quickSort(int arr[], int first, int last){
//     if(first >= last) return;
//     int pi = partition(arr, first, last);
//     quickSort(arr, first, pi-1);
//     quickSort(arr, pi+1, last);
// }
// int main(){
//     int arr[] = {23, 85, 92, 58, 49, 29};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr, 0, n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
//     return 0;
// }




#include<iostream>
using namespace std;
int partition(int arr[], int first, int last){
    int pivot = arr[last];
    int i = first-1;
    for(int j=first;j<last;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[last]);
    return i+1;
}
void quickSort(int arr[], int first, int last){
    if(first > last) return;
    int pi = partition(arr, first, last);
    quickSort(arr, first, pi-1);
    quickSort(arr, pi+1, last);
}
int main(){
    int arr[] = {45, 23, 12, 43, 94, 92};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}