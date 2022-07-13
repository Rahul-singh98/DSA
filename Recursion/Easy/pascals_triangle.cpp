// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long

// https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1/#
// Given a positive integer N, return the Nth row of pascal's triangle.
// Pascal's triangle is a triangular array of the binomial coefficients formed by summing up 
// the elements of previous row.

class Solution{
public:
        int mod = 1000000007;
       void helper(int i,int n, vector<ll>& v){
       if(i == n) return;
       if(i == 0) v.push_back(1);
       
       vector<ll> temp;
       for(int j = 0;j <= i;j++){
           if(j == 0 || j == i) temp.push_back(1);
           else temp.push_back((v[j-1]+v[j])%mod);
       }
       v = temp;
       helper(i+1,n,v);
   }
   
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll> v;
        helper(0,n,v);
        return v;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends