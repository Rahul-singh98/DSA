#User function Template for python3
# https://practice.geeksforgeeks.org/problems/adding-ones3628/1
# You start with an array A of size N. Also, A[i] = 0 for i = 1 to N. You will be given
# K positive integers. Let j be one of these integers, you have to add 1 to all A[i],
# for i ≥ j. Your task is to print array A after all these K updates are done.
class Solution:
    def update(self, a, n, updates, k):
        for i in updates:
            a[i-1] += 1
            
        for i in range(1, n):
            a[i] += a[i-1]



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n , k = sz[0] , sz[1]
        a = [0 for i in range(n)]
        updates = [int(x) for x in input().strip().split()]
        ob=Solution()
        ob.update(a, n, updates, k)
        print(*a)

        T -= 1


# } Driver Code Ends