#include<iostream>
using namespace std;

// int main(){
//     int i = 5;
//     while(true){
//         if(i % 7 == 0){
//             cout<<i<<endl;
//             break;
//         }
//         else i+=5;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    for(int i=5; ;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}