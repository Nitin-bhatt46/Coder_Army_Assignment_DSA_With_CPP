// brutforce
#include<iostream>

using namespace std;
int main(){

int arr[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,109,108,111,200,218,320};
int row =4;
int col =5;
int x;
cout<<"enter the number you want to find."<<endl;
cin>>x;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
    cout<<arr[i][j]<<"\t";
}
cout<<endl;
}


for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
    if(arr[i][j]==x){
        cout<<"got it";
        return 0;
    }
}
cout<<endl;
}
cout<<"not found.";

}