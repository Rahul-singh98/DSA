//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the
// first row that has the maximum number of 1's.
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==1)
                {
                    return j;
                }
            }
        }
        return -1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends