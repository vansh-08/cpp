#include<iostream>
#include<vector>
using namespace std;
void spiralOrder(vector<vector<int>> &matrix){
    int left = 0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    int direction = 0;
    while(left<=right && top<=bottom){
        // left -> right
        if(direction == 0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }
        //top-> bottom
        else if(direction == 1){
            
            for(int row = top;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
            }
            right--;
        }
        //right -> left
        else if(direction == 2){
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        //bottom -> top

        
        else{
            for(int row=bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1) % 4;  //0,1,2,3
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    spiralOrder(matrix);

    return 0;
}



//learning
// #include<iostream>
// #include<vector>
// using namespace std;

// void spiralOrder(vector<vector<int>> &matrix){
//     int left = 0;
//     int top = 0;
//     int right = matrix[0].size()-1;
//     int bottom = matrix.size()-1;
//     int direction = 0;
//     cout<<"Spiral Path: ";
//     while(left <= right && top <= bottom){
//         //right
//         if(direction == 0){
//             for(int col=left;col<=right;col++){
//                 cout<<matrix[top][col]<<" ";
//             }
//             top++;
//         }

//         //down
//         else if(direction == 1){
//             for(int row=top;row<=bottom;row++){
//                 cout<<matrix[row][right]<<" ";
//             }
//             right--;
//         }

//         //left
//         else if(direction == 2){
//             for(int row=right;row>=left;row--){
//                 cout<<matrix[bottom][row]<<" ";
//             }
//             bottom--;
//         }

//         //up
//         else{
//             for(int col=bottom;col>=top;col--){
//                 cout<<matrix[col][left]<<" ";
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
// }

// int main(){
//     int i,j;
//     cout<<"Enter box size: ";
//     cin>>i>>j;
//     vector<vector<int>> box(i, vector<int>(j));
//     cout<<"Enter Matrix: "<<endl;
//     for(int r=0;r<i;r++){
//         for(int t=0;t<j;t++){
//             cin>>box[r][t];
//         }
//     }
//     spiralOrder(box);

//     return 0;
// }


//Practice
// #include<iostream>
// #include<vector>
// using namespace std;
// void spiralOrder(vector<vector<int>> &box){
//     int top = 0;
//     int right = box[0].size()-1;
//     int left = 0;
//     int bottom = box.size()-1;
//     int direction = 0;
//     cout<<"Spiral Path -->>"<<endl;
//     while(left <= right && top <= bottom){
//         //left to right
//         if(direction == 0){
//             for(int row = left;row <= right;row++){
//                 cout<<box[top][row]<<" ";
//             }
//             top++;
//         }
//         //top to bottom
//         else if(direction == 1){
//             for(int col = top;col <= bottom;col++){
//                 cout<<box[col][right]<<" ";
//             }
//             right--;
//         }
//         //right to left
//         else if(direction == 2){
//             for(int row = right;row >= left;row--){
//                 cout<<box[bottom][row]<<" ";
//             }
//             bottom--;
//         }
//         //bottom to top
//         else{
//             for(int col = bottom;col >= top;col--){
//                 cout<<box[col][left]<<" ";
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     return;
// }
// int main(){
//     int a,b;
//     cout<<"Enter Size of Matrix: ";
//     cin>>a>>b;
//     vector<vector<int>> matrix(a, vector<int>(b));
//     cout<<"Enter Matrix ->"<<endl;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     spiralOrder(matrix);
//     return 0;
// }



// Practice 2
// #include<iostream>
// #include<vector>
// using namespace std;
// void spiralOrder(vector<vector<int>> &matrix){
//     int top = 0;
//     int right = matrix[0].size()-1;
//     int left = 0;
//     int bottom = matrix.size()-1;
//     int direction = 0;
//     cout<<endl<<"Spiral Path-->>"<<endl;
//     while(top <= bottom && left <= right){
//         // left to right
//         if(direction == 0){
//             for(int row=left;row<=right;row++){
//                 cout<<matrix[top][row]<<" ";
//             }
//             top++;
//         }
//         // top to bottom
//         else if(direction == 1){
//             for(int col= top;col<=bottom;col++){
//                 cout<<matrix[col][right]<<" ";
//             }
//             right--;
//         }
//         //right to left
//         else if(direction == 2){
//             for(int row=right;row>=left;row--){
//                 cout<<matrix[bottom][row]<<" ";
//             }
//             bottom--;
//         }
//         //bottom to top
//         else{
//             for(int col=bottom;col>=top;col--){
//                 cout<<matrix[col][left]<<" ";
//             }
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
//     return;
// }
// int main(){
//     int n,m;
//     cout<<"Enter size of matrix: ";
//     cin>>n>>m;
//     vector<vector<int>> box(n,vector<int>(m));
//     cout<<"Enter Matrix-->>"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>box[i][j];
//         }
//     }
//     spiralOrder(box);
//     return 0;
// }



//bhai ek baar aur kr k bta de

