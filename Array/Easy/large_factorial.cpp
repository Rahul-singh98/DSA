// https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        long long d = *max_element(a.begin(), a.end());
        vector<long long> ans, dp(d+1, 1);
        
        for(long long i = 1; i <= d; i++)
            dp[i] = (i* dp[i-1]) % 1000000007;
            
        for(auto it: a)
            ans.push_back(dp[it]);
            
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends