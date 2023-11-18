// 2d vector printing with spiral  form. ;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 1));
    
    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < m; j++)

        {
            cin >> matrix[i][j];
        }
    }
int top = 0, bottom = n - 1, left = 0, right = m - 1;

    cout << "before" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cout<< matrix[i][j] << "\t";
        }
        cout<< endl;
    }

    cout << "Spiral" << endl;

  //  int top = 0, bottom = n - 1, left = 0, right = m - 1;  n = row col = m

    while (left <= right && top <= bottom){
        // print top
        for(int j=left ; j<=right;j++)
        {
cout<<matrix[top][j];}
top ++;
        
        // print right

        for(int i=top;i<=bottom ; i++){
           cout<< matrix[i][right];
            
        }
        right --;
        // print bottom
        if(top<=bottom){
        for(int j=right;j>=left;j--){
            cout<<matrix[bottom][j];
            
        }
        bottom --;
    }

        // print left
     if( left<=right){
        for (int i =bottom;i>=top;i--){
            cout<<matrix[i][left];
            
        }
     }left++;
    }

       
}
// cout<< "total no.of rows = " << matrix.size() << endl;
// cout<< "total no.of col = " << matrix[0].size() << endl;
