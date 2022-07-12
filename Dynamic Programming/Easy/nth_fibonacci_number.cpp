// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#
// Given a positive integer n, find the nth fibonacci number. Since the answer can be very 
// large, return the answer modulo 1000000007.
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        vector<int> dp = {1, 1};
        int MOD = 1000000007;
        
        if(n < 3) return 1;
        for(int i = 2; i < n; i++)
        {
            int ans = (dp[0] + dp[1]) % MOD;
            dp[0] = dp[1];
            dp[1] = ans;
        }
        
        return dp[1];
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends