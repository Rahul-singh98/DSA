// https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        auto it=lower_bound(v.begin(),v.end(),x);
        int ind1=-1,ind2=-1;
        if(it!=v.end()){
            if(*it==x)
                ind1=it-v.begin();
        }
        it=upper_bound(v.begin(),v.end(),x);
        it--;
        if(it!=v.end()){
            if(*it==x)
                ind2=it-v.begin();
        }

        return {ind1,ind2};
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends