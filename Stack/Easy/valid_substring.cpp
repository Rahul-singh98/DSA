// https://practice.geeksforgeeks.org/problems/valid-substring0624/1#
// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        stack<int> st;
        int n = s.size();
        int ans = 0;
        st.push(-1);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(') st.push(i);
            else
            {
                st.pop();
                
                if(st.empty()) st.push(i);
                else
                {
                    ans = max(ans, i- st.top());
                }
            }
        }
        
        // ans = max(ans, curr);
        return ans;
    }
};

// (()))())
// 

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends