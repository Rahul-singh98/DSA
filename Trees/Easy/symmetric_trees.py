# https://practice.geeksforgeeks.org/problems/symmetric-tree/1#
#User function Template for python3

class Solution:
    # return true/false denoting whether the tree is Symmetric or not
    def isSymmetric(self, root):
        if root is None:
            return True
        
        q = []
        q.append(root)
        
        while(len(q) > 0):
            n = len(q)
            arr = []
            
            while(n):
                temp = q.pop(0);
                n -= 1
                if(temp is None):
                    arr.append(-1)
                    continue
                arr.append(temp.data)
                
                q.append(temp.left)
                q.append(temp.right)
                
            if(not self.isValid(arr)):
                return False
                
        return True
        
    def isValid(self, arr):
        n = len(arr)
        if n == 1:
            return True
        
        for i in range(n//2):
            if(arr[i] != arr[n-i-1]):
                return False
                
        return True

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#Contributed by Sudarshan Sharma
from collections import deque
# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

# Function to Build Tree   
def buildTree(s):
    #Corner Case
    if(len(s)==0 or s[0]=="N"):           
        return None
        
    # Creating list of strings from input 
    # string after spliting by space
    ip=list(map(str,s.split()))
    
    # Create the root of the tree
    root=Node(int(ip[0]))                     
    size=0
    q=deque()
    
    # Push the root to the queue
    q.append(root)                            
    size=size+1 
    
    # Starting from the second element
    i=1                                       
    while(size>0 and i<len(ip)):
        # Get and remove the front of the queue
        currNode=q[0]
        q.popleft()
        size=size-1
        
        # Get the current node's value from the string
        currVal=ip[i]
        
        # If the left child is not null
        if(currVal!="N"):
            
            # Create the left child for the current node
            currNode.left=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.left)
            size=size+1
        # For the right child
        i=i+1
        if(i>=len(ip)):
            break
        currVal=ip[i]
        
        # If the right child is not null
        if(currVal!="N"):
            
            # Create the right child for the current node
            currNode.right=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.right)
            size=size+1
        i=i+1
    return root
    
    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        root=buildTree(s)
        ob = Solution()
        if ob.isSymmetric(root):
            print("True")
        else:
            print("False")
        
        

# } Driver Code Ends