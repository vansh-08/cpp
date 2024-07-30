/*
Recursive stack => max log^n calls
Merge, temp arrays => N
Space Complexity => O(n)
Time Complexity => O(nlog(n))
is Merge Sort Stable? => Yes...

Applications of Merge Sort =>
    -> Large data sets
    -> Linked list
Drawbacks of Merge Sort =>
    -> slower for smaller tasks as compared to other sorting algorithms
    -> takes O(n) extra space
    -> goes through whole process even if array is sorted...
*/

// #include <iostream>
// using namespace std;
// void merge(int arr[], int l, int mid, int r){
//     int an = mid - l + 1;
//     int bn = r - mid;
//     //create 2 temp arrays
//     int a[an];
//     int b[bn];
//     for(int i=0;i<an;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<bn;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<an && j<bn){
//         if(a[i]<b[j]){
//             arr[k++]=a[i++];
//         }
//         else{
//             arr[k++]=b[j++];
//         }
//     }
//     while(i<an){

//         arr[k++]=a[i++];
//     }
//     while(j<bn){
//         arr[k++]=b[j++];
//     }
// }
// void mergeSort(int arr[], int l, int r){
//     //base case
//     if(l>=r){
//         return;
//     }
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);
//     merge(arr, l, mid, r);
// }
// int main(){
//     int arr[] = {10, 28, 24, 6, 34, 18, 38, 44};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void merge(int arr[], int l, int mid, int r){
//     int an = mid-l+1;
//     int bn = r-mid;
//     int a[an];
//     int b[bn];
//     for(int i=0;i<an;i++){
//         a[i] = arr[l+i];
//     }
//     for(int j=0;j<bn;j++){
//         b[j] = arr[mid+j+1];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;
//     while(i<an && j<bn){
//         if(a[i]<b[j]){
//             arr[k++] = a[i++];
//         }
//         else{
//             arr[k++] = b[j++];
//         }
//     }
//     while(i<an){
//         arr[k++] = a[i++];
//     }
//     while(j<bn){
//         arr[k++] = b[j++];
//     }
// }
// void mergeSort(int arr[], int l, int r){
//     if(l>=r){
//         return;
//     }
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);
//     merge(arr,l,mid,r);
// }
// int main(){
//     int arr[] = {10,30,11,59,73,29,49,47,27,73};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
//     return 0;
// }



// 1,2,3,4,5
// #include<iostream>
// using namespace std;
// void merge(int arr[], int l, int mid, int r){
//     int an = mid-l+1;
//     int bn = r-mid;
//     int a[an];
//     int b[bn];
//     for(int i=0;i<an;i++){
//         a[i] = arr[l+i];
//     }
//     for(int j=0;j<bn;j++){
//         b[j] = arr[mid+j+1];
//     }
//     int i=0,j=0,k=l;
//     while(i<an && j<bn){
//         if(a[i]<b[j]){
//             arr[k++] = a[i++];
//         }
//         else{
//             arr[k++] = b[j++];
//         }
//     }
//     while(i<an){
//         arr[k++] = a[i++];
//     }
//     while(i<bn){
//         arr[k++] = b[j++];
//     }
// }
// void mergeSort(int arr[], int l, int r){
//     if(l>=r) return;
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);
//     merge(arr,l,mid,r);
// }
// int main(){
//     int arr[] = {32,40,72,49,92,94,44,35,30,93,75};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void merge(int arr[], int l, int mid, int r){
//     int an = mid-l+1;
//     int bn = r-mid;
//     int a[an];
//     int b[bn];
//     for(int i=0;i<an;i++){
//         a[i] = arr[l+i];
//     }
//     for(int j=0;j<bn;j++){
//         b[j] = arr[mid+j+1];
//     }
//     int i=0, j=0, k=l;
//     while(i<an && j<bn){
//         (a[i]<b[j]) ? arr[k++] = a[i++] : arr[k++] = b[j++];
//     }
//     while(i<an) arr[k++] = a[i++];
//     while(j<bn) arr[k++] = b[j++];
// }
// void mergeSort(int arr[], int l, int r){
//     if(l >= r) return;
//     int mid = (l+r)/2;
//     mergeSort(arr,l,mid);
//     mergeSort(arr,mid+1,r);
//     merge(arr, l, mid, r);
// }
// int main(){
//     int arr[] = {23, 94, 65, 56, 82, 38};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     mergeSort(arr, 0, n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r){
    int an = mid-l+1;
    int bn = r-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i] = arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j] = arr[mid+j+1];
    }
    int i=0, j=0, k=l;
    while(i<an && j<bn){
        if(a[i]<b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }
    while(i<an) arr[k++] = a[i++];
    while(j<bn) arr[k++] = b[j++];
}
void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
}
int main(){
    int arr[] = {34, 54, 23, 95, 38, 92, 18, 93};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    return 0;
}