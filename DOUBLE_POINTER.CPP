#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fun(int **n)// It only show that it only take double pointer as its parameter.( it is not refering to the main value.)
{
    cout <<"taking one step inside the pointer = "<< **n;
}
int main()
{

    int n = 10;
    int *p = &n;
    int **ptr = &p;
    cout<<"value of p = "<<p<<endl; // before 
    cout << "value of ptr = "<<ptr<<endl; // before
    fun(ptr);
}