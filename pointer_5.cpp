// pass by pointer.
#include<iostream>
#include<algorithm>
using namespace std;
void inc(int *n){
    *n+=1;
}
int main(){
int num =10;
int temp = num;
inc (&num);
cout<<num;

}