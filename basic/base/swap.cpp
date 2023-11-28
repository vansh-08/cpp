/*#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cout << "Value of a: " << a << ", Value of b: "<< b <<", Without Swapping" << endl;
    c = a;
    a = b;
    b = c;
    cout << "Value of a: " << a << ", Value of b: "<< b << ", After Swapping" << endl;
}*/

#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    int c;
    c = b;
    b = a;
    a = c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    
}