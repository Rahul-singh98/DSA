# https://practice.geeksforgeeks.org/problems/valid-substring0624/1#
#User function Template for python3
# https://practice.geeksforgeeks.org/problems/valid-substring0624/1#
class Solution:
    def findMaxLen(ob, S):
        st = []
        ans = 0
        st.append(-1)
        
        for i in range(len(S)):
            if(S[i] == '('):
                st.append(i)
            else:
                st.pop()
                if(len(st)>0):
                    ans = max(ans , i - st[-1]);
                else:
                    st.append(i)
        
        return ans;


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        
        ob = Solution()
        print(ob.findMaxLen(S))
# } Driver Code Ends