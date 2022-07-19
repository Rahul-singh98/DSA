//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1
// Given an unsorted array arr[] of n positive integers. Find the number of 
// triangles that can be formed with three different array elements as lengths of 
// three sides of triangles. 
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
       int i,j,k;
       sort(arr,arr+n);
       int count=0;
       int sum=0;
       for(i=n-1;i>=2;i--){
           j=0,k=i-1;
           while(j<k){
               if(arr[i]<arr[k]+arr[j]){
                   count=count+k-j;
                   k--;
                   j=0;
               }
               else {
                   j++;
               }
           }
       }
       return count;
    }
};

// 1 2 3 4 5 6 
// i = 5


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends