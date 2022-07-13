#User function Template for python3
# https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1/#
# Given a positive integer N, return the Nth row of pascal's triangle.
# Pascal's triangle is a triangular array of the binomial coefficients formed by summing up 
# the elements of previous row.
#User function Template for python3
class Solution:

    def nthRowOfPascalTriangle(self,n):
        MOD = 1000000007
        if n==1:
            return [1]
        else:
            result = self.nthRowOfPascalTriangle(n-1)
            curr_lst = [1]
            for i in range(len(result)-1):
                curr_lst.append(((result[i] % MOD)+(result[i+1] % MOD))%MOD)
            curr_lst.append(1)
            return curr_lst

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        ob = Solution()
        ans=ob.nthRowOfPascalTriangle(n)
        for x in ans:
            print(x, end=" ")
        print()
        tc=tc-1
# } Driver Code Ends