#User function Template for python3
# https://practice.geeksforgeeks.org/problems/juggler-sequence3930/1/#
# Juggler Sequence is a series of integers in which the first term starts with a positive 
# integer number a and the remaining terms are generated from the immediate previous term 
# using the below recurrence relation:

#  a_(k+1)={|_a_k^(1/2)_|   for even a_k; |_a_k^(3/2)_|   for odd a_k, 

# Given a number N, find the Juggler Sequence for this number as the first term of the sequence.
from math import sqrt
class Solution:
    def jugglerSequence(self, N):
        ans = []
        
        while(N != 1):
            ans.append(N)
            if(N % 2 == 0):
                N = int(sqrt(N))
            else:
                N = int(sqrt(N) * sqrt(N) * sqrt(N))
                
        ans.append(1)
        
        return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        arr = ob.jugglerSequence(N)
        for i in (arr):
            print(i,end=" ")
        print()
# } Driver Code Ends