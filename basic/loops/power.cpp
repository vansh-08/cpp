// Ques: Given 2 numbers a and b. Find a raise to the power b.
#include<iostream>
using namespace std;
int p(int a, int b){
    int res=1;
    for(int i=1;i<=b;i++){
        res*=a;
    }
    return res;
}
int main(){
    int a, b;
    int ans = 1;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    // for(int i=1;i<=b;i++){
    //     ans *= a;
    // }
    // cout<<a<<" Raised to Power "<<b<<" is: "<<ans<<endl;
    cout<<a<<" Raised to Power "<<b<<" is: "<<p(a,b)<<endl;
    return 0;
}