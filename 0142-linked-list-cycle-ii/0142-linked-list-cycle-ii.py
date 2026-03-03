# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        sett = set()
        while(head!=None):
            if(head in sett):
                return head

            sett.add(head)
            head = head.next
        return None
        
        