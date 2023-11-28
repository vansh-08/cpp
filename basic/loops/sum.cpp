// Ques: Find the sum of digits in a given number n
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        sum += i%10;
    }
    cout<<sum<<endl;
    return 0;
}