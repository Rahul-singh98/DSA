// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> curr;
        string s;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '.')
            {
                curr.push_back(s);
                s = "";
            }
            else s += S[i];
        }
        curr.push_back(s);
        s = "";
        for(int i = curr.size() - 1; i >=0; i--)
        {
            s += curr[i];
            s += '.';
        }
        
        s = s.substr(0, s.size()-1);
        return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends