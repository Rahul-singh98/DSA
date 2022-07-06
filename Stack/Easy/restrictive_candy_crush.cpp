// https://practice.geeksforgeeks.org/problems/8c8f95810b05b4cab665f2997d36991bd58308a2/1/#
// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        if(k == 1) return "";
        stack<pair<char,int>> st;
        int n = s.size();
        
        for(int i = 0; i < n; i++)
        {
            if(st.empty()) st.push({s[i], 1});
            
            else if(st.top().first != s[i]) st.push({s[i], 1});

            else
            {
                st.push({s[i], st.top().second+1});
                if(st.top().second >= k)
                {
                    int rem = k;
                    while(rem--) st.pop();
                }
            }
        }
        
        string ans = "";
        while(!st.empty())
        {
            char top = st.top().first;
            st.pop();
            ans += top;
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }


};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends