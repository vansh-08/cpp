#include<iostream>
using namespace std;

int main(){
    // int array[] = {1,2,3,4};
    // //cout<<sizeof(array)<<endl;
    // //cout<<sizeof(array)/sizeof(array[0]);
    // int size = sizeof(array)/sizeof(array[0]);

    // //for loop
    // for(int idx=0;idx<size;idx++){
    //     cout<<array[idx]<<endl;
    // }

    // //for each loop..-->>
    // for(int ele:array){
    //     cout<<ele<<endl;
    // }

    // //while loop
    // int index = 0;
    // while(index<size){
    //     cout<<array[index]<<endl;
    //     index++;
    // }

    char vowels[5];
    //taking input using for loop-->>
    // for(int idx=0;idx<5;idx++){
    //     cin>>vowels[idx];
    // }
    //     for(int idx=0;idx<5;idx++){
    //         cout<<vowels[idx]<<" ";
    // }
    
    //taking input using for each loop-->>
    for(char &element:vowels){
        cin>>element;
    }
    for(char ele:vowels){
        cout<<ele<<" ";
    }
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }
    return 0;
}