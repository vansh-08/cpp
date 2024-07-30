// Ques: Given two sorted arrays, Write a program to merge them in a sorted Manner.

#include<iostream>
using namespace std;
int merge(int arr[], int brr[], int crr[], int a, int b){
    int i=0,j=0,k=0;
    while(i<a && j<b){
        arr[i]<brr[j] ? crr[k++] = arr[i++] : crr[k++] = brr[j++];
    }
    while(i<a) crr[k++] = arr[i++];
    while(j<b) crr[k++] = brr[j++];
}
int main(){
    int arr[] = {5,8,10};
    int brr[] = {2,7,8};
    int a = sizeof(arr)/sizeof(arr[0]);
    int b = sizeof(brr)/sizeof(brr[0]);
    int crr[a+b];
    merge(arr,brr,crr,a,b);
    for(int i=0;i<a+b;i++){
        cout<<crr[i]<<" ";
    } cout<<endl;
    return 0;
}