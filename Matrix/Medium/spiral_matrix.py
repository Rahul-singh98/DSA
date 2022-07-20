#User function Template for python3
# https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
# Given a matrix of size r*c. Traverse the matrix in spiral form.

class Solution:
    
    #Function to return a list of integers denoting spiral traversal of matrix.
    def spirallyTraverse(self,matrix, r, c): 
        v = []
        k = 0
        
        while r > k and c > k:
            for i in range(k, c):
                v.append(matrix[k][i])
                
            for i in range(k+1, r):
                v.append(matrix[i][c-1])
                
            j = c-2
            while(j >=k and r!=k+1):
                v.append(matrix[r-1][j])
                j -= 1
                
            i = r-2
            while(i > k and c!=k+1):
                v.append(matrix[i][k])
                i -= 1
                
            r -= 1
            c -= 1
            k += 1

        return v

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        r,c = map(int, input().strip().split())
        values = list(map(int, input().strip().split()))
        k = 0
        matrix =[]
        for i in range(r):
            row=[]
            for j in range(c):
                row.append(values[k])
                k+=1
            matrix.append(row)
        obj = Solution()
        ans = obj.spirallyTraverse(matrix,r,c)
        for i in ans:
            print(i,end=" ")
        print()

# } Driver Code Ends