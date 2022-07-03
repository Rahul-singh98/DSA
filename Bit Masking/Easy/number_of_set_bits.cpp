// https://practice.geeksforgeeks.org/problems/set-bits0143/1
// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int sum(int x , int y)
    {
        while(y != 0)
        {
            unsigned carry = x & y;
            x = x ^ y;
            y = carry << 1;
        }
        
        return x;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        
        Solution ob;
        cout<< ob.sum(a,b) <<"\n";
        
    }
    return 0;
}
  // } Driver Code Ends