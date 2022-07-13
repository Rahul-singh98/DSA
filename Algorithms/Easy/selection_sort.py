#User function Template for python3
# https://practice.geeksforgeeks.org/problems/selection-sort/1#
# Given an unsorted array of size N, use selection sort to sort arr[] in increasing order.
class Solution: 
    def select(self, arr, i):
        return min(arr)
    
    def selectionSort(self, arr,n):
        for i in range(0, n):
            minIndex = i
            for j in range(i+1, n):
                if arr[j] < arr[minIndex]:
                    minIndex = j
            arr[i], arr[minIndex] = arr[minIndex], arr[i]

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        Solution().selectionSort(arr, n)
        for i in range(n):
            print(arr[i],end=" ")
        print()
# } Driver Code Ends