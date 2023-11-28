// Write a program to print all the odd numbers between two numbers
#include<iostream>
using namespace std;
void odd_bw(int x, int y){
    for(int i=x;i<=y;i++){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;
    odd_bw(a,b);
    
    return 0;
}