// tags:- BFS
// https://leetcode.com/explore/learn/card/graph/620/breadth-first-search-in-graph/3896/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        const int n=grid.size();
        if(!grid[0][0] && n==1) return 1;
        if(grid[0][0] || grid[n-1][n-1]) return -1;
        
        const vector<pair<int, int>> dirs{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
                                      {0, 1},   {1, -1}, {1, 0},  {1, 1}};
        
        int ans =0;
        vector<vector<bool>> seen(n , vector<bool>(n));
        queue<pair<int ,int>> q{{{0,0}}};
        seen[0][0]=true;
        
        while(!q.empty()){
            ++ans;
            for(int sz=q.size();sz>0 ; --sz){
                const auto t = q.front();
                int i = t.first;
                int j = t.second;
                q.pop();
                
                for(const auto dt: dirs){
                    const int x=i+dt.first;
                    const int y=j+dt.second;
                    if(x<0 || x==n || y<0 || y==n) continue;
                    if(grid[x][y] || seen[x][y]) continue;
                    if(x==n-1 && y==n-1) return ++ans;
                    q.emplace(x,y);
                    seen[x][y]=true;
                }
            }
        }
        
        return -1;
    }
};

int main(){
    return 0;
}