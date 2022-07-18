# https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
# Given an array arr[] of N non-negative integers representing the height of blocks. 
# If width of each block is 1, compute how much water can be trapped between the 
# blocks during the rainy season. 
class Solution:
    def trappingWater(self, arr,n):
        res = 0
        i, j = 0, n-1
        
        left, right = 0, 0
        while(i <= j):
            if arr[i] < arr[j]:
                if arr[i] > left:
                    left = arr[i]
                else:
                    res += left- arr[i]
                
                i += 1
                
            else:
                if arr[j] > right:
                    right = arr[j]
                else:
                    res += right - arr[j]
                    
                j -= 1
                
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            obj = Solution()
            print(obj.trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()



# } Driver Code Ends