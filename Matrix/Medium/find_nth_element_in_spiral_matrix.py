# You are required to complete this fucntion
# Function should return the an integer
# https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1
# Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained
# while traversing the matrix spirally. You need to complete the method findK which takes four
# arguments the first argument is the matrix A and the next two arguments will be n and m denoting
# the size of the matrix A and then the forth argument is an integer  k denoting the kth element . 
# The function will return the kth element obtained while traversing the matrix spirally.
def findK(matrix, r, c, tar):
    k = 0
    while(r > k and c > k):
        for j in range(k, c):
            tar -= 1
            if(tar == 0):
                return matrix[k][j]
            
        for i in range(k+1, r):
            tar -= 1
            if(tar == 0):
                return matrix[i][c-1]
            
        j = c-2
        while(k >= k and r != k+1):
            tar -= 1
            if(tar == 0):
                return matrix[r-1][j]
                
            j -= 1
            
        i = r -2
        while(i > k and c != k + 1):
            tar -= 1
            if(tar == 0):
                return matrix[i][k]
                
            i -= 1 
            
        r -= 1
        c -= 1
        k += 1
        
    return -1


#{ 
 # Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n[1])]for j in range(n[0])]
        c=0
        for i in range(n[0]):
            for j in range(n[1]):
                matrix[i][j] = arr[c]
                c+=1
        print(findK(matrix, n[0], n[1], n[2]))
# } Driver Code Ends