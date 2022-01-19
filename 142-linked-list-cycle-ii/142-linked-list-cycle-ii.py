# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        s,f=head,head
        while f and f.next:
            s=s.next
            f=f.next.next
            if s==f:
                s=head
                while s!=f:
                    s=s.next
                    f=f.next
                return s
        return None
        