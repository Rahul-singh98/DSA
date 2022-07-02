//  https://practice.geeksforgeeks.org/problems/product-array-puzzle4525
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        
            vector<long long int>left(n);      //Its preferred to declare the size of vector 
     vector<long long int>right(n);   //Its good to declare the size of vector 
     long long int multiply_left=1;
     long long int multiply_right=1;
     for( int i=0;i<n;i++)
     {
         left[i]=multiply_left*nums[i];
         multiply_left=left[i];//Becarefull to reassign the value of left[i] in to the multiplt_left
     }
     
      for( int i=n-1;i>=0;i--)
     {
         right[i]=multiply_right*nums[i];
         multiply_right=right[i];
     }
     vector<long long int>res(n);
     
     
     if(n==1)
     {
        res[0]=1;   //THIS IS AN EDGE CASE WHICH NEED TO HANDEL CAREFULLY
     }
     
     
     else
     {
         res[0]=right[1];
         res[n-1]=left[n-2];
         for(int i=1;i<n-1;i++)
         {
             res[i]=left[i-1]*right[i+1];
         }
     }
     
     
     
       return res;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends