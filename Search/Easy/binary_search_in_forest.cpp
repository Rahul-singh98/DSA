// https://practice.geeksforgeeks.org/problems/ffd66b6a0bf7cefb9987fa455974b6ea5695709e/1/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        int h = *max_element(tree, tree + n);
        int l = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
            mp[tree[i]]++;
        
        while(l <= h) 
        {
            int mid = l + (h - l)/ 2;
            int sum = 0;
            for(auto it: mp)
            {
                if(it.first - mid > 0)
                    sum += (it.first - mid) * it.second;
            }
            
            if(sum == k) return mid;
            if(sum < k) h = mid - 1;
            else l = mid + 1;
        }
        
        return -1;
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}  // } Driver Code Ends