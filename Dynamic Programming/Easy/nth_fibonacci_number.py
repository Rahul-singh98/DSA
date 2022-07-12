#User function Template for python3
# https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#
# Given a positive integer n, find the nth fibonacci number. Since the answer can be very 
# large, return the answer modulo 1000000007.
class Solution:
    
    def nthFibonacci(self, n):
        if n < 3:
            return 1
        dp = [1, 1]
        MOD = 1000000007
        
        for i in range(2, n):
            ans = (dp[0] + dp[1]) % MOD
            dp[0] = dp[1]
            dp[1] = ans
            
        return ans
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.nthFibonacci(n))
# } Driver Code Ends