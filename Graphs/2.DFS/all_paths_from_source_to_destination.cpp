// tags:- DFS
// https://leetcode.com/explore/learn/card/graph/619/depth-first-search-in-graph/3849/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<vector<int>> vvi;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vvi ans;
        if(graph.size()==0) return ans;
        vector<int>temp;
        dfs(graph ,0, ans , temp);
        return ans;
    }
    
private:
    void dfs(vvi& graph ,int v, vvi& ans, vector<int>& temp){
        temp.pb(v);
        if(v==graph.size()-1){ ans.emplace_back(temp); return;}
        vector<int> paths = graph[v];
        for(int p:paths) {
            dfs(graph , p , ans , temp);
            temp.pop_back();
        }
    }
};