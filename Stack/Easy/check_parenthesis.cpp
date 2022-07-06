// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        int n = x.size();
        
        for(int i = 0; i < n; i++)
        {
            // cout << x[i] << endl;
            if(isOpen(x[i]))
                st.push(x[i]);
            else
            {
                if(st.empty()) return false;
                char top = st.top();
                if(top != getOpposite(x[i])) return false;
                st.pop();
            }
        }
        
        return st.size() == 0 ? true : false;
    }
    
    bool isOpen(char ch)
    {
        if(ch == '(' || ch == '{' || ch == '[')
            return true;
        return false;
    }
    
    char getOpposite(char ch){
        if(ch == ')') return '(';
        if(ch == '}') return '{';
        return '[';
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends