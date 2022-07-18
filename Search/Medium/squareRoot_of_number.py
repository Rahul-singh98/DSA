#User function Template for python3
# https://practice.geeksforgeeks.org/problems/square-root/1
# Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).
#Complete this function
class Solution:
    def floorSqrt(self, x): 
        l , r, mid = 1, x, 0
        res = 0
        
        while(l <= r):
            mid = (l + r) // 2
            sqr = mid * mid
            if(sqr < x):
                res = mid
                l = mid + 1
            elif(sqr == x):
                res = mid
                break;
            elif(sqr > x):
                r = mid - 1
                
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            x=int(input())
            
            print(Solution().floorSqrt(x))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends