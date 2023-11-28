/*   n = 5
  *
  *
*****
  *
  *
*/
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  for(int i=1;i<=n/2;i++){
    for(int j=1;j<=n/2;j++){
      cout<<" ";
    }
    cout<<"*"<<endl;
  }
  for(int r=1;r<=n;r++){
    cout<<"*";
  }
  cout<<endl;
  for(int i=1;i<=n/2;i++){
    for(int j=1;j<=n/2;j++){
      cout<<" ";
    }
    cout<<"*"<<endl;
  }
  return 0;
}