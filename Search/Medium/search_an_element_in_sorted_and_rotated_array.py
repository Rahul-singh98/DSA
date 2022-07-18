#User function Template for python3
# https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1
# Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an 
# element K. The task is to find the index of the given element K in the array A.
def Search(arr,n,k):
    l, r= 0, n-1
    
    while(l <= r):
        mid = int(l + (r - l)//2)
        if arr[mid] == k:
            return mid
            
        elif arr[mid] < k:
            if k > arr[r] and arr[r] > arr[mid]:
                r = mid -1
            else :
                l = mid + 1
                
        else:
            if k < arr[l] and arr[l] < arr[mid]:
                l = mid + 1
            else:
                r = mid - 1
                
    return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tcs=int(input())
    for _ in range(tcs):
        n=int(input())
        arr=[int(x) for x in input().split()]
        k=int(input())

        print(Search(arr,n,k))

# } Driver Code Ends