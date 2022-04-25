// tags:- DFS
// https://leetcode.com/explore/learn/card/graph/619/depth-first-search-in-graph/3893/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vvi graph(n);
        for(auto e: edges){
            graph[e[0]].pb(e[1]);
            graph[e[1]].pb(e[0]);
        }
        vb visited(n , false);
        return dfs(graph , source , destination , visited);
    }
private:
    bool dfs(vvi& graph , int s , int d , vb& visited){
        // cout << s << ' ' << d << endl;
        if(s==d) return true;
        visited[s]=true;
        
        for(int i=0;i<graph[s].size();i++){
            if(visited[graph[s][i]]) continue;
            if(graph[s][i]==d) return true;
            if(dfs(graph , graph[s][i] , d  ,  visited)) return true;
        }
        
        return false;
    }
};