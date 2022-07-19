#User function Template for python3
# https://practice.geeksforgeeks.org/problems/triplets-with-sum-with-given-range/1
# Given an array Arr[] of N distinct integers and a range from L to R, the task is to count the number
# of triplets having a sum in the range [L, R].
class Solution:
    def countTriplets(self, Arr, N, L, R):
        if N < 3:
            return 0
            
        Arr.sort()
        
        less_than_R = 0
        for i in range(0, N-2):
            j = i+1
            k = N-1
            while j < k:
                sum = Arr[i] + Arr[j] + Arr[k]
                if(sum <= R):
                    less_than_R += k -j 
                    j += 1
                else :
                    k  -= 1
        
        less_than_L = 0
        
        for i in range(0, N-2):
            j = i+1
            k = N-1
            while j < k:
                sum = Arr[i] + Arr[j] + Arr[k]
                if(sum <= L-1):
                    less_than_L += k -j 
                    j += 1
                else :
                    k  -= 1
        
        return abs(less_than_L - less_than_R)
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        N = int(input())
        Arr = input().split()
        for itr in range(N):
            Arr[itr] = int(Arr[itr])
        L,R = input().split()
        L=int(L)
        R=int(R)
        ob = Solution()
        print(ob.countTriplets(Arr, N, L, R))
# } Driver Code Ends