// https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) mp[nums[i]]++;
        
        priority_queue<pair<int,int>> pq;
       
       vector<int> vec;
       
       for(auto x:mp)
           pq.push(make_pair(x.second,x.first));
           
       while(k--)
       {
           vec.push_back(pq.top().second);
           pq.pop();
       }
       return vec;
    }
    
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends