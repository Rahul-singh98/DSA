// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/count-the-paths4332/1#
// Given a directed acyclic graph(DAG) with n nodes labeled from 0 to n-1. 
// Given edges, s and d ,count the number of ways to reach from s to d.
// There is a directed Edge from vertex edges[i][0] to the vertex edges[i][1].
class Solution {
public:
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    vector<vector<int>> adj(n);
	    
	    for(auto &e: edges)
	        adj[e[0]].push_back(e[1]);
	        
	    int ans = 0;
	    
	    dfs(ans, s, d, adj);
	    
	    return ans;
	}
	
	void dfs(int& ans, int src, int dest, vector<vector<int>>& adj)
	{
	    if(src == dest)
	    {
	        ans++;
	        return;
	    }
	    
	    for(auto &x: adj[src])
	        dfs(ans, x, dest, adj);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends