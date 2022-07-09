// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visited(V, false);
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            
            if(visited[top]) continue;
            visited[top] = true;
            ans.push_back(top);
            
            for(auto v: adj[top])
                q.push(v);
        }
        
        return ans;
    }
};

// 0 : 2 5
// 1 L 5 6 8
// 3 : 4 5
// 4 : 7
// 5 : 7
// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends