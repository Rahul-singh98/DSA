# https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1#
#User function Template for python3


class Solution:
    
    #Function to convert an infix expression to a postfix expression.
    def getPrecedence(self, ch)->int:
        if(ch == '^'):
            return 3
        if(ch == '/' or ch == '*' ):
            return 2
        if(ch == '+' or ch == '-'):
            return 1
        return -1
        
    def isOperand(self, ch):
        return ch.isalpha()
        
    def InfixtoPostfix(self, exp):
        ans = ""
        st = []
        for ch in exp:
            if(self.isOperand(ch)):
                ans += ch
                
            elif(ch == '('):
                st.append(ch)
                
            elif(ch == ')'):
                while(st[-1] != '('): 
                    top = st.pop()
                    ans += top
                st.pop()
                
            else:
                while(len(st) > 0 and (self.getPrecedence(st[-1]) >= self.getPrecedence(ch))):
                    top = st.pop()
                    ans += top
                    
                st.append(ch)
                
        while(len(st) > 0):
            top = st.pop()
            ans += top
            
        return ans;
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

# This code is contributed by Nikhil Kumar Singh(nickzuck_007)


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
        exp = str(input())
        ob=Solution()
        print(ob.InfixtoPostfix(exp))
# } Driver Code Ends