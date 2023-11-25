// Vectors are dynamic arrays where you can resize your array when u want to insert or delete elements
// contiguous memory allocation
// Vector Declaration
// #include<vector>
// vector <datatype> vector_name;
// vector <datatype> vector_name(size);   \\with size

//1.   vector <int> v;      or      vector <int> v(5);

// To check size of our vector we use size operation 
//2.  (v.Size) [it gives length of vector]
// To resize the size of a vector -> we use resize operation  << v.resize(new_size); >>
//3.  v.resize(8);

// 4. Capacity
// v.capacity gives space or capacity allocated to our vector in memory
// size and capacity are not same
// capacity >= size
// if we resize our vector with size greater than capacity then capacity of vector will increase dynamically
// Capacity increases in powers of 2

// To insert an element at the end of vector (push_back)
// 5.  v.push_back(elelment);

// To insert an element at a particular position  (insert)
// 6.  v.insert(position,element);  [position -> position related to first element of our vector]

// To find position of first element (begin)
// 7.  v.begin();

// To find position of last element (end)
// 8. v.end();

// To delete an element from last
// 9.  v.pop_back();

// To delete an element from a particular position
// 10.  v.erase(position);  [position is relative to the start or end position of the vector] [eg. -> v.begin()+2  or v.end() -2]

// To delete all elements
// 11.  v.clear();


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.push_back(5);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    
    v.resize(10);
    cout<<"Size "<<v.size()<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;
    

    return 0;
}