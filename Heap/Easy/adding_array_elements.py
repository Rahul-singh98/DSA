# https://practice.geeksforgeeks.org/problems/adding-array-element4756/1#
from heapq import heappush, heappop, heapify

class Solution:
    def minOperations(self, arr, n, k):
        pq = []
        heapify(pq)
        
        for i in arr:
            heappush(pq, i)
        
        count = 0
        while(len(pq) > 0):
            top = heappop(pq)
            if(top >= k):
                break
            else:
                second_top = heappop(pq)
                heappush(pq, second_top + top)
                count += 1
                
        return count

#{ 
#  Driver Code Starts

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))

        ans = Solution().minOperations(arr, n, k)
        print(ans)
        tc -= 1

# } Driver Code Ends