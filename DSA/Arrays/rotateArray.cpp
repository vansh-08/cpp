// Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array 'a'.

#include<iostream>
using namespace std;

void reverse(int arr[], int si, int ei){
    int temp;
    for(int i=si,j=ei; i<=j ;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main(){
    int size;
    int rotation;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array (space separated): ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter number of rotations: ";
    cin >> rotation;
    rotation = rotation % size;

    reverse(arr, 0, size-1);
    reverse(arr, 0, rotation-1);
    reverse(arr, rotation, size-1);
    cout << "Rotated Array -->>" << endl;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}





// #include<iostream>
// using namespace std;

// void reverse(int arr[],int si,int ei){
//     int temp;
//     for(int i=si,j=ei;i<=j;i++,j--){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     return;
// }
// int main(){
//     //int arr[] = {1,2,3,4,5,6,7};
//     int size;
//     cout<<"Enter size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 2;
//     // steps
//     k = k % n;
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
    
//     for(int i=0;i<=n-1;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }