# https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#
#User function Template for python3

def printFirstNegativeInteger( A, N, k):
    q = []
    ans = []
    
    for i in range(k):
        if(A[i] < 0):
            q.append(i)
    
    if(len(q)> 0):
        ans.append(A[q[0]])
    else:
        ans.append(0)
        
    for i in range(k, N):
        if(A[i] < 0):
            q.append(i)
            
        if(len(q) > 0 and i - q[0] >= k):
            q.pop(0)
        
        if(len(q) > 0):
            ans.append(A[q[0]])
        else:
            ans.append(0)
            
    return ans

#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        k = int(input())
        
        answer = printFirstNegativeInteger(a, n, k)
        for i in answer:
            print(i,end=" ")
        print()

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends