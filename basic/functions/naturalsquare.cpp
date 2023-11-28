#include<iostream>
using namespace std;
void natural_sq(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
}
int main(){
    int a = 5;
    natural_sq(a);
    return 0;
}