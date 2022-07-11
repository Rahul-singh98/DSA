# User function Template for Python3
# https://practice.geeksforgeeks.org/problems/eulerian-path-in-an-undirected-graph5052/1/#
# Given an adjacency matrix representation of an unweighted undirected graph named graph, 
# which has N vertices. You have to find out if there is an eulerian path present in the
# graph or not.
# Note: The graph consists of a single component
class Solution:
    def eulerPath(self, n, graph):
        numofadj = []
 
        # Find out number of edges each
        # vertex has
        for i in range(n):
            numofadj.append(sum(graph[i]))
     
        # Find out how many vertex has
        # odd number edges
        startpoint, numofodd = 0, 0
        for i in range(n - 1, -1, -1):
            if (numofadj[i] % 2 == 1):
                numofodd += 1
                startpoint = i
     
        # If number of vertex with odd number of edges
        # is greater than two return "No Solution".
        if (numofodd > 2):
            return 0
            
        return 1

#{ 
#  Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input().strip())
        graph = []
        for i in range(N):
            graph.append(list(map(int, input().strip().split())))
        
        ob = Solution()
        print(ob.eulerPath(N, graph))
# } Driver Code Ends