//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1
// Given an array A[] of N positive integers. The task is to find the 
// maximum of j - i subjected to the constraint of A[i] < A[j] and 
// i < j.
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int n) 
    { 
        // Your code here
        int L[n],R[n];
         L[0]=A[0];
         for(int i=1;i<n;i++){
             L[i] = min(L[i-1],A[i]);
         }
         R[n-1]=A[n-1];
         for(int i=n-2;i>=0;i--){
             R[i] = max(R[i+1],A[i]);
         }
         
         int i=0,j=0,Diff=-1;
         while(i<n && j<n){
             if(L[i]<=R[j]){Diff = max(Diff,j-i);
             j++;}
             else i++;
         }
         return Diff;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends