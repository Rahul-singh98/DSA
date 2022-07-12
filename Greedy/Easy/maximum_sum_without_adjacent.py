#User function Template for python3
# https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1#
# Given an array Arr of size N containing positive integers. Find the maximum sum of a 
# subsequence such that no two numbers in the sequence should be adjacent in the array.
class Solution:
    dp = []
    def findMaxSum(self,arr, n):
        self.dp = [-1] * n
        return self.solve(arr, n-1)
        
    def solve(self, arr, i):
        if(i < 0):
            return 0
        if self.dp[i] != -1:
            return self.dp[i]
            
        inc = arr[i] + self.solve(arr, i - 2);
        exc = self.solve(arr, i-1)
        
        self.dp[i] = max(inc, exc)
        return self.dp[i]
            

#{ 
#  Driver Code Starts
#Initial Template for Python 3




if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMaxSum(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends