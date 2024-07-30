// standard input -->>
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 1
// 2 2 (ans 34)

#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2){
    int sum=0;
    // simple method
    // for(int i=l1;i<=l2;i++){
    //     for(int j=r1;j<=r2;j++){
    //         sum+=matrix[i][j];
    //     }
    // }

    // using prefix sum method
    //prefix sum array row-wise
    for(int i=0;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }

    // prefix sum array column-wise
    for(int i=1;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j] += matrix[i-1][j];
        }
    }
    //printing prefix sum 2d array
    cout<<"prefix sum 2d array..."<<endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    int top_sum = 0, left_sum = 0, topleft_sum = 0;
    if(l1 != 0){
        top_sum = matrix[l1-1][r2];
    }
    if(r1 != 0){
        left_sum = matrix[l2][r1-1];
    }
    if(l1 != 0 && r1 != 0){
        topleft_sum = matrix[l1-1][r1-1];
    }
    sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;
    return sum;
}

int main(){
    int n,m;
    cout<<"Enter size(n*m): ";
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter l1, r1, l2, r2: ";
    cin>>l1>>r1>>l2>>r2;
    cout<<"Given Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    int sum=rectangleSum(matrix,l1,r1,l2,r2);
    cout<<"Sum: "<<sum<<endl;

    return 0;
}


// Practice..(simple method)
// #include<iostream>
// #include<vector>
// using namespace std;
// int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2){
//     int sum = 0;
//     for(int i=l1;i<=l2;i++){
//         for(int j=r1;j<=r2;j++){
//             sum += matrix[i][j];
//         }
//     }
//     return sum;
// }
// int main(){
//     int n,m;
//     cout<<"Enter size(n*m): ";
//     cin>>n>>m;
//     vector<vector<int>> matrix(n,vector<int>(m));
//     cout<<"Enter matrix: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     int l1, r1, l2, r2;
//     cout<<"Enter rectangle coordinates: ";
//     cin>>l1>>r1>>l2>>r2;
//     cout<<"Given Matrix is:"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         } cout<<endl;
//     }
//     int sum = rectangleSum(matrix, l1, r1, l2, r2);
//     cout<<"sum of rectangle elements: "<<sum;
//     return 0;
// }



// // //practice for 3rd method(prefix-sum row-wise and column-wise) to calculate rectangleSum...
// #include<iostream>
// #include<vector>
// using namespace std;
// int rectangleSum(vector<vector<int>> &mat){
//     int sum = 0;
//     // prefix-sum row-wise ->
//     for(int i=0;i<mat[0].size();i++){
//         for(int j=1;j<mat.size();j++){
//             mat[i][j] += mat[i][j-1];
//         }
//     }
//     for(int i=1;i<mat[0].size();i++){
//         for(int j=0;j<mat.size();j++){
//             mat[i][j] += mat[i-1][j];
//         }
//     }
//     cout<<"Printing prefix-sum 2d array -->>"<<endl;
//     for(int i=0;i<mat[0].size();i++){
//         for(int j=0;j<mat.size();j++){
//             cout<<mat[i][j]<<" ";
//         } cout<<endl;
//     }
//     //calculating rectangle sum from 2d array...
//     int l1,r1,l2,r2;
//     cout<<"Enter l1,r1,l2,r2: ";
//     cin>>l1>>r1>>l2>>r2;
//     int left_sum = 0, top_sum = 0, top_leftsum = 0;
//     if(l1 != 0){
//         top_sum = mat[l1-1][r2];
//     }
//     if(r1 != 0){
//         left_sum = mat[l2][r1-1];
//     }
//     if(l1 != 0 && r1 != 0){
//         top_leftsum = mat[l1-1][r1-1];
//     }
//     sum = mat[l2][r2] - top_sum - left_sum + top_leftsum;
//     return sum;
// }
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter size(n*m): ";
//     cin>>n>>m;
//     vector<vector<int>> mat(n,vector<int>(n));
//     cout<<"Enter Matrix: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     int sum = rectangleSum(mat);
//     cout<<"sum: "<<sum;

//     return 0;
// }