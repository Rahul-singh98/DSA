// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/number-of-paths0926/1#
// The problem is to count all the possible paths from top left to bottom right of a MxN 
// matrix with the constraints that from each cell you can either move to right or down.
long long  numberOfPaths(int m, int n)
{
    if(m == 1 || n == 1) return 1;
    return numberOfPaths(m-1, n) + numberOfPaths(m, n-1);
}

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends