//Pascal's Triangle
/*
1               1 -> (0C0)   2->(2C1)
1 1             ( nCr = n! / r!(n-r)! )
1 2 1
1 3 3 1
1 4 6 4 1   */
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int> > pascalTriangle(int n){
//     vector<vector<int> > pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i){
//                 pascal[i][j] = 1;
//             }
//             else{
//                 pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<vector<int>> ans;
//     ans = pascalTriangle(n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }





// My Approach using combinations and factorial
// #include<iostream>
// #include<vector>
// using namespace std;
// int factorial(int x){
//     if(x==0) return 1;
//     return x * factorial(x-1);
// }
// int combination(int n, int r){
//     return factorial(n) / (factorial(r) * factorial(n-r));
// }
// // cout<<factorial(i)/(factorial(j) * factorial(i-j))<<" ";
// int main(){
//     int n;
//     cout<<"Enter n: "; cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<combination(i,j)<<" ";
//         } cout<<endl;
//     }
//     //cout<<combination(3,1);
//     return 0;
// }



//pascal Triangle-->>
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j == i){
//                 pascal[i][j] = 1;
//             } else{
//                 pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
//     }
//     return pascal;
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<vector<int>> ans;
//     ans = pascalTriangle(n);
//     //printing the triangle
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }cout<<endl;
//     }

//     return 0;
// }


//pascal triangle practice-->>
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);{
//             for(int j=0;j<i+1;j++){
//                 if(j==0 || j==i){
//                     pascal[i][j] = 1;
//                 } else{
//                     pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
//                 }
//             }
//         }
//     }
//     return pascal;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<vector<int>> ans;
//     ans = pascalTriangle(n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ans[i][j]<<" ";
//         }cout<<endl;
//     }
    
//     return 0;
// }



// Pascal Triangle Practice -->>
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                pascal[i][j] = 1;
            } else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<vector<int>> ans;
    ans = pascalTriangle(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        } cout<<endl;
    }
    
    return 0;
}