// Given the age of a person check if eligible to vote or not
#include<iostream>
using namespace std;
void age(int n){
    n > 18 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}
int main(){
    int x;
    cout<<"Enter age: ";
    cin>>x;
    age(x);

    return 0;
}