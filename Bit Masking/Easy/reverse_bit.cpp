// https://practice.geeksforgeeks.org/problems/reverse-bits-1611130171/1/#
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        unsigned int ans=0;
       int btr = log2(n)+1;
    //   cout << btr << endl;
       for(int i=0;i<btr;i++){
           int bit=1&(n>>i);
           ans=ans|bit<<(btr-1-i);
       }
       return ans;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout<< ob.reverseBits(N) <<"\n";
        
    }
    return 0;
}
  // } Driver Code Ends