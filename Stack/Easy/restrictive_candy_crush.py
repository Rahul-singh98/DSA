# https://practice.geeksforgeeks.org/problems/8c8f95810b05b4cab665f2997d36991bd58308a2/1/#
#User function Template for python3

class Solution:
    def Reduced_String(self, k, s):
        if k == 1:
            return ""
            
        st = []
        
        for ch in s:
            if(len(st) == 0):
                st.append([ch, 1])
                
            elif(st[-1][0] != ch):
                st.append([ch, 1])
                
            else:
                st.append([ch, st[-1][1] +1])
                if(st[-1][1] == k):
                    temp = k
                    while(temp):
                        st.pop()
                        temp -= 1
        
        return "".join([i[0] for i in st])


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        k=int(input())
        s=input().strip()
        obj = Solution()
        print(obj.Reduced_String(k,s))

# } Driver Code Ends