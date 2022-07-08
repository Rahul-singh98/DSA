# https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#
#User function Template for python3

class Height:
    def __init(self):
        self.h = 0

class Solution:
    
    #Function to return the diameter of a Binary Tree.
    def diameter(self,root):
        height = Height()
        return self.diameterOpt(root, height)
        
    def diameterOpt(self, root, height):
        # to store height of left and right subtree
        lh = Height()
        rh = Height()
    
        # base condition- when binary tree is empty
        if root is None:
            height.h = 0
            return 0
    
        
        # ldiameter --> diameter of left subtree
        # rdiameter  --> diameter of right subtree
        
        # height of left subtree and right subtree is obtained from lh and rh
        # and returned value of function is stored in ldiameter and rdiameter
        
        ldiameter = self.diameterOpt(root.left, lh)
        rdiameter = self.diameterOpt(root.right, rh)
    
        # height of tree will be max of left subtree
        # height and right subtree height plus1
    
        height.h = max(lh.h, rh.h) + 1
    
        # return maximum of the following
        # 1)left diameter
        # 2)right diameter
        # 3)left height + right height + 1
        return max(lh.h + rh.h + 1, max(ldiameter, rdiameter))

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#Contributed by Sudarshan Sharma
from collections import deque
import sys
sys.setrecursionlimit(50000)
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
        k=Solution().diameter(root)
        print(k)



# } Driver Code Ends