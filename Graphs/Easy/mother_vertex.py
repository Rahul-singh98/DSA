# Kosaraju's Strongly Connected Component Algorithm.
# https://practice.geeksforgeeks.org/problems/mother-vertex/1#
# Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
# A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.
class Solution:
    #Function to find a Mother Vertex in the Graph.
    def findMotherVertex(self, V, adj):
        # visited[] is used for DFS. Initially all are
        # initialized as not visited
        visited =[False]*(V)

        # To store last finished vertex (or mother vertex)
        v=0

        # Do a DFS traversal and find the last finished
        # vertex
        for i in range(V):
            if visited[i] == False:
                self.DFSUtil(adj, i,visited)
                v = i

        # If there exist mother vertex (or vertices) in given
        # graph, then v must be one (or one of them)

        # Now check if v is actually a mother vertex (or graph
        # has a mother vertex). We basically check if every vertex
        # is reachable from v or not.

        # Reset all values in visited[] as false and do
        # DFS beginning from v to check if all vertices are
        # reachable from it or not.
        visited = [False]*(V)
        self.DFSUtil(adj, v, visited)
        if any(i == False for i in visited):
            return -1
        else:
            return v

            
    def DFSUtil(self, adj, v, visited):

        # Mark the current node as visited and print it
        visited[v] = True

        # Recur for all the vertices adjacent to this vertex
        for i in adj[v]:
            if visited[i] == False:
                self.DFSUtil(adj, i, visited)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import sys 

sys.setrecursionlimit(10**6) 
if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        V, E = map(int, input().split())
        adj = [[] for i in range(V)]
        for _ in range(E):
            u, v = map(int, input().split())
            adj[u].append(v)
        obj = Solution()
        ans = obj.findMotherVertex(V, adj)
        print(ans)
# } Driver Code Ends