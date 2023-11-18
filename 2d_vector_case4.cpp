// 2d vector printing in transpose form. ;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{ int n,m;
cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m,1));
    for (int i = 0; i < n; i++)
        
    {
        for (int j = 0; j < m; j++)
            
        {
           cin >> matrix[i][j];
        }
        
    }
    cout<<"before"<<endl;

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
            
        {
           cout << matrix[i][j]<<"\t";
        }
        cout<<endl;
    }



        for (int i = 0; i < m-1; i++)
        
        {
            for(int j =i+1;j<n;j++){
          swap(matrix[i][j],matrix[j][i]);
     

        }
    
    }
    cout<<"After"<<endl;
    
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
            
        {
           cout << matrix[i][j]<<"\t";
        }
        cout<<endl;
    }


    
    cout<<"total no.of rows = "<<matrix.size()<<endl;
    cout<<"total no.of col = "<<matrix[0].size()<<endl;
}