class ListNode:
    def __init__(self, val = 0, ptr=None):
        self.val = val
        self.next = ptr


def traverse(head: ListNode) -> None:
    if not head: return
    
    slow, fast, dummy = head, head, ListNode(0, head)
    # puts slow in the middle
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next