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
int findK(int A[MAX][MAX], int n, int m, int k)
{
    if (n < 1 || m < 1)
        return -1;

    /*....If element is in outermost ring ....*/
    /* Element is in first row */
    if (k <= m)
        return A[0][k - 1];

    /* Element is in last column */
    if (k <= (m + n - 1))
        return A[(k - m)][m - 1];

    /* Element is in last row */
    if (k <= (m + n - 1 + m - 1))
        return A[n - 1][m - 1 - (k - (m + n - 1))];

    /* Element is in first column */
    if (k <= (m + n - 1 + m - 1 + n - 2))
        return A[n - 1 - (k - (m + n - 1 + m - 1))][0];

    /*....If element is NOT in outermost ring ....*/
    /* Recursion for sub-matrix. &A[1][1] is
    address to next inside sub matrix.*/
    return findK((int(*)[MAX])(&(A[1][1])), n - 2,
                 m - 2, k - (2 * n + 2 * m - 4));
}

