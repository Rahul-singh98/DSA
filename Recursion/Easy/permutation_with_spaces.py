#User function Template for python3
# https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1#
# Given a string you need to print all possible strings that can be made by placing spaces
# (zero or one) in between them. The output should be printed in sorted increasing order of 
# strings
class Solution:
    def permutation (self, s):
        ans = []
        
        def recur(i, x):
            if(i == len(s)):
                if x[len(x) -1 ] != " ":
                    ans.append(x)
                    
                return
            
            recur(i+1, x + s[i] + ' ')
            recur(i+1, x + s[i])
            
        recur(0, "")
        
        return ans



#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        S = input()
        ans = ob.permutation(S);
        write = "";
        for i in ans:
            write += "(" + i + ")"
        print(write)


# } Driver Code Ends