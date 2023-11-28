/*  n = 5
----A
---ABC
--ABCDE
-ABCDEFG
ABCDEFGHI
-ABCDEFG
--ABCDE
---ABC
----A 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"-";
        }
        for(int k=1;k<=2*i-1;k++){
            char ch = (char)k+64;
            cout<<ch;
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"-";
        }
        for(int k=1;k<=2*n-2*i-1;k++){
            char ch = (char)k+64;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}