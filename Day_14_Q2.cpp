// Day_14_Q2.cpp
// tell leap year or not
#include <iostream>
using namespace std;
int main()
{
    int year,rem,sum=0;
    cout << "enter the num =";
    cin >> year;
  cout<<year<<endl;

    if(year%400==0){
        cout<<"leap year";
    }
    else if(year % 4==0 && year %100!=0){
        cout<<"leap year";

    }
    else {
        cout<<"not leap";
    }
  
}