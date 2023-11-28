// Print "odd" if the input value is odd, otherwise print "even". Note: Input value is between 1 and 10^6.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is Even"<<endl;
    }
    else{
        cout<<a<<" is Odd"<<endl;
    }

    return 0;
}