// tags:- BFS
// https://leetcode.com/explore/learn/card/graph/620/breadth-first-search-in-graph/3895/
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        Node* prev = root;
        while(prev && prev->left){
            Node temp(0);

            for(Node* iterator = &temp; prev ; prev = prev->next){
                iterator->next = prev->left;
                iterator = iterator->next;
                iterator->next = prev->right;
                iterator = iterator->next;
            }

            prev = temp.next;
        }

        return root;
    
    }
};
