// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1#
// Given a string S. The task is to find all permutations of a given string.
class Solution{
public:
    
    vector<string> permutation(string S)
    {
        sort(S.begin(),S.end());
        vector<string>ans;
        do{
            ans.push_back(S);
        }while(next_permutation(S.begin(),S.end()));
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends