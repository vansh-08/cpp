// Ques: Find the sum of the following series 
// s = 1 - 2 + 3 - 4 ... n
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        i % 2 == 0 ? sum -= i : sum += i;
    }
    cout<<sum<<endl;
    return 0;
}