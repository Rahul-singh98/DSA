// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        int n=s.length();
        int ans=0;
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i=0;i<n-1;i++)
        {
            if(mp[s[i]]<mp[s[i+1]])
            ans-=mp[s[i]];
            else
            ans+=mp[s[i]];
        }
        ans+=mp[s[n-1]];
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends