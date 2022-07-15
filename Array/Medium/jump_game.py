#User function Template for python3
# https://practice.geeksforgeeks.org/problems/jump-game/1/#
# Given an positive integer N and a list of N integers A[]. Each element in the array denotes
# the maximum length of jump you can cover. Find out if you can make it to the last index if
# you start at the first index of the list.
class Solution:
    def canReach(self, A, N):
        if N == 1:
            return 1
        
        reach = A[0]
        
        for i in range(1, N):
            if(reach < i):
                return 0
                
            if reach >= N: 
                return 1
                
            reach = max(reach , A[i] + i)
            
        return 1

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        A=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.canReach(A,N))
# } Driver Code Ends