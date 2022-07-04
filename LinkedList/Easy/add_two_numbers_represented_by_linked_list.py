# https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#
#User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, first, second):
        n, m = 0, 0
        a, b = [], []
        while(first is not None):
            a.append(first.data)
            first = first.next
            
        while(second is not None):
            b.append(second.data)
            second = second.next
            
        curr, prev = None, None
        carry = 0
        while(len(a) > 0 or len(b) > 0):
            sum = 0
            if(len(a) > 0):
                sum += a.pop()
                
            if(len(b) > 0):
                sum += b.pop()
                
            sum += carry
            carry = sum // 10
            sum %= 10
            
            newNode = Node(sum)
            prev = curr
            curr = newNode
            curr.next = prev
            
        if(carry > 0):
            newNode = Node(carry)
            prev = curr
            curr = newNode
            curr.next = prev
            
        return curr
            
            

#{ 
#  Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data,end=' ')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        
        n = int(input())
        arr1 = ( int(x) for x in input().split() )
        LL1 = LinkedList()
        for i in arr1:
            LL1.insert(i)
        
        m = int(input())
        arr2 = ( int(x) for x in input().split() )
        LL2 = LinkedList()
        for i in arr2:
            LL2.insert(i)
        
        res = Solution().addTwoLists(LL1.head, LL2.head)
        printList(res)
# } Driver Code Ends