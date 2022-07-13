// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1#
// Given a string you need to print all possible strings that can be made by placing spaces
// (zero or one) in between them. The output should be printed in sorted increasing order of 
// strings
class Solution{
public:

    vector<string> permutation(string S){
         vector<string>ans;
         string x;
         rec(0,S,ans,x);
         return ans;
    }
    
    void rec(int i,string& s,vector<string>& ans, string x)
   {
       if(i==s.size())
       {
          if(x[x.size()-1]!=' ')
          ans.push_back(x);
           return;
       }
       rec(i+1,s,ans,x+s[i]+" ");
       rec(i+1,s,ans,x+s[i]);
   }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends