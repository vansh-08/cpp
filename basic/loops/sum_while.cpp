// Print sum of n natural numbers using while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;  // loop variable
    int sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    while (i<=n)  // condition
    {
        sum += i;
        i++;  // updating loop variable
    }
    cout<<sum<<endl;

    return 0;
}