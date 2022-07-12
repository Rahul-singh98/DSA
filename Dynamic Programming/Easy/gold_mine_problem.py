# User function Template for Python3
# https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1#
# Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a
# positive integer which is the amount of gold in tons. Initially the miner can start from
# any row in the first column. From a given cell, the miner can move
# * to the cell diagonally up towards the right 
# * to the right
# * to the cell diagonally down towards the right
# Find out maximum amount of gold which he can collect.
class Solution:
    def maxGold(self, n, m, M):
        maxGold = 0
        # Initialize the dp vector
        dp = [[-1 for i in range(m)] for j in range(n)]
         
        for i in range(n):
            # Recursive function call for  ith row.
            goldCollected = self.collectGold(M, i, 0, n, m, dp) 
            maxGold = max(maxGold, goldCollected)
     
        return maxGold

        
    def collectGold(self, gold, x, y, n, m, dp):
        # Base condition.
        if ((x < 0) or (x == n) or (y == m)):
            return 0
     
        if(dp[x][y] != -1):
            return dp[x][y]
     
        # Right upper diagonal
        rightUpperDiagonal = self.collectGold(gold, x - 1, y + 1, n, m, dp)
     
            # right
        right = self.collectGold(gold, x, y + 1, n, m, dp)
     
        # Lower right diagonal
        rightLowerDiagonal = self.collectGold(gold, x + 1, y + 1, n, m, dp)
     
        # Return the maximum and store the value
        dp[x][y] = gold[x][y] + max(max(rightUpperDiagonal, rightLowerDiagonal), right)
        return dp[x][y]

#{ 
#  Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m = [int(x) for x in input().split()]
        tarr = [int(x) for x in input().split()]
        M = []
        j = 0
        for i in range (n):
            M.append(tarr[j:j + m])
            j = j+m
        
        ob = Solution()
        print(ob.maxGold(n, m, M))
# } Driver Code Ends