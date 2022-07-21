//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1
// Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a
// matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.
class Solution
{   
public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> row_ones(m, 0), col_ones(n, 0);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(matrix[i][j] == 1) row_ones[i] = 1, col_ones[j] = 1;
                
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(row_ones[i] == 1 || col_ones[j] == 1) 
                    matrix[i][j] = 1;
                    
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends