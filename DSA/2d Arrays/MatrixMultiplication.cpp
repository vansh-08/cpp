// Write a program to display multiplication of two matrices entered by the user.
// for matrix multiplication row size and column of both matrices must be same

// #include<iostream>
// using namespace std;
// int main(){
//     // taking input of arr1
//     int r1, c1;
//     cin>>r1>>c1;
//     int arr1[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     //taking input of arr2
//     int r2, c2;
//     cin>>r2>>c2;
//     int arr2[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>arr2[i][j];
//         }
//     }

//     int arr3[r1][c2];
//     if(c1 != r2){
//         cout<<"Matrix multiplication not possible for this input"<<endl;
//         exit(0);
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             int value = 0;
//             for(int k=0;k<r2;k++){
//                 value += arr1[i][k] * arr2[k][j];
//             }
//             arr3[i][j] = value;
//         }
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<arr3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Matrix Multiplication -->>
// #include<iostream>
// using namespace std;
// int main(){
//     // taking input of first array
//     int r1, c1;
//     cout<<"Enter r1 & c1: ";
//     cin>>r1>>c1;
//     int arr1[r1][c1];
//     cout<<"Enter arr1: "<<endl;
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>arr1[i][j];
//         }
//     }

//     // taking input of second array
//     int r2, c2;
//     cout<<"Enter r2 & c2: ";
//     cin>>r2>>c2;
//     int arr2[r2][c2];
//     cout<<"Enter arr2: "<<endl;
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>arr2[i][j];
//         }
//     }
    
//     if(r1 != c2){
//         cout<<"Matrix Multiplication is not possible for given input...";
//         exit(0);
//     }
//     // Performing matrix multiplication on both arrays
//     int arr3[c1][r2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             int value = 0;
//             for(int k=0;k<r1;k++){
//                 value += arr1[i][k] * arr2[k][j];
//             }
//             arr3[i][j] = value;
//         }
//     } cout<<endl;

//     // Printing resultant after matrix multiplication on both arrays
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<arr3[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }




// Matrix Multiplication -->>
#include<iostream>
using namespace std;
int main(){
    // taking input of first matrix
    int r1,c1;
    cout<<"Enter r1 and c1: ";
    cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"Enter first matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    //taking input of second matrix
    int r2,c2;
    cout<<"Enter r2 and c2: ";
    cin>>r2>>c2;
    int arr2[r2][c2];
    cout<<"Enter second matrix: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    } cout<<endl;
    // Multiplying both matrices
    int arr3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value = 0;
            for(int k=0;k<r2;k++){
                value += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = value;
        }
    }
    //Printing resultant matrix -->>
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr3[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}



// universal code -->>
// //multiplication -->>
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter size of matrix1(n, m): ";
//     cin>>n>>m;
//     int a,b;
//     cout<<"Enter size of matrix2(n, m): ";
//     cin>>a>>b;
//     vector<vector<int>> mat1(n,vector<int>(n));
//     vector<vector<int>> mat2(a,vector<int>(b));
//     // not applicable condition
//     if(m != a){
//         cout<<"Matrix Multiplication is not possible for given values...";
//         exit(0);
//     }
//     vector<vector<int>> matx(n,vector<int>(b));
//     cout<<"Enter matrix1: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat1[i][j];
//         }
//     }
//     cout<<"Enter matrix2: "<<endl;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             cin>>mat2[i][j];
//         }
//     }
//     // multiplying both matrices -->>
//     for(int i=0;i<n;i++){
//         for(int j=0;j<b;j++){
//             int x = 0;
//             for(int k=0;k<m;k++){
//                 x += mat1[i][k] * mat2[k][j];
//             }
//             matx[i][j] = x;
//         }
//     }

//     //printing final matx
//     cout<<"Multiplication of both matrices gives: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<b;j++){
//             cout<<matx[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }