// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1#
// Given a binary array and an integer m, find the position of zeroes flipping which creates
// maximum number of consecutive 1's in array.
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int a[], int n, int m) {
         int ans=0,curr=0,zeroes=0,l=0,r=0;
        while(r<n){
            if(!a[r]){
                if(zeroes<m){
                    zeroes++;
                    curr++;
                }
                else
                    while(a[l++])
                        curr--;
            }
            else
                curr++;
            ans=max(ans,curr);
            r++;
        }
        return ans;
    }  
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends