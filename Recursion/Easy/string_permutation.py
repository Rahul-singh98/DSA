#User function Template for python3
# https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1#
# Given a string S. The task is to find all permutations of a given string.
class Solution:
    
    def permutation(self,s):
        self.ans = []
        self.permute(s, "")
        
        return self.ans
        
    def permute(self,s , ans):
        if (len(s) == 0):
            self.ans.append(ans)
            return
        
        for i in range(len(s)):
            ch = s[i]
            left_substr = s[0:i]
            right_substr = s[i + 1:]
            rest = left_substr + right_substr
            self.permute(rest, ans + ch)
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    T=int(input())
    while(T>0):
        s=input()
        ob=Solution()
        ans=ob.permutation(s)
        for i in ans:
            print(i,end=" ")
        print()
        
        T-=1
# } Driver Code Ends