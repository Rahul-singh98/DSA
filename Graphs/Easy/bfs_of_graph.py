# https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#
#User function Template for python3

class Solution:
    
    #Function to return Breadth First Traversal of given graph.
    def bfsOfGraph(self, V, adj):
        ans = []
        visited = [False for _ in range(V)]
        q = [0]
        
        while(len(q)> 0):
            top = q[0]
            q.pop(0)
            if(visited[top]):
                continue
            visited[top] = True
            ans.append(top)
            for i in adj[top]:
                q.append(i)
            
        return ans

#{ 
#  Driver Code Starts
if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        V, E = map(int, input().split())
        adj = [[] for i in range(V)]
        for _ in range(E):
            u, v = map(int, input().split())
            adj[u].append(v)
        ob = Solution()
        ans = ob.bfsOfGraph(V, adj)
        for i in range(len(ans)):
            print(ans[i], end = " ")
        print()
        

# } Driver Code Ends