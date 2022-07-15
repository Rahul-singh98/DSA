#User function Template for python3
# https://practice.geeksforgeeks.org/problems/a-simple-fraction0921/1#
# Given a fraction. Convert it into a decimal. 
# If the fractional part is repeating, enclose the repeating part in parentheses.
from collections import defaultdict
class Solution:
    def fractionToDecimal(self, num, den):
        div = num // den
        ans = str(div)
        rem = num % den
        
        if rem == 0:
            return ans
            
        mp = defaultdict(lambda x: 0)
        ans += '.'
        while rem > 0:
            if rem not in mp:
                mp[rem] = len(ans)
                temp = (rem * 10) // den
                ans += str(temp)
                rem = (rem * 10) % den
                
            else:
                index = mp[rem]
                temp = ans[:index] + "(" 
                temp += ans[index:] + ")"
                ans = temp
                break
                
        return ans
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        numerator, denominator = input().split()
        numerator = int(numerator); denominator = int(denominator)
        ob = Solution()
        ans = ob.fractionToDecimal(numerator, denominator)
        print(ans)
# } Driver Code Ends