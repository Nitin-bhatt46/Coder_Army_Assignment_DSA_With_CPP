// Day_14_Q3.cpp
// reverse integer
#include <iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout << "enter the num =";
    cin >> num;
  cout<<num<<endl;

    if(num<0){
        cout<<"invalid number";
    }
    else {
        while(num){
            rem=num%10;//2
            num/=10;//1
            if(sum>INT_MAX && sum<INT_MIN){ // resolving complexicity 
                return 0;
            }
            sum=sum*10+rem;//20
        }

    }
    cout<<sum;
}