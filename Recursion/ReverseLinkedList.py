from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# class Solution:
#     def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         if (not head or not head.next):
#             return head

#         newHead = self.reverseList(head.next)
#         head.next.next = head
#         head.next = None

#         return newHead

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None

        while(head):
            next = head.next
            head.next = prev
            prev = head
            head = next

        return prev