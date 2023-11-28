// Write a program to print all the prime numbers between two numbers
#include<iostream>
using namespace std;
void prime_bw(int x, int y){
    for(int i=x;i<=y;i++){
        bool flag = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }if(flag==true){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a, b;
    cout<<"Enter a, b: ";
    cin>>a>>b;
    prime_bw(a,b);
    
    return 0;
}