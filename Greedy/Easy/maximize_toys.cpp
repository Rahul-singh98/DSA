// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// https://practice.geeksforgeeks.org/problems/maximize-toys0331/1#
// Given an array arr[ ] of length N consisting cost of N toys and an integer K depicting
// the amount with you. Your task is to find maximum number of toys you can buy with K amount.
class Solution{
public:
    int toyCount(int N, int k, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        int ans = 0;
        int i = 0;
        while(k > 0 && i < N)
        {
            if(arr[i] <= k)
            {
                k -= arr[i];
                ans++;
            }
            else break;
            
            i++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends