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
        stack<int> st;
        st.push(source);
            
        while(!st.empty()){
            int v= st.top();
            st.pop();
            
            if(v==destination) return true;
            if(visited[v]) continue;
            visited[v] = true;
            for(int g:graph[v]){
                st.push(g);
            }
            
        }
        return false;
    }

};