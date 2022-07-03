// https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1#
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int ans = 0;
        int prev = 0;
        while(N)
        {
            int last = (N & 1);
            N >>= 1;
            if(last) prev++;
            else prev = 0;
            
            ans = max(ans, prev);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends