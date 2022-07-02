// https://practice.geeksforgeeks.org/preview-problems/706102/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) {
    // Add 1 to last digit and find carry
    a[n - 1] += 1;
    int carry = a[n - 1] / 10;
    a[n - 1] = a[n - 1] % 10;

    // Traverse from second last digit
    for (int i = n - 2; i >= 0; i--) {
        if (carry == 1) {
            a[i] += 1;
            carry = a[i] / 10;
            a[i] = a[i] % 10;
        }
    }

    // If carry is 1, we need to add
    // a 1 at the beginning of vector
    if (carry == 1)
        a.insert(a.begin(), 1);
        
    return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends