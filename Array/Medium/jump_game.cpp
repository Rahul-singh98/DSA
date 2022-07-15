// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
// https://practice.geeksforgeeks.org/problems/jump-game/1/#
// Given an positive integer N and a list of N integers A[]. Each element in the array denotes
// the maximum length of jump you can cover. Find out if you can make it to the last index if
// you start at the first index of the list.
class Solution {
  public:
    int canReach(int A[], int N) {
        if(N==1) return true;
        int reach = A[0];
        
        for(int i = 1; i < N; i++)
        {
            if(reach < i) return false;
            if(reach >= N) return true;
            
            reach = max(reach, A[i] + i);
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends