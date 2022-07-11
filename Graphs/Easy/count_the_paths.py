# User function Template for python3
# https://practice.geeksforgeeks.org/problems/count-the-paths4332/1#
# Given a directed acyclic graph(DAG) with n nodes labeled from 0 to n-1. 
# Given edges, s and d ,count the number of ways to reach from s to d.
# There is a directed Edge from vertex edges[i][0] to the vertex edges[i][1].

class Solution:
    ans = 0
    adj = []
    def possible_paths(self, edges, n, s, d):
        self.adj = [[] for _ in range(n)]
        
        for e in edges:
            self.adj[e[0]].append(e[1])
            
        self.dfs(s, d)
        
        return self.ans
        
    def dfs(self, src, dest):
        if src == dest:
            self.ans += 1
            return 
        
        for i in self.adj[src]:
            self.dfs(i, dest)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n, m, s, d = input().split()
        n = int(n); m = int(m); s = int(s); d = int(d);
        edges = []
        for _ in range(m):
            x,y = input().split()
            x = int(x); y = int(y);
            edges.append([x,y])
        obj = Solution()
        ans = obj.possible_paths(edges, n, s, d)
        print(ans)


# } Driver Code Ends