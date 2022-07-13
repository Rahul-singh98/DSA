// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

// https://practice.geeksforgeeks.org/problems/juggler-sequence3930/1/#
// Juggler Sequence is a series of integers in which the first term starts with a positive 
// integer number a and the remaining terms are generated from the immediate previous term 
// using the below recurrence relation:

//  a_(k+1)={|_a_k^(1/2)_|   for even a_k; |_a_k^(3/2)_|   for odd a_k, 

// Given a number N, find the Juggler Sequence for this number as the first term of the sequence.
class Solution{
public:
    vector<int> jugglerSequence(int N){
        vector<int> ans;
        while(N!= 1)
        {
            ans.push_back(N);
            if(N % 2 == 0) N = sqrt(N);
            else N = sqrt(N) * sqrt(N) * sqrt(N);
        }
        
        ans.push_back(1);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends