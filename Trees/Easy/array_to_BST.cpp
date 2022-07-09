// https://practice.geeksforgeeks.org/problems/array-to-bst4443/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int> ans;
        solve(nums, ans, 0, nums.size()-1);
        
        return ans;
    }
    
    void solve(vector<int>& nums, vector<int>& arr, int l, int r)
    {
        if(l > r) return;
        
        int m = (l + r) / 2;
        arr.push_back(nums[m]);
        solve(nums, arr, l, m -1);
        solve(nums, arr, m + 1, r);
    }
};
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends