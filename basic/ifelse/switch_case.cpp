// switch case format-->>
/*
switch (expression){
    case x:
        // code
        break;
    case y:
        // code
        break;
    default:
        // code
} */

#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day number: "<<endl;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"Enter valid number"<<endl;
    }
    return 0;
}