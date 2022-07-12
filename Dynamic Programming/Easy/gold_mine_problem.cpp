// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1#
// Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a
// positive integer which is the amount of gold in tons. Initially the miner can start from
// any row in the first column. From a given cell, the miner can move
// * to the cell diagonally up towards the right 
// * to the right
// * to the cell diagonally down towards the right
// Find out maximum amount of gold which he can collect.
class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int curr_ans = dfs(M, dp, n, m, i, 0);
            ans = max(ans, curr_ans);
        }
        return ans;
    }
    
    int dfs(vector<vector<int>>& Mat, vector<vector<int>>& dp, int n, int m, int i, int j)
    {
        // cout << i << ' ' << j << endl;
        if(!isValid(n, m, i, j)) return 0;
        if(dp[i][j] != 0) return dp[i][j];
        
        int upper = dfs(Mat, dp, n, m, i+1, j+1);
        int same = dfs(Mat, dp, n, m, i, j+1);
        int lower = dfs(Mat, dp, n, m, i-1, j+1);
        
        dp[i][j] = Mat[i][j] + max(upper, max(same, lower));
        return dp[i][j];
    }   
    
    bool isValid(int n, int m, int i , int j)
    {
        if(i < 0 || j < 0 || i >= n || j >= m ) 
            return false;
        return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends