#User function Template for python3
# https://practice.geeksforgeeks.org/problems/number-of-paths0926/1#
# The problem is to count all the possible paths from top left to bottom right of a MxN 
# matrix with the constraints that from each cell you can either move to right or down.
class Solution:
    def numberOfPaths (self, n, m):
        if n == 1 or m ==1:
            return 1
            
        return self.numberOfPaths(n-1, m) + self.numberOfPaths(n, m-1)
 


#{ 
#  Driver Code Starts
#Initial Template for Python 3

        

if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        m, n = map(int, input().split())
        ans = ob.numberOfPaths(m, n)
        print(ans)




# } Driver Code Ends