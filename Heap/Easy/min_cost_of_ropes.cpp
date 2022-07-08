// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        if(n == 1) return 0;
        
        long long ans = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        for(int i = 0; i < n; i++) pq.push(arr[i]);
        
        while(pq.size() > 1)
        {
            long long top = pq.top();
            pq.pop();
            top += pq.top();
            pq.pop();
            
            ans += top;
            pq.push(top);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends