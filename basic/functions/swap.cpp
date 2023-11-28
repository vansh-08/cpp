#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a = 5;
    int b = 10;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}