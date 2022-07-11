#User function Template for python3
# https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
class Solution:
    arr = []
    visited = []
    #Function to return a list containing the DFS traversal of the graph.
    def dfsOfGraph(self, V, adj):
        self.arr = []
        self.visited = [False] * V
        self.dfs(adj, 0)
        
        return self.arr
        
    def dfs(self, adj, idx):
        if(self.visited[idx]):
            return
            
        self.visited[idx] = True
        self.arr.append(idx)
        
        for i in adj[idx]:
            if not self.visited[i]:
                self.dfs(adj, i)
        

#{ 
#  Driver Code Starts
if __name__ == '__main__':
    T=int(input())
    while T>0:
        V,E=map(int,input().split())
        adj=[[] for i in range(V+1)]
        for i in range(E):
            u,v=map(int,input().split())
            adj[u].append(v)
            adj[v].append(u)
        ob=Solution()
        ans=ob.dfsOfGraph(V,adj)
        for i in range(len(ans)):
            print(ans[i],end=" ")
        print()
        T-=1
# } Driver Code Ends