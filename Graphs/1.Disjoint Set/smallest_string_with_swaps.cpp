// tags:-Disjoint Set
// https://leetcode.com/explore/learn/card/graph/618/disjoint-set/3913/
#include<bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    UnionFind(int sz): root(sz){
        iota(root.begin(), root.end(), 0);
    }

    int find(int x){
        return root[x] == x ? x : root[x] = find(root[x]);
    }

    void union_(int x , int y){
        root[find(x)] = find(y);
    }

private:
    vector<int> root;
};

struct compare{
    bool operator()(const char a , const char b){
        return a > b;
    }
};

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        string ans;
        UnionFind uf(s.length());
        unordered_map<int , priority_queue<char , vector<char> , compare>> mp;

        for(vector<int>& pair:pairs) uf.union_(pair[0] , pair[1]);
        for(int i=0;i<s.length();i++) mp[uf.find(i)].push(s[i]);
        
        
        for(int i=0;i<s.length();i++) ans+=mp[uf.find(i)].top() , mp[uf.find(i)].pop();
        return ans;
    }
};
