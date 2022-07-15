#User function Template for python3
# https://practice.geeksforgeeks.org/problems/ncr1019/1/?difficulty[]=1&page=1&category[]=Mathematical&query=difficulty[]1page1category[]Mathematical#
# Given two integers n and r, find nCr. Since the answer may be very large, calculate the 
# answer modulo 109+7.
class Solution:
    def nCr(self, n, r):
        C = [[0 for x in range(r+1)] for x in range(n+1)]
        # Calculate value of Binomial
        # Coefficient in bottom up manner
        for i in range(n+1):
            for j in range(min(i, r)+1):
                # Base Cases
                if j == 0 or j == i:
                    C[i][j] = 1
     
                # Calculate value using
                # previously stored values
                else:
                    C[i][j] = (C[i-1][j-1] + C[i-1][j]) % 1000000007
     
        return (C[n][r]) % 1000000007


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends