# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
         output = ListNode(next=head)
         cur = output

         while cur.next is not None and cur.next.next is not None:
            nxt, nxt_nxt = cur.next, cur.next.next

            cur.next, nxt.next, nxt_nxt.next = nxt_nxt, nxt_nxt.next,nxt

            cur = cur.next.next

         return output.next
        