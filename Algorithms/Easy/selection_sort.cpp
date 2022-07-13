// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/selection-sort/1#
// Given an unsorted array of size N, use selection sort to sort arr[] in increasing order.
class Solution
{
    public:
    int select(int arr[], int n)
    {
       int a = INT_MAX; int ind = INT_MAX;
       for(int i = 0; i<n; i++){
           if(arr[i] < a) {
               a = arr[i];
               ind = i;
           }
       }
       return ind;
    }
     
    void selectionSort(int arr[], int n)
    {
       int minInd;
      for(int i=0;i<n;i++){
          minInd=i;
          for(int j=i+1;j<n;j++){
              if(arr[j]<arr[minInd])
              minInd=j;
          }
          swap(&arr[minInd],&arr[i]);
      }
    }
};

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends