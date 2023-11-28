// Find the Maximum of Three Numbers using if else statements.
#include<iostream>
using namespace std;
int main() {
    int a, b, c,max;
    cout << "Enter a,b,c: ";
    cin >> a>>b>>c;
    if(a>b){
        if(a>c){
            max = a;
        }
        else if(c>a){
            max = c;
        }
    }
    else{
        max = b;
    }
    cout<<"max: "<<max<<endl;
    return 0;
}