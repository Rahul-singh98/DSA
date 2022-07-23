#User function Template for python3
# https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
# Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the
# first row that has the maximum number of 1's.
class Solution:

	def rowWithMax1s(self,arr, n, m):
		for i in range(m):
		    # Check in Each column
		    for j in range(n):
		        if arr[j][i] == 1:
		            return j
		    
		    
		return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        inputLine = list(map(int, input().strip().split()))
        arr = [[0 for j in range(m)] for i in range(n)]
        
        for i in range(n):
            for j in range(m):
                arr[i][j] = inputLine[i * m + j]
        ob = Solution()
        ans = ob.rowWithMax1s(arr, n, m)
        print(ans)
        tc -= 1

# } Driver Code Ends