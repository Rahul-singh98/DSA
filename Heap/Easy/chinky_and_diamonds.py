# https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1#
#User function Template for python3

from heapq import heappop, heappush, heapify
class Solution:
    def maxDiamonds(self, A, N, K):
        pq = []
        heapify(pq)
        
        for i in A:
            heappush(pq, -1 * i)
            
        ans = 0
        while(K):
            ele = heappop(pq)
            ele = (-1 * ele)
            ans += ele
            heappush(pq, -1 * (ele // 2))
            K -= 1    
        
        return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        A=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.maxDiamonds(A,N,K))
# } Driver Code Ends