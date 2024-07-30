//Write a program to display transpose of matrix entered by the user

#include<iostream>
using namespace std;
int main(){
    //Taking input of matrix
    int r1, c1;
    cout<<"Enter r1 and c1: ";
    cin>>r1>>c1;
    int arr[r1][c1];
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    } cout<<endl;
    //Printing transpose of given matrix -->>
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// //transpose
// #include<iostream>
// #include<vector>
// using namespace std;
// void transpose(vector<vector<int>> &mat){
//     int r = mat.size();
//     for(int i=0;i<r;i++){
//         for(int j=0;j<i;j++){
//             swap(mat[i][j],mat[j][i]);
//         }
//     }
//     return;
// }
// int main(){
//     int r,c;
//     cout<<"Enter number of rows and columns: ";
//     cin>>r>>c;
//     vector<vector<int>> matrix(r,vector<int>(c));
//     cout<<"Enter Matrix: "<<endl;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     transpose(matrix);
//     cout<<"Transpose of Given Matrix is: "<<endl;
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
