// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// Kosaraju's Strongly Connected Component Algorithm.
// https://practice.geeksforgeeks.org/problems/mother-vertex/1#
// Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
// A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.
class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    vector<bool> visited(V, false);
	    int mother = 0;
	    for(int i = 0; i < V; i++)
	    {
	        if(!visited[i])
	        {
	            dfs(adj, visited, i);
	            mother = i;
	        }
	    }
	    fill(visited.begin(), visited.end(), false);
	    dfs(adj, visited, mother);
	    
	    for(int i = 0; i < V; i++)
	        if(!visited[i]) return -1;
	        
	    return mother;
	}
	
	void dfs(vector<int> adj[], vector<bool>& visited, int idx){
	    visited[idx] = true;
	    
	    for(auto i: adj[idx])
	    {
	        if(!visited[i])
	            dfs(adj, visited, i);
	    }
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends