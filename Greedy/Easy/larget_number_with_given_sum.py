#User function Template for python3
# https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1#
# Geek lost the password of his super locker. He remembers the number of digits N as well as
# the sum S of all the digits of his password. He know that his password is the largest number
# of N digits that can be made with given sum S. As he is busy doing his homework, help him 
# retrieving his password.
class Solution:
    #Function to return the largest possible number of n digits
    #with sum equal to given sum.
    def largestNum(self,n,s):
        ans = ["0"]* n
        for i in range(n):
            if(s > 9):
                s -= 9
                ans[i] = ('9')
            else:
                ans[i] = str(s)
                s = 0
                
        if s > 0 :
            return '-1'
        return "".join(ans)
        # code here
    
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n,s = map(int,input().strip().split())
        ob = Solution()
        print(ob.largestNum(n,s))
# } Driver Code Ends