// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1#
// There are n stairs, a person standing at the bottom wants to reach the top. The person can
// climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach
// the top (order does matter).
{
public:
    //Function to count number of ways to reach the nth stair.
    int MOD = 1000000007;
    
    int countWays(int n)
    {
        vector<int> dp = {1, 2};
        if(n < 3) return dp[n-1];
        
        for(int i = 2; i < n; i++){
            int sum = (dp[0] % MOD + dp[1] % MOD) % MOD;
            dp[0] = dp[1];
            dp[1] = sum;
        }
        
        return dp[1];
    }
};
// 1 2 3 4 5 
// 1 2 3 5 8


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends