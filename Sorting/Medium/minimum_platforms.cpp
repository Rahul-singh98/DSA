//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
// Given arrival and departure times of all trains that reach a railway station. Find the minimum number
// of platforms required for the railway station so that no train is kept waiting.
// Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure
// time can never be the same for a train but we can have arrival time of one train equal to departure
// time of the other. At any given instance of time, same platform can not be used for both departure 
// of a train and arrival of another train. In such cases, we need different platforms.
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static bool cmp(vector<int>& a, vector<int>& b)
    {
        return a[0] < b[0];
    }
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	vector<vector<int>> intervals;
    	for(int i = 0; i < n; i++)
    	    intervals.push_back({arr[i], dep[i]});
    	    
    	sort(intervals.begin(), intervals.end());
    	
    	priority_queue<int, vector<int>, greater<int>> pq;
    	pq.push(intervals[0][1]);
    	
    	for(int i = 1; i < intervals.size(); i++)
    	{
    	    if(intervals[i][0] <= pq.top()) pq.push(intervals[i][1]);
    	    else
    	    {
    	        pq.pop();
    	        pq.push(intervals[i][1]);
    	    }
    	}
    	
    	return pq.size();
    }
};
// 0900 0940 1500 0950 1100 1800
// 0910 1200 1900 1120 1130 2000


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends