// tags:- BFS
// https://leetcode.com/explore/learn/card/graph/620/breadth-first-search-in-graph/3853/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        if (graph.size() == 0) {
            return paths;
        }

        vector<int> path;
        queue<vector<int>> q;
        path.push_back(0);
        q.push(path);

        while (!q.empty()) {
            vector<int> currentPath = q.front();
            q.pop();
            int node = currentPath.back();
            for (int nextNode : graph[node]) {
                vector<int> tmpPath(currentPath.begin(), currentPath.end());
                tmpPath.push_back(nextNode);
                if (nextNode == graph.size() - 1) {
                    paths.push_back(tmpPath);
                } else {
                    q.push(tmpPath);
                }
            }
        }
        return paths;
    }
};