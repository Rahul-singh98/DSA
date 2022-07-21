#User function Template for python3
# https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1
# Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a
# matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

#Function to modify the matrix such that if a matrix cell matrix[i][j]
#is 1 then all the cells in its ith row and jth column will become 1.
def booleanMatrix(matrix):
    row_flag = False
    col_flag = False
            
    # updating the first row and col 
    # if 1 is encountered
    for i in range(0, len(mat)) :
        
        for j in range(0, len(mat)) :
            if (i == 0 and mat[i][j] == 1) :
                row_flag = True
                    
            if (j == 0 and mat[i][j] == 1) :
                col_flag = True
            
            if (mat[i][j] == 1) :
                mat[0][j] = 1
                mat[i][0] = 1
                
    # Modify the input matrix mat[] using the 
    # first row and first column of Matrix mat
    for i in range(1, len(mat)) :
        
        for j in range(1, len(mat) + 1) :
            if (mat[0][j] == 1 or mat[i][0] == 1) :
                mat[i][j] = 1
                
    # modify first row if there was any 1
    if (row_flag == True) :
        for i in range(0, len(mat)) :
            mat[0][i] = 1
            
    # modify first col if there was any 1
    if (col_flag == True) :
        for i in range(0, len(mat)) :
            mat[i][0] = 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        r,c = map(int, input().strip().split())
        matrix = []
        for i in range(r):
            line = [int(x) for x in input().strip().split()]
            matrix.append(line)
        booleanMatrix(matrix)
        for i in range(r):
            for j in range(c):
                print(matrix[i][j], end=' ')
            print()


# } Driver Code Ends