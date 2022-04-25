// tags:- DFS
// https://leetcode.com/explore/learn/card/graph/619/depth-first-search-in-graph/3901/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

typedef unordered_map<string  , multiset<string>> umsmss;
    
class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        umsmss graph;
        vector<string> ans;
        for(auto ticket: tickets) graph[ticket[0]].insert(ticket[1]);
        dfs(graph , "JFK" , ans);
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void dfs(umsmss& graph ,const string& u, vector<string>& ans){
        while(graph.count(u) && !graph[u].empty()){
            const  string v= *begin(graph[u]);
            graph[u].erase(begin(graph[u]));
            dfs(graph , v , ans);
        }
        ans.pb(u);
    }
};