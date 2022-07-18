#User function Template for python3


# https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
# Given two arrays A and B contains integers of size N and M, the task is to find numbers which are 
# present in the first array, but not present in the second array.
def findMissing(A,B,N,M):
    mp = dict()
    ans = []
    for i in B:
        if i not in mp:
            mp[i] = 1
        else:
            mp[i] += 1
            
    for i in A:
        if i not in mp:
            ans.append(i)
    return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3



t=int(input())
for _ in range(0,t):
   # n=int(input())
    l = list(map(int, input().split()))
    n=l[0]
    m=l[1]
    a = list(map(int,input().split()))
    b = list(map(int, input().split()))
    ans=findMissing(a,b,n,m)
    for each in ans:
        print(each,end=' ')
    print()
# } Driver Code Ends