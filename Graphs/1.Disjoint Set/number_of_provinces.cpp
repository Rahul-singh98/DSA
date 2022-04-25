// https://leetcode.com/explore/learn/card/graph/618/disjoint-set/3845/
#include<bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    UnionFind(int sz) :root(sz),rank(sz), count(sz){
        for(int i=0;i<sz;i++){
            root[i]= i;
            rank[0] =1;
        }
    }
    
    // Using path compression technique
    int find(int x){
        if(x== root[x]) return x;
        return root[x] = find(root[x]);
    }
    
    void getUnion(int x , int y){
        int rootX= find(x);
        int rootY= find(y);
        if(rootX != rootY){
            if(rank[rootX] > rank[rootY]) root[rootY] =rootX;
            else if(rank[rootY] > rank[rootX]) root[rootX] = rootY;
            else {
                root[rootY] = rootX;
                rank[rootX]+=1;
            }
            count--;
        }
    }
    
    int getCount(){
        return count;
    }
    
private:
    vector<int> root , rank;
    int count;
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        UnionFind uf(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    uf.getUnion(i,j);
                }
            }
        }
        
        return uf.getCount();
    }
};
