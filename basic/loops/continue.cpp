// Ques: Print all the values between 1 and 50 except for the multiples of 3.
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<51;i++){
        if(i%3==0) continue;
        cout<<i<<" ";
    }
    return 0;
}