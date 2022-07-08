// https://practice.geeksforgeeks.org/problems/adding-array-element4756/1#
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        if(n == 1) return 0;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++)
            pq.push(arr[i]);
            
        int count = 0;
        while(!pq.empty())
        {
            int top = pq.top();
            pq.pop();
            if(top >= k) break;
            else
            {
                int second_top = pq.top();
                pq.pop();
                pq.push(top+second_top);
                count++;
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends