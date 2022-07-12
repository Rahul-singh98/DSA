// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++

// https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1#
// Given an array Arr of size N containing positive integers. Find the maximum sum of a 
// subsequence such that no two numbers in the sequence should be adjacent in the array.
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    vector<int> dp(n, -1);
	    return solve(arr, dp , n-1);
	}
	
	int solve(int arr[], vector<int>& dp, int i)
	{
	    if(i < 0) return 0;
	    if(dp[i] != -1) return dp[i];
	    
	    int inc = arr[i] + solve(arr, dp, i-2);
	    int exc = solve(arr, dp, i-1);
	    return dp[i] = max(inc, exc);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends