//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1
// Given an array Arr[] of N distinct integers and a range from L to R, the task is to count the number
// of triplets having a sum in the range [L, R].

class Solution {
  public:
    int countTriplets(int arr[], int N, int L, int R) {
        if(N < 3) return 0;
        sort(arr, arr + N);
        int count = 0;
        int i = 0, j = N-1; 
        
        for(i = 0; i < N-2; i++)
        {
            int k = i + 1;
            j = N-1;
            while(k < j)
            {
                int sum = arr[i] + arr[j] + arr[k];
                // cout << i << ' ' << k << ' ' << j << ' ' << sum << endl;
                if(sum <= R) count += (j - k), k++;
                else j--;
            }
            
        }
        
        int count2 = 0;
        for(int i = 0; i < N-2; i++)
        {
            int k = i + 1;
            j = N-1;
            while(k < j)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum <= L-1) count2 += (j-k), k++;
                else j--;
            }
        }
        
        return abs(count - count2);
    }
};
// 1 2 3 4 5
// 


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}
// } Driver Code Ends