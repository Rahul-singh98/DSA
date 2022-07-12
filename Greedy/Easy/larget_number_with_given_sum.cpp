// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

// Function to return Largest Number
// https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1#
// Geek lost the password of his super locker. He remembers the number of digits N as well as
// the sum S of all the digits of his password. He know that his password is the largest number
// of N digits that can be made with given sum S. As he is busy doing his homework, help him 
// retrieving his password.
class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        string a(n, '0');
        for(int i = 0; i < n; i++)
        {
            if(sum > 9)
            {
                sum -= 9;
                a[i] = 9 + '0';
            }
            else
            {
                a[i] = sum + '0';
                sum = 0;
            }
        }
        if(sum > 0)
            return "-1";
        
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends