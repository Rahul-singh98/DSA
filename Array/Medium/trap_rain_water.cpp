//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
// Given an array arr[] of N non-negative integers representing the height of blocks. 
// If width of each block is 1, compute how much water can be trapped between the 
// blocks during the rainy season. 
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
               long long res=0;
       int i=0,j=n-1;
       int left=0,right=0;
       while(i<=j)
       {
           // store maximum of left 
           if(arr[i]<arr[j])
           {
               if(arr[i]>left)
               {
                   left=arr[i];
               }
               else
               {
                   res+=(left-arr[i]);
               }
               i++;
           }
           else
           {
               // store maximum of right
               if(arr[j]>right)
               {
                   right=arr[j];
               }
               else
               {
                   res+=(right-arr[j]);
               }
               j--;
           }
       }
       return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends