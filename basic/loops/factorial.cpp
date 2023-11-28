// Ques: Print the first n factorial numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact = 1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact = fact * i;
        cout<<"Factorial of "<<i<<" is: "<<fact<<endl;
    }
    return 0;
}