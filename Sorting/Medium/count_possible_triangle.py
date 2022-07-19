#User function Template for python3
# https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1
# Given an unsorted array arr[] of n positive integers. Find the number of 
# triangles that can be formed with three different array elements as lengths of 
# three sides of triangles. 
class Solution:
    def findNumberOfTriangles(self, arr, n):
        n = len(arr)
        arr.sort()
        count = 0
        for i in range(0, n-2):
            k = i + 2
            for j in range(i + 1, n):
                while (k < n and arr[i] + arr[j] > arr[k]):
                    k += 1
                if(k>j):
                    count += k - j - 1
    
        return count

# Driver function to test above f

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.findNumberOfTriangles(arr,n))

# } Driver Code Ends