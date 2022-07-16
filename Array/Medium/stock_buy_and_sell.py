#User function template for Python
# https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
# The cost of stock on each day is given in an array A[] of size N. 
# Find all the days on which you buy and sell the stock so that in 
# between those days your profit is maximum.
# Note: There may be multiple possible solutions. Return any one of 
# them. Any correct solution will result in an output of 1, whereas
# wrong solutions will result in an output of 0.
class Solution:
    #Function to find the days of buying and selling stock for max profit.
	def stockBuySell(self, A, n):
		x = 0
		y = 0
		ans = []
		for i in range(1, n):
		    if A[i] > A[i-1] and x == 0:
		        x = 1
		        ans.append([i-1])
		    elif A[i] < A[i-1] and x == 1:
		        x = 0
		        ans[y].append(i-1)
		        y += 1
		if x == 1:
            ans[y].append(n-1)
	    return ans


#{ 
 # Driver Code Starts
#Initial template for Python

def check(ans,A,p):
    c = 0
    for i in range(len(ans)):
        c += A[ans[i][1]]-A[ans[i][0]]
    if(c==p):
        return 1 
    else:
        return 0

if __name__=='__main__':
	t = int(input())
	while(t>0):
		n = int(input())
		A = [int(x) for x in input().strip().split()]
		ob = Solution()
		ans = ob.stockBuySell(A,n)
		p=0
		for i in range(n-1):
		    p += max(0,A[i+1]-A[i])
		if(len(ans) == 0):
			print("No Profit",end="")
		else:
			print(check(ans,A,p),end="")
		print()
		t-=1
# } Driver Code Ends