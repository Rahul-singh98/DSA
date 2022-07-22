#User function Template for python3

def rotate(mat): 
    # reversing the matrix
    for i in range(len(mat)):
        mat[i].reverse()

    # make transpose of the matrix
    for i in range(len(mat)):
        for j in range(i, len(mat)):

            # swapping mat[i][j] and mat[j][i]
            mat[i][j], mat[j][i] = mat[j][i], mat[i][j]



#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		N=int(input())
		arr=[int(x) for x in input().split()]
		matrix=[]

		for i in range(0,N*N,N):
			matrix.append(arr[i:i+N])

		rotate(matrix)
		for i in range(N): 
			for j in range(N): 
				print(matrix[i][j], end =' ') 
			print() 
        

# } Driver Code Ends
