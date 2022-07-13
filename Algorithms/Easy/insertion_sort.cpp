// { Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/insertion-sort/1#
// The task is to complete the insert() function which is used to implement Insertion Sort.
class Solution
{
    public:
    void insert(int arr[], int i)
    {
        insertionSort(arr, i);
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i, key, j; 
        for (i = 1; i < n; i++)
        { 
            key = arr[i]; 
            j = i - 1; 
      
            // Move elements of arr[0..i-1],  
            // that are greater than key, to one 
            // position ahead of their 
            // current position
            while (j >= 0 && arr[j] > key)
            { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
            } 
            arr[j + 1] = key; 
        } 
    }
};

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends