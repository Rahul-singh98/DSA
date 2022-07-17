#User function Template for python3
# https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/1
# Given an array A[] of N positive integers. The task is to find the 
# maximum of j - i subjected to the constraint of A[i] < A[j] and 
# i < j.
class Solution:
    #Complete this function
    # Function to find the maximum index difference.
    def maxIndexDiff(self,A, N): 
        L = [0] * N
        R = [0] * N
        
        def max(a , b):
            return a if a > b else b
            
        def min(a, b):
            return a if a < b else b
        
        L[0] = A[0]
        for i in range(1, N):
            L[i] = min(A[i], L[i-1])
            
        R[N-1] = A[N-1]
        for i in range(N-2, -1, -1):
            R[i] = max(A[i], R[i+1])
            
        i, j , diff = 0, 0, -1
        while(i < N and j < N):
            if(L[i] <= R[j]):
                diff = max(diff, j-i)
                j += 1
            else :
                i += 1
                
        return diff


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            ob=Solution()
            print(ob.maxIndexDiff(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends