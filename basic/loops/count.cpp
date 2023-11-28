// Count the number of digits for a given input-->>
#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        count++;
    }
    cout<<count;
    return 0;
}