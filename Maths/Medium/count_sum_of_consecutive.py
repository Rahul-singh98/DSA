#User function Template for python3

# https://practice.geeksforgeeks.org/problems/count-of-sum-of-consecutives3741/1#
# Given an integer N, the task is to find the number of ways to represent this number as a sum
# of 2 or more consecutive natural numbers.
class Solution:
    def getCount(self, N):
        count = 0
        L = 1
        while( L * (L + 1) < 2 * N):
            a = (1.0 * N - (L * (L + 1) ) / 2) / (L + 1)
            if (a - int(a) == 0.0):
                count += 1
            L += 1
        return count

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.getCount(N))
# } Driver Code Ends