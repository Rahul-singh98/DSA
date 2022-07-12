#User function Template for python3

# https://practice.geeksforgeeks.org/problems/maximize-toys0331/1#
# Given an array arr[ ] of length N consisting cost of N toys and an integer K depicting
# the amount with you. Your task is to find maximum number of toys you can buy with K amount.
class Solution:
    def toyCount(self, N, K, arr):
        arr.sort()
        ans = 0
        i = 0
        while(K > 0 and i < N):
            if(arr[i] <= K):
                K -= arr[i]
                ans += 1
                
            else :
                break
            i += 1
            
        return ans


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, K = [int(x) for x in input().split()]
        arr = input().split()
        for it in range(N):
            arr[it] = int(arr[it])
        
        ob = Solution()
        print(ob.toyCount(N, K, arr))
# } Driver Code Ends