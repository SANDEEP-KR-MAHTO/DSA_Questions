# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        # Middle element
        slow = head
        fast = head
        while(fast!=None and fast.next!=None):
            slow = slow.next
            fast = fast.next.next

        # Reverse the second half
        prev = None
        while(slow!=None):
            nextNode = slow.next
            slow.next = prev
            prev = slow
            slow = nextNode
        
        # Compare both the halfs
        # first->1->2->2->1
        # second->1->2
        first = head
        second = prev
        while(second!=None):
            if(first.val != second.val):
                return False
            
            first = first.next
            second = second.next

        return True
        