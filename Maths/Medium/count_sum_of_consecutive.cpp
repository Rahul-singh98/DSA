// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/count-of-sum-of-consecutives3741/1#
// Given an integer N, the task is to find the number of ways to represent this number as a sum
// of 2 or more consecutive natural numbers.
class Solution {
  public:
    int getCount(int N) {
        long int count = 0;
        for (long int L = 1; L * (L + 1) < 2 * N; L++)
        {
            double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
            if (a - (int)a == 0.0)
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.getCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends