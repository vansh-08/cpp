// Multidimensional arrays -->> Array of arrays
            // datatype array_name[size1][size2].....[sizeN];
            // datatype array_name[size1][size2].....[size n];

// 2D Array -->>   dimension = 2
// datatype array_name[row][col];
// int array[4][3];
// to understand structure of 2d array imagine a table with 4 rows and 3 columns
// u can imagine address of elements refering to address of a matrix by starting index from 0

// Initialization of 2d array-->>
// int array[2][3] = {1,2,3,4,5,6};
// int array[2][3] = {{1,2,3},{4,5,6}};

// to visualize a 3d array-->> 
// let 3d array has dimensions 3,2 & 4 to visualize it think 3 2d arrays of dimension [2 X 4]..


#include<iostream>
using namespace std;
int main(){
    int row, column;
    cin>>row>>column;
    int arr[row][column];
    // Taking input of 2d array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    } cout<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
Why Multidimensional arrays -->>
* representing grids
* faster access
* predefined size
*/