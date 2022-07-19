#User function Template for python3
# https://practice.geeksforgeeks.org/problems/relative-sorting4323/1
# Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] 
# such that all the relative positions of the elements in the first array are the same as the 
# elements in the second array A2[ ].
# See example for better understanding.
# Note: If elements are repeated in the second array, consider their first occurance only.
class Solution:
    # A1[] : the input array-1
    # N : size of the array A1[]
    # A2[] : the input array-2
    # M : size of the array A2[]
    
    #Function to sort an array according to the other array.
    def relativeSort (self,A1, N, A2, M):
        mp = dict()
        res = []
        
        for i in A1:
            if i not in mp:
                mp[i] = 1
            else :
                mp[i] += 1
                
        for i in A2:
            if i not in mp:
                continue
            count = mp[i]
            while count:
                count -=1 
                res.append(i)
                
            mp.pop(i)
            
        temp = []
        for key in mp:
            count = mp[key]
            while count:
                count -=1 
                temp.append(key)
        
        temp.sort()
        
        return res + temp
                
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int (input ())
    while t > 0:
        n, m = list(map(int, input().split()))
        a1 = list(map(int, input().split()))
        a2 = list(map(int, input().split()))
        
        ob=Solution()
        a1 = ob.relativeSort (a1, n, a2, m)
        print (*a1, end = " ")
        
        print ()
        
        t -= 1

# } Driver Code Ends