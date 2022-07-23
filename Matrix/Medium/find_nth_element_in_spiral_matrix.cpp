//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1
// Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained
// while traversing the matrix spirally. You need to complete the method findK which takes four
// arguments the first argument is the matrix A and the next two arguments will be n and m denoting
// the size of the matrix A and then the forth argument is an integer  k denoting the kth element . 
// The function will return the kth element obtained while traversing the matrix spirally.
/*You are required to complete this method*/
int findK(int matrix[MAX][MAX], int r, int c, int tar)
{
    int k = 0;
    while(r > k && c > k)
    {
        for(int j = k; j < c; j++)
            if(--tar == 0) return matrix[k][j];
            
        for(int i = k + 1; i < r; i++)
            if(--tar == 0) return matrix[i][c-1];
            
        for(int j = c-2; j >= k && r!= k+1; j--)
            if(--tar == 0) return matrix[r-1][j];
            
        for(int i = r-2; i > k && c != k+1; i--)
            if(--tar == 0) return matrix[i][k];
            
        r--;
        c--;
        k++;
    }
    return -1;
}

