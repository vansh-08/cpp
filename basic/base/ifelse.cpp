// #include<iostream>
// using namespace std;
// int main(){
//     int score;
//     cin>>score;

//     //score >80, print Well Done
//     // score =50-80, print Can improve
//     // score <50, print Poor performance

//     if(score>80){
//         cout<<"Well done!"<<endl;
//     }
//     else if(score>50){
//         cout<<"Can improve"<<endl;
//     }
//     else{
//         cout<<"Poor performance"<<endl;
//     }

//     return 0;
// }

//Ques: Write a program to take input from user for Cost Price(C.P.) and Selling Price(S.P.) and calculate Profit or Loss
#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss "<<cp-sp<<endl;
    }
    else if(cp<sp){
        cout<<"Profit "<<sp-cp<<endl;
    }
    else{
        cout<<"No Profit No Loss"<<endl;
    }

    return 0;
}