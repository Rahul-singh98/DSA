//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++
// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two
// arrays.
// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
// If there are repetitions, then only one occurrence of element should be printed in the union.
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> st;
        for(int i = 0; i < n; i++) st.insert(a[i]);
        for(int i = 0; i < m; i++) st.insert(b[i]);
        
        return st.size();
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends