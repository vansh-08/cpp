// // // Given a positive integer n, generate an n*n matrix filled with elements from 1 to n^2 in spiral order.

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<vector<int>> generateSpiralMatrix(int n) {
//     vector<vector<int>> result(n, vector<int>(n, 0));
//     int top = 0, bottom = n - 1, left = 0, right = n - 1;
//     int value = 1;
//     while (top <= bottom && left <= right) {
//         // Traverse from left to right
//         for (int col = left; col <= right; ++col) {
//             result[top][col] = value*value;
//             value++;
//         }
//         ++top;
//         // Traverse from top to bottom
//         for (int row = top; row <= bottom; ++row) {
//             result[row][right] = value*value;
//             value++;
//         }
//         --right;
//         // Traverse from right to left
//         if (top <= bottom) {
//             for (int col = right; col >= left; --col) {
//                 result[bottom][col] = value*value;
//                 value++;
//             }
//             --bottom;
//         }
//         // Traverse from bottom to top
//         if (left <= right) {
//             for (int row = bottom; row >= top; --row) {
//                 result[row][left] = value*value;
//                 value++;
//             }
//             ++left;
//         }
//     }
//     return result;
// }
// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);
//     // Print the generated spiral matrix
//     for (const vector<int>& row : spiralMatrix) {
//         for (int element : row) {
//             cout << element << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> order(int n){
//     vector<vector<int>> vec(n,vector<int>(n));
//     int top = 0;
//     int left = 0;
//     int right = vec[0].size()-1;
//     int bottom = vec.size()-1;
//     int direction = 0;
//     int value=1;
//     cout<<"Spiral Order of Given Matrix -->>"<<endl;
//     while(right >= left && top <= bottom){
//             // left to right
//         if(direction==0){
//             for(int row=left;row<=right;row++){
//                 vec[top][row]=value++;
//             }
//             top++;
//         } // top to bottom
//         else if(direction == 1){
//             for(int col=top;col<=bottom;col++){
//                 vec[col][right]=value++;
//             }
//             right--;
//         } // right to left
//         else if(direction == 2){
//             for(int row=right;row>=left;row--){
//                 vec[bottom][row]=value++;
//             }
//             bottom--;
//         } // bottom to top
//         else{
//             for(int col=bottom;col>=top;col--){
//                 vec[col][left]=value++;
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     return vec;
// }

// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;
//     vector<vector<int>> box(n,vector<int>(n));
//     box = order(n);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<box[i][j]<<" ";
//         } cout<<endl;
//     }


//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> order(int x){
//     int top = 0;
//     int right = x - 1;
//     int left = 0;
//     int bottom = x - 1;
//     int value = 1;
//     int direction = 0;
//     vector<vector<int>> mat(x,vector<int>(x));
//     while(top <= bottom && left <= right){
//         //left to right
//         if(direction == 0){ 
//             for(int row=left;row<=right;row++){
//                 mat[top][row] = value++;
//             }
//             top++;
//         } // top to bottom
//         else if(direction == 1){
//             for(int col=top;col<=bottom;col++){
//                 mat[col][right] = value++;
//             }
//             right--;
//         } // right to left
//         else if(direction == 2){
//             for(int row=right;row>=left;row--){
//                 mat[bottom][row] = value++;
//             }
//             bottom--;
//         } // bottom to top
//         else{
//             for(int col=bottom;col>=top;col--){
//                 mat[col][left] = value++;
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     return mat;
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<vector<int>> vec(n,vector<int>(n));
//     vec = order(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<vec[i][j]<<" ";
//         } cout<<endl;
//     }
    
//     return 0;
// }