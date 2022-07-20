//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
// Given a matrix of size r*c. Traverse the matrix in spiral form.
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int k = 0;
        while(r > k && c > k)
        {
            for(int j = k; j < c; j++)
                v.push_back(matrix[k][j]);
                
            for(int i = k + 1; i < r; i++)
                v.push_back(matrix[i][c-1]);
                
            for(int j = c-2; j >= k && r!= k+1; j--)
                v.push_back(matrix[r-1][j]);
                
            for(int i = r-2; i > k && c != k+1; i--)
                v.push_back(matrix[i][k]);
            r--;
            c--;
            k++;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends