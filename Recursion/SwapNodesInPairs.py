from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
    
    def traverseList(self):
        while (self.head):
            print(self.head.val)
            self.head=self.head.next

class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        length = self.getLength(head)
        dummy = ListNode(0, head)
        prev = dummy
        curr = head

        for _ in range(length//2):
            next = curr.next
            curr.next = next.next
            next.next = prev.next
            prev.next = next
            prev = curr
            curr = curr.next

        return dummy.next

    def getLength(self ,head: ListNode)->int:
        length = 0
        while head:
            length+=1
            head=head.next
        return length

if __name__== "__main__":
    head = LinkedList()
    node1 = ListNode(1)
    node2= ListNode(2)
    node3 = ListNode(3)
    node4= ListNode(4)

    node1.next = node2
    node2.next = node3
    node3.next = node4

    head.head = node1
    Solution().swapPairs(head)
    head.traverseList()