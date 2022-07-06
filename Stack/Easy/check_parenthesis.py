# https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
#User function Template for python3

class Solution:
    
    #Function to check if brackets are balanced or not.
    def ispar(self,x):
        n = len(x)
        st = []
        for ch in x:
            if(self.isOpen(ch)):
                st.append(ch)
            else:
                if(len(st) == 0):
                    return False
                if(st.pop() != self.getOpposite(ch)):
                    return False
                    
        return True if len(st) == 0 else False
            
    def isOpen(self, x)->bool:
        if(x == '(' or x == '{' or x == '['):
            return True
        return False
        
    def getOpposite(self, x):
        if(x == ')'):
            return '('
        if(x == '}'):
            return '{'
        return '['

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

#Contributed by : Nagendra Jha


_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        #n = int(input())
        #n,k = map(int,imput().strip().split())
        #a = list(map(int,input().strip().split()))
        s = str(input())
        obj = Solution()
        if obj.ispar(s):
            print("balanced")
        else:
            print("not balanced")
# } Driver Code Ends