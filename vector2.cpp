// empty vector and inserting value 

#include<iostream>
#include<vector>
using namespace std;
int main(){
// create a vector
vector<int>v;

v.push_back(3);
v.push_back(5);
v.push_back(7);
//size and capacity;

cout<<v.size()<<endl; // 3
cout<<v.capacity()<<endl; // 4

// in this case we will know how memory is allocated to a vector in a multiple of 2 with a size 
// eg :- 2,4,8,16,32 etc which means capacity of the vector not the size , size will be the no.of element in the vector.



}