/*
        2d Vectors -->> vector of vector datatype
        vector<vector<datatype>> vector_name
        
        vector<int> v1 = {1,2,3};
        vector<int> v2 = {4,5};
        vector<int> v3 = {6,7};
        vector<vector<int>> V = {v1,v2,v3};
        */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v1 = {1,2,3};
    // vector<int> v2 = {4,5};
    // vector<int> v3 = {6,7};
    // vector<vector<int>> V = {v1,v2,v3};
    
    //To initialize a vector of n X m
    int n,m;
    vector<vector<int>> V(n,vector<int>(m));
    return 0;
}