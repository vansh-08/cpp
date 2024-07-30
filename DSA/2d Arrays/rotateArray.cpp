#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateArray(vector<vector<int>> &vec){

    //transpose
    int n = vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse every row
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<vector<int>> vec(n,vector<int> (n));
    cout<<"Enter 2d array below ->"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    cout<<"Rotated array: "<<endl;
    rotateArray(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}



// /*
// // 2d array rotation
// 1 2 3   7 4 1   transpose -> 1 4 7
// 4 5 6   8 5 2                2 5 8
// 7 8 9   9 6 3                3 6 9
// */
// //rotate 2d array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void rotateArray(vector<vector<int>> &vec){
//     int n = vec.size();
//     //transpose
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             swap(vec[i][j],vec[j][i]);
//         }
//     }
//     //reverse every row
//     for(int i=0;i<n;i++){
//         reverse(vec[i].begin(),vec[i].end());
//     }
// }
// int main(){
//     int s;
//     cout<<"Enter size: ";
//     cin>>s;
//     vector<vector<int>> matrix(s,vector<int> (s));
//     cout<<"Enter 2d Array: "<<endl;
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     rotateArray(matrix);
//     cout<<"After rotating given 2d array we got: "<<endl;
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
