// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string commonPrefixHelper(string& a, string& b)
    {
        int len = min(a.size(), b.size());
        string res = "";
        for(int i = 0; i < len; i++)
        {
            if(a[i] != b[i]) break;
            else res += a[i];
        }
        
        return res;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        string prefix = arr[0];
        for(int i = 1; i < N; i++)
            prefix = commonPrefixHelper(prefix, arr[i]);
            
        return prefix.size()? prefix : "-1" ;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends