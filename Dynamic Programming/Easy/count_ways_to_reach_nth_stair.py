#User function Template for python3
# https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1#
# There are n stairs, a person standing at the bottom wants to reach the top. The person can
# climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach
# the top (order does matter).
class Solution:
    #Function to count number of ways to reach the nth stair.
    def countWays(self,n):
        mod = 1000000007
        dp = [1, 2]
        if n < 3:
            return dp[n-1]
            
        for i in range(2, n):
            sum = (dp[0] % mod + dp[1] % mod) % mod
            dp[0] = dp[1]
            dp[1] = sum
            
        return dp[1]

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
sys.setrecursionlimit(10**6)

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        m = int(input())
        ob=Solution()
        print(ob.countWays(m))

# } Driver Code Ends