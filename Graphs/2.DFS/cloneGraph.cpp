// tags:- DFS
// https://leetcode.com/explore/learn/card/graph/619/depth-first-search-in-graph/3900/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        if(graph.count(node)) return graph[node];
        Node* newnode = new Node(node->val);
        graph[node] = newnode;
        
        for(Node* n:node->neighbors) newnode->neighbors.pb(cloneGraph(n));
        
        return newnode;
    }
    
private:
    unordered_map<Node* , Node*> graph;
};