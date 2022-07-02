// https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i = N - 1;
	    int j = 0;
	    while(i >= 0 && j >= 0 && i < N && j < M){
	        int curr = mat[i][j];
	        if(curr == X){
	            return 1;
	        }
	        else if(curr < X){
	            j++;
	        }
	        else{
	            i--;
	        }
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  // } Driver Code Ends