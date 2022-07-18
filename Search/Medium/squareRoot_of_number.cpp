//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
// https://practice.geeksforgeeks.org/problems/square-root/1
// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int res ,low=1 ,high=x,mid;
       
       while(low<=high){
            mid=low+(high-low)/2;
           if(mid*mid<x){
              res=mid;
              low=mid+1;
          }else if(mid*mid==x){
               res=mid;
               break;
           }else if(mid*mid>x){
            high=mid-1;   
           }
       }
       return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends