// tags:- Kruskal's algorithm
// https://leetcode.com/explore/learn/card/graph/621/algorithms-to-construct-minimum-spanning-tree/3861/
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

bool operator<(const Edge& edge1, const Edge& edge2) {
    return edge1.weight > edge2.weight;
}

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        int sz= points.size();
        priority_queue<Edge> pq;
        vector<int> visited(sz);
        
        vector<int>& coords1= points[0];
        for(int j=1;j<sz;j++){
            vector<int>& coords2 = points[j];
            int cost = abs(coords1[0]-coords2[0]) + abs(coords1[1]-coords2[1]);
            pq.push(Edge(0,j,cost));
        }

        visited[0]=true;
        int ans = 0;
        int count = sz-1;
        while(!pq.empty()&& count>0) {
            Edge e = pq.top();
            pq.pop();
            int p1 = e.src;
            int p2 = e.dest;
            int cost = e.weight;
            if(!visited[p2]){
                ans+=cost;
                visited[p2]=true;
                for(int i=0;i<sz;i++){
                    if(!visited[i]){
                        int dist = abs(points[p2][0]-points[i][0]) + abs(points[p2][1]-points[i][1]);
                        pq.push(Edge(p2,i,dist));
                    }
                }

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