#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

// Using ifelse -->>
    // if(marks>33){
    //     cout<<"Pass"<<endl;
    // }
    // else{
    //     cout<<"Fail"<<endl;
    // }


// Using Ternary Operator -->>
    marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;

    return 0;
}