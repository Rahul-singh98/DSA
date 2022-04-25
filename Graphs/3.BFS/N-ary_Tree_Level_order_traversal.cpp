// tags:- BFS
// https://leetcode.com/explore/learn/card/graph/620/breadth-first-search-in-graph/3897/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        queue<Node*> q{{root}};
        
        while(!q.empty()){
            vector<int> currLevel;
            for(int sz=q.size();sz;--sz){
                Node* tmp = q.front();
                q.pop();
                currLevel.pb(tmp->val);
                for(Node* child:tmp->children) q.push(child);
            }
            ans.pb(currLevel);
        }      
        return ans;
    }
};