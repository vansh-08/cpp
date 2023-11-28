/*
123456
1    6
1    6
123456
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n/2+1||j==1||j==n){
                cout<<j;
            }
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}