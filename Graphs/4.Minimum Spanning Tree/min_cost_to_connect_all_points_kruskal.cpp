// tags:- Kruskal's algorithm
// https://leetcode.com/explore/learn/card/graph/621/algorithms-to-construct-minimum-spanning-tree/3858/
#include <bits/stdc++.h>
using namespace std;
class Edge{
public:
    int src,dest,weight;
    Edge(int x ,int y , int c ): src(x),dest(y),weight(c){}
};

struct Compare{
    bool operator()(const Edge& a , const Edge& b){
       return a.weight > b.weight;
    }
};

class UnionFind{
public:
    UnionFind(int sz) : root(sz) , rank(sz) {
        iota(root.begin(),root.end(),0);
        fill(rank.begin(),rank.end(),1);
    }

    int find(int x){
        return root[x] == x ? x : root[x] = find(root[x]);
    }

    void union_(int x , int y){
        int rootx = find(x);
        int rooty = find(y);
        if(rootx != rooty){
            if(rank[rootx] > rank[rooty]) root[rooty] = rootx;
            else if(rank[rootx] < rank[rooty]) root[rootx] = rooty;
            else{
                root[rooty] = rootx;
                rank[rootx]+=1;
            }
        }
    }

    bool connected(int x , int y){
        return find(x) == find(y);
    }

private:
    vector<int> root , rank;
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        int sz= points.size();
        priority_queue<Edge , vector<Edge> , Compare> pq;
        UnionFind uf(sz);

        for(int i=0;i<sz;i++){
            vector<int>& coords1= points[i];
            for(int j=i+1;j<sz;j++){
                vector<int>& coords2 = points[j];

                int cost = abs(coords1[0]-coords2[0]) + abs(coords1[1]-coords2[1]);
                pq.push(Edge(i,j,cost));
            }
        }

        int ans = 0;
        int count = sz-1;
        while(!pq.empty()&& count>0) {
            Edge e = pq.top();
            pq.pop();
            if(!uf.connected(e.src,e.dest)) {
                uf.union_(e.src,e.dest);
                ans += e.weight;
                count--;
            }
        }

        return ans;
    }
};

int main(){
    vector<vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};
    Solution s;
    cout << s.minCostConnectPoints(points)<< endl;
    return 0;
}