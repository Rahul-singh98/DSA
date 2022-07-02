// https://practice.geeksforgeeks.org/problems/minimum-steps-to-make-product-equal-to-one/1/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        int steps=0;
      int zerocount=0;
      int negcount=0;
      for(int i=0;i<N;i++)
      {
          if(arr[i]>0)
          {
              steps+=arr[i]-1;
          }
          else if(arr[i]<0)
          {
              steps+=abs(arr[i])-1;
              negcount++;
          }
          else
          {
              zerocount++;
          }
      }
      if(negcount%2 != 0 && zerocount == 0)
      {
          steps += 2;
      }
      steps+=zerocount;
      return steps;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends