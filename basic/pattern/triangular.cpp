/*  n = 4
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int p=i-1;p>0;p--){
            cout<<p;
        }
        cout<<endl;
    }
    return 0;
}