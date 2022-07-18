//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
// Given two arrays A and B contains integers of size N and M, the task is to find numbers which are 
// present in the first array, but not present in the second array.
class Solution{
public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    unordered_map<long long, long long> st;
	    vector<long long> ans;
	    for(int i = 0; i < M; i++) st[B[i]]++;
	    for(int i = 0; i < N; i++)
	    {
	        if(st.find(A[i]) == st.end())
	            ans.push_back(A[i]);
	    }
	    
	   // for(auto& v: st) ans.push_back(v);
	    
	    return ans;
	} 
};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends