//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
// The cost of stock on each day is given in an array A[] of size N. 
// Find all the days on which you buy and sell the stock so that in 
// between those days your profit is maximum.
// Note: There may be multiple possible solutions. Return any one of 
// them. Any correct solution will result in an output of 1, whereas
// wrong solutions will result in an output of 0.
class Solution{
    public:
struct Interval 
   {
       int buy;
       int sell;
   };
   //Function to find the days of buying and selling stock for max profit.
   vector<vector<int> > stockBuySell(vector<int> a, int n)
   {
       vector<vector<int> > result;
       Interval sol[n/2 +1];
       
       if(n==1)
           return result;
       
       int count=0; // count of buy and sell pairs
       int i=0;
       while(i < n)
       {
           //local minima
           while((i< n-1) && (a[i+1] <= a[i]))
           {
               i++;
           }
           
           if(i==n-1)  //no solution at thee end
           {
               break;
           }
           sol[count].buy=i++; // ++ to inc the var i for next iteration
           
           //local maxima
           while((i<n) && (a[i] >= a[i-1])) // limit of the loop is n-1 hence we are comparing i & i-1 as we can sell at last but cant buy at last
           {
               i++;
           }
           
           sol[count].sell=i-1;
           
           count++;
       }
       
       if(count==0){
           return result;
       }
       
       else
       {
           //storing buy and sell pairs in a 2D list
           for(int i=0; i<count; i++)
           {
               result.push_back({sol[i].buy, sol[i].sell});
           }
       }
       return result;
   }
};
// 0 1 2 3 0 1 2


//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends