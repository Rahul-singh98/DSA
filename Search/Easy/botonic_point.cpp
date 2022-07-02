// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int low = 0;
	   int high = n-1;
	   while(low <= high){
	       int mid = (low+high)/2;
	       if(arr[mid] < arr[mid-1])
	           high = mid-1;
	       else if(arr[mid] < arr[mid+1])
	           low = mid+1;
	       else
	           return arr[mid];
	   }
	   return arr[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends