// Ques: Reverse the digits of a number-->>
#include<iostream>
using namespace std;
int main(){
    int n;
    int rev = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        rev = (rev * 10) + (i % 10);
    }
    cout<<"Reverse of "<<n<<" is: "<<rev<<endl;
    return 0;
}